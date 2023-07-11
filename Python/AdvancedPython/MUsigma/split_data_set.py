import pandas as pd


def convert_xlsx_to_csv(xlsx_file_path, csv_file_path):
    # Read the XLSX file into a DataFrame
    data = pd.read_excel(xlsx_file_path)

    # Write the DataFrame to a CSV file
    data.to_csv(csv_file_path, index=False)


# Provide the file paths for the XLSX and CSV files
xlsx_file_path = '/Users/bunty/Downloads/MuSigma Hackathon/4.Mini Project/Stat Forecasting - Mini Project.xlsx'
csv_file_path = 'time_series.csv'

# Convert XLSX to CSV
convert_xlsx_to_csv(xlsx_file_path, csv_file_path)
