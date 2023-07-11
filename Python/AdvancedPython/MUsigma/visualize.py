import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Read the dataset from a CSV file
data = pd.read_csv('/Users/bunty/Documents/GitHub/21bq1a4264/Python/AdvancedPython/MUsigma/predicted_data.csv')

# Separate the independent variable (X) and dependent variable (y)
X = data.iloc[:, 2:].values # Independent variable (population values)
print(len(X))
Y = data.iloc[:, 2:].values   # Dependent variable (state of the elephants)
print(len(Y))
# Create a linear regression model
regressor = LinearRegression()

# Train the model
regressor.fit(X, Y)

# Predict the values for the scatter plot
y_pred = regressor.predict(X)

# Plot the scatter plot of the dataset
plt.scatter(X, Y, color='blue', label='Actual Data')

# Plot the regression line
plt.plot(X, y_pred, color='red', label='Regression Line')

# Set the labels and title of the plot
plt.xlabel('Population')
plt.ylabel('State of Elephants')
plt.title('Regression Line and Scatter Plot')

# Show the legend
plt.legend()

# Show the plot
plt.show()
