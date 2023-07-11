import pandas as pd
from statsmodels.tsa.api import VAR

# Read the data into a DataFrame
data = pd.read_csv("/Users/bunty/Documents/GitHub/21bq1a4264/Python/AdvancedPython/MUsigma/time_series.csv")

# Preprocess the data
data['MONTH_YEAR'] = pd.to_datetime(data['MONTH_YEAR'])
data.set_index('MONTH_YEAR', inplace=True)

# Select the relevant columns for the VAR model
cols = ['QUANTITY']
var_data = data[cols]

# Train the VAR model
model = VAR(var_data)
var_model = model.fit()

# Forecast future values
future_steps = 12  # Forecasting for 1 year (12 months)
forecast = var_model.forecast(var_model.y, steps=future_steps)

# Access forecasted values for the 'QUANTITY' column
quantity_forecast = forecast[:, 0]
print(quantity_forecast)
