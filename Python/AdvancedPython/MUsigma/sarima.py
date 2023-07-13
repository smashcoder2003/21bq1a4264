import pandas as pd
import matplotlib.pyplot as plt
from statsmodels.tsa.statespace.sarimax import SARIMAX

# Read the data into a DataFrame
data = pd.read_csv("/Users/bunty/Documents/GitHub/21bq1a4264/Python/AdvancedPython/MUsigma/time_series.csv")

# Preprocess the data
data['MONTH_YEAR'] = pd.to_datetime(data['MONTH_YEAR'])
data.set_index('MONTH_YEAR', inplace=True)

# Select the specific SKU you want to forecast
sku_data = data[data['MATERIAL_NBR'] == '1-00S392-L84-240-140']
sku_data = sku_data['QUANTITY'].fillna(0)  # Fill any missing values with 0

# Set the frequency of the time series data
sku_data = sku_data.asfreq('MS')  # MS for monthly frequency

# Visualize the time series
plt.plot(sku_data)
plt.xlabel('Time')
plt.ylabel('Quantity')
plt.title('SKU Quantity over Time')
plt.show()

# Define the SARIMA model
order = (1, 2, 1)  # ARIMA order
model = SARIMAX(sku_data, order=order)

# Fit the model
sarima_model = model.fit()

# Forecast future values
future_steps = 12  # Forecasting for 1 year (12 months)
forecast = sarima_model.forecast(steps=future_steps)

# Print the forecasted values

# Plot the forecasted values
plt.plot(sku_data)
plt.plot(forecast, color='r')
plt.xlabel('Time')
plt.ylabel('Quantity')
plt.title('SKU Quantity Forecast')
plt.legend(['Actual', 'Forecast'])
plt.show()
