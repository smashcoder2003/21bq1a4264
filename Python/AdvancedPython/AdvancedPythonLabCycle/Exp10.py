import pandas as pd
import matplotlib.pyplot as plt

# Read the data from the CSV file
data = pd.read_csv("marks.csv")

total_scores = data["Subject1"] + data["Subject2"] + data["Subject3"] + data["Subject4"]

# Bar Plot
plt.figure(figsize=(12, 6))
plt.subplot(2, 2, 1)
plt.bar(data['StudentID'], total_scores, color='blue', label='TotalScore')
plt.xlabel('StudentID')
plt.ylabel('TotalScore')
plt.title('total_scores')
plt.legend()

# Scatter Plot
plt.subplot(2, 2, 2)
plt.scatter(data["StudentID"], data["Subject1"], color='blue', label='Subject 1')
plt.scatter(data["StudentID"], data["Subject2"], color='orange', label='Subject 2')
plt.scatter(data["StudentID"], data["Subject3"], color='green', label='Subject 3')
plt.scatter(data["StudentID"], data["Subject4"], color='red', label='Subject 4')
plt.xlabel("Student ID")
plt.ylabel("Scores")
plt.title("Scatter Plot")
plt.legend()

# Line Plot
plt.subplot(2, 2, 3)
plt.plot(data["StudentID"], data["Subject1"], marker='o', linestyle='-', color='blue', label='Subject 1')
plt.plot(data["StudentID"], data["Subject2"], marker='o', linestyle='-', color='orange', label='Subject 2')
plt.plot(data["StudentID"], data["Subject3"], marker='o', linestyle='-', color='green', label='Subject 3')
plt.plot(data["StudentID"], data["Subject4"], marker='o', linestyle='-', color='red', label='Subject 4')
plt.xlabel("Student ID")
plt.ylabel("Scores")
plt.title("Line Plot")
plt.legend()

# Pie Chart
plt.subplot(2, 2, 4)
subject_names = ['Subject 1', 'Subject 2', 'Subject 3', 'Subject 4']
plt.pie(total_scores, autopct="%1.1f%%", startangle=90)
plt.title("Pie Chart")

plt.tight_layout()
plt.show()
