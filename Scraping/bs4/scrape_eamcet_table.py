import openpyxl
import time

def scrapeEamcetTable(table, collegeName, branchName):
    sheet = openpyxl.Workbook()
    active_sheet = sheet.active
    active_sheet.append(["S.NO", "HALL TICKET NO", "RANK",
                         "APPLICANT NAME", "GENDER", "CASTE", "REGION",
                         "ALLOCATED CATEGORY", "PHASE"
                         ])
    for row in table:
        data = row.text.split()
        new_data = data[:3]
        applicant_name = " ".join(data[3:-5])
        new_data.append(applicant_name)
        remaining_details = data[-5:]
        new_data.extend(remaining_details)
        active_sheet.append(new_data)

    sheet.save(f"/Users/bhargavbunty/Documents/21bq1a4264/Scraping/bs4/2024/{branchName}/{collegeName}.xlsx")

