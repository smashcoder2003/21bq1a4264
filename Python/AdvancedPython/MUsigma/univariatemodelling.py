import pandas as pd
import matplotlib.pyplot as plt
from statsmodels.tsa.arima.model import ARIMA

# Read the data into a DataFrame
data = pd.read_csv('/Users/bunty/Documents/GitHub/21bq1a4264/Python/AdvancedPython/MUsigma/time_series.csv')

# Preprocess the data
data['MONTH_YEAR'] = pd.to_datetime(data['MONTH_YEAR'])
data = data.set_index('MONTH_YEAR')

# Select the specific SKU you want to forecast
sku_data = data[data['MATERIAL_NBR'] == '1-00S493-L84-140-140']
sku_data = sku_data['QUANTITY'].fillna(0)  # Fill any missing values with 0

# Set the frequency of the time series data
sku_data = sku_data.asfreq('MS')  # MS for monthly frequency

# Visualize the time series
plt.plot(sku_data)
plt.xlabel('Time')
plt.ylabel('Quantity')
plt.title('SKU Quantity over Time')
plt.show()

# Perform univariate time series forecasting using ARIMA
model = ARIMA(sku_data, order=(1, 1, 1))  # Adjust the order based on the data
model_fit = model.fit()

# Forecast future values
future_steps = 12  # Forecasting for 1 year (12 months)
forecast = model_fit.forecast(steps=future_steps)

# Print the forecasted values
print(forecast)

# Generate future date range for plotting
future_dates = pd.date_range(start=sku_data.index[-1], periods=future_steps+1, freq='MS')[1:]
# Plot the forecasted values
plt.plot(sku_data, label='Actual')
plt.plot(future_dates, forecast, color='r', label='Forecast')
plt.xlabel('Time')
plt.ylabel('Quantity')
plt.title('SKU Quantity Forecast')
plt.legend()
plt.show()
print("_______________________")
print(type(forecast))