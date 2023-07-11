import pandas as pd


def convert_xlsm_to_csv(xlsm_file, csv_file):
    # Read the XLSM file
    xl = pd.ExcelFile(xlsm_file)

    # Iterate over each sheet in the XLSM file
    for sheet_name in xl.sheet_names:
        # Read the sheet into a DataFrame
        df = xl.parse(sheet_name)

        # Save the DataFrame as a CSV file
        df.to_csv(f"{csv_file}_{sheet_name}.csv", index=False)


# Example usage
xlsm_file_path = '/Users/bunty/Documents/elephantinindia.xlsm'  # Replace with the path to your XLSM file
csv_file_path = '/Users/bunty/Documents/elephantinindia.csv'  # Replace with the desired output CSV file path

convert_xlsm_to_csv(xlsm_file_path, csv_file_path)
