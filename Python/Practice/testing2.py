import numpy as np
import pandas as pd
import plotly.express as px
import plotly.graph_objects as go
import warnings
from statsmodels.tsa.arima.model import ARIMA
from sklearn.metrics import mean_squared_error

def smape_kun(y_true, y_pred):
    return np.mean((np.abs(y_pred - y_true) * 200 / (np.abs(y_pred) + np.abs(y_true))))

# Load the CSV file with datetime parsing
df = pd.read_csv("/Users/bunty/DataspellProjects/pythonProject/data_sets/archive-2/CIPLA.csv", parse_dates=['Date'])

# Ignore warnings
warnings.filterwarnings('ignore')

# Plot Close prices using Plotly Express with real dates
fig_close_prices = px.line(df, x='Date', y='Close', title="Axis Bank - Close Prices")
fig_close_prices.write_image("close_prices.png")
fig_close_prices.show()

# Calculate cumulative returns and plot using Plotly Express with real dates
df['Cumulative_Returns'] = df['Close'].cumsum()
fig_cumulative_returns = px.line(df, x='Date', y='Cumulative_Returns', title="AXIS_BANK Cumulative Returns")
fig_cumulative_returns.write_image("cumulative_returns.png")
fig_cumulative_returns.show()

# Create an autocorrelation plot using Plotly Express
df['Open_shifted'] = df['Open'].shift(1)
fig_autocorrelation = px.scatter(df, x='Open_shifted', y='Open', title='AXIS_BANK Autocorrelation plot')
fig_autocorrelation.write_image("autocorrelation_plot.png")
fig_autocorrelation.show()

# Split train and test data
train_data, test_data = df.iloc[:int(len(df) * 0.8)], df.iloc[int(len(df) * 0.8):]

# ARIMA model
train_ar = train_data['Open'].values
test_ar = test_data['Open'].values

history = [x for x in train_ar]
predictions = list()

for t in range(len(test_ar)):
    model = ARIMA(history, order=(5, 0, 0))
    model_fit = model.fit()
    output = model_fit.forecast()
    yhat = output[0]
    predictions.append(yhat)
    obs = test_ar[t]
    history.append(yhat)
    print('predicted=%f, expected=%f' % (yhat, obs))

model = ARIMA(history, order=(5, 0, 0))
model_fit = model.fit()
output = model_fit.forecast(len(test_ar))
predictions = output
# ... (other code for calculating errors and plotting predictions)
error = mean_squared_error(test_ar, predictions)
print('Testing Mean Squared Error: %.3f' % error)
error2 = smape_kun(test_ar, predictions)
print('Symmetric mean absolute percentage error: %.3f' % error2)

# Plot training and testing data using Plotly Graph Objects with real dates
fig_train_test = go.Figure()
fig_train_test.add_trace(go.Scatter(x=train_data['Date'], y=train_data['Open'], mode='lines', name='Training Data'))
fig_train_test.add_trace(go.Scatter(x=test_data['Date'], y=test_data['Open'], mode='lines', name='Testing Data'))
fig_train_test.update_layout(title='AXIS_BANK Prices', xaxis_title='Dates', yaxis_title='Prices')
fig_train_test.write_image("open_data.png")
fig_train_test.show()

# Plot predictions and actual prices using Plotly Graph Objects with real dates
fig_predictions = go.Figure()
fig_predictions.add_trace(go.Scatter(x=df['Date'], y=df['Open'], mode='lines', name='Training Data'))
fig_predictions.add_trace(go.Scatter(x=test_data['Date'], y=predictions, mode='lines+markers', name='Predicted Price'))
fig_predictions.add_trace(go.Scatter(x=test_data['Date'], y=test_data['Open'], mode='lines+markers', name='Actual Price'))
fig_predictions.update_layout(title='AXIS_BANK Prices Prediction', xaxis_title='Dates', yaxis_title='Prices')
fig_predictions.write_image("predictions.png")
fig_predictions.show()

fig_bank_predictions = go.Figure()
fig_bank_predictions.add_trace(go.Scatter(x=test_data['Date'], y=predictions, mode='lines+markers', name='Predicted Price'))
fig_bank_predictions.add_trace(go.Scatter(x=test_data['Date'], y=test_data['Open'], mode='lines+markers', name='Actual Price'))
fig_bank_predictions.update_layout(title='BANK Prices Prediction', xaxis_title='Dates', yaxis_title='Prices')
fig_bank_predictions.write_image("bank.png")
fig_bank_predictions.show()


# Current day predictions
last_date = df['Date'].max()
current_dates = pd.date_range(last_date + pd.Timedelta(1), 1000)

real_predictions = []

for i in range(1000):
    model = ARIMA(history, order=(5, 1, 2))
    model_fit = model.fit()
    output = model_fit.forecast()
    yhat = output[0]
    real_predictions.append(yhat)
    history.append(yhat)
    print(f"predicting {i}th value...")

fig_real_predictions = go.Figure()
fig_real_predictions.add_trace(go.Scatter(x=current_dates, y=real_predictions, mode='lines+markers',
                                          name='current_predictions'))
fig_real_predictions.update_layout(title='Current Bank Prices Prediction', xaxis_title='Dates', yaxis_title='Prices')
fig_real_predictions.show()
