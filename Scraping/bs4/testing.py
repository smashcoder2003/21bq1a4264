from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select
driver = webdriver.Chrome()
driver.get("https://eapcet-sche.aptonline.in/EAPCET/collegeWiseAllotedReport.xls")
input()
length = Select(driver.find_element(By.NAME, 'example_length'))
length.select_by_visible_text("100")

