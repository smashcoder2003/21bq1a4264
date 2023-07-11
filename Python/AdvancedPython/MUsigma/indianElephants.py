import pandas as pd
from sklearn.linear_model import LinearRegression

# Load the training dataset
train_data = pd.read_csv('/Users/bunty/Documents/GitHub/21bq1a4264/Python/AdvancedPython/MUsigma/imputed_data.csv')

# Load the dataset for prediction
predict_data = pd.read_csv('/Users/bunty/Documents/GitHub/21bq1a4264/Python/AdvancedPython/MUsigma/imputed_data.csv')

# Separate the features and target variables in the training dataset
X_train = train_data.iloc[:, 2:].values  # Independent variables (population values), excluding the state column
y_train = train_data.iloc[:, 1].values   # Dependent variable (state of the elephants)

print(y_train)
# Separate the features in the prediction dataset
X_predict = predict_data.iloc[:, 2:].values  # Independent variables for prediction

# Create a linear regression model
regressor = LinearRegression()

# Train the model
regressor.fit(X_train, y_train)

# Predict the missing values
y_predict = regressor.predict(X_predict)
y_predict = list(map(int, y_predict))
# Create a new DataFrame with the predicted values
predicted_data = predict_data.copy()
predicted_data['Predicted Population'] = y_predict

# Print the predicted dataset
print(predicted_data)
predicted_data.to_csv('predicted_data.csv')