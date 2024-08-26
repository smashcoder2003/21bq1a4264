from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select
from selenium.common.exceptions import NoSuchElementException
import scrape_eamcet_table
import time
from pprint import pprint
import os

driver = webdriver.Chrome()
driver.get("https://eapcet-sche.aptonline.in/EAPCET/collegeWiseAllotedReport")
colleges = driver.find_element(By.ID, 'collegeId')
time.sleep(1)
colleges = colleges.text.split('\n')
colleges = [college.strip() for college in colleges if len(college.strip()) != 0]
colleges = set(colleges[1:])
time.sleep(1)
pprint(colleges)
input()

# Getting the branches
def getAllBranches():
    all_branches: set = set()

    for college in colleges:
        drpDown = Select(driver.find_element(By.NAME, 'collegeId'))
        time.sleep(0.2)
        drpDown.select_by_visible_text(college.strip())
        branches = driver.find_element(By.NAME, 'branchcode').text.split('\n')
        branches = [branch.strip() for branch in branches if len(branch.strip()) > 0]
        for branch in branches:
            all_branches.add(branch)
    return all_branches

def createAllBranchDirs():
    all_branches: set = getAllBranches()
    for branch in all_branches:
        os.mkdir('') # Enter the dir where all the data should be stored


createAllBranchDirs()

# Getting all the branches
branches = getAllBranches()

for college in colleges:
    drpDown = Select(driver.find_element(By.NAME, 'collegeId'))
    time.sleep(0.2)
    drpDown2 = Select(driver.find_element(By.NAME, 'branchcode'))
    time.sleep(0.2)
    submit = driver.find_element(By.ID, 'SUBMIT')
    drpDown.select_by_visible_text(college.strip())
    time.sleep(0.2)
    try:
        for branch in branches:
            drpDown2.select_by_visible_text(branch)
            submit.click()
            noOfRecords = Select(driver.find_element(By.NAME, "example1_length"))
            noOfRecords.select_by_visible_text('100')
            odd = driver.find_elements(By.CLASS_NAME, 'odd')
            even = driver.find_elements(By.CLASS_NAME, 'even')
            odd.extend(even)
            if len(odd) > 0:
                scrape_eamcet_table.scrapeEamcetTable(odd, college)
                time.sleep(0.2)
    except NoSuchElementException:
        continue
input("press Enter to Finish process: ")
