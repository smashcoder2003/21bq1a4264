from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select
from pprint import pprint
import time

driver = webdriver.Chrome()
driver.get("https://eapcet-sche.aptonline.in/EAPCET/collegeWiseAllotedReport")
colleges = driver.find_element(By.ID, 'collegeId')
time.sleep(1)
colleges = colleges.text.split('\n')
colleges = [college.strip() for college in colleges if len(college.strip()) != 0]
colleges = set(colleges[1:])
time.sleep(1)

drpDown = 
print(all_branches)
input()