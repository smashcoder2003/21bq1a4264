from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select
from selenium.common.exceptions import NoSuchElementException
import scrape_eamcet_table
import time

driver = webdriver.Chrome()
driver.get("https://eapcet-sche.aptonline.in/EAPCET/collegeWiseAllotedReport.xls")
colleges = driver.find_element(By.ID, 'programmeId')
time.sleep(1)
colleges = colleges.text.split('\n')
colleges = set(colleges[1:])
time.sleep(1)


for college in colleges:
    drpDown = Select(driver.find_element(By.NAME, 'programmeId'))
    time.sleep(0.1)
    drpDown2 = Select(driver.find_element(By.NAME, 'collegeId'))
    time.sleep(0.1)
    submit = driver.find_element(By.ID, 'SUBMIT')
    drpDown.select_by_visible_text(college.strip())
    time.sleep(0.1)
    try:
        drpDown2.select_by_visible_text("MECHANICAL ENGINEERING")
        submit.click()
        noOfRecords = Select(driver.find_element(By.NAME, "example_length"))
        noOfRecords.select_by_visible_text('100')
        odd = driver.find_elements(By.CLASS_NAME, 'odd')
        even = driver.find_elements(By.CLASS_NAME, 'even')
        odd.extend(even)
        scrape_eamcet_table.scrapeEamcetTable(odd, college.strip())
        time.sleep(0.1)
    except NoSuchElementException:
        continue
input("press Enter to Finish process: ")
