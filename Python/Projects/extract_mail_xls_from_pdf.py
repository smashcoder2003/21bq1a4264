import pandas as pd
import tabula
import re

# Enter the file name you want the PDF to convert to.
filename = "extracted"

tabula.convert_into("/Users/bunty/Downloads/Cutomer Data New.pdf", f"{filename}.csv", pages='all')

# Read the CSV into a pandas DataFrame.
pdf = pd.read_csv(f"{filename}.csv")

# Define the list of domains you want to extract (without the "@" symbol).
mail_domains = [
    "comcast.net",
]

# Combine the domains into a regular expression pattern with the `|` (OR) operator.
mail_pattern = r".*@(?:{}$)".format("|".join(re.escape(domain) for domain in mail_domains))

# Use the `pd.notna()` function to filter out rows with non-NaN values in the 'Email' column.
df_notna = pdf[pd.notna(pdf['Email'])]

# Use the `str.contains()` method with the regular expression pattern to filter rows.
df_matching_emails = df_notna[df_notna['Email'].str.contains(mail_pattern, flags=re.IGNORECASE, regex=True)]

# Save the filtered DataFrame to an Excel file.
df_matching_emails.to_excel(f"{filename}_matching_emails.xlsx", index=False)
