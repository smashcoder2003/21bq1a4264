#%%
import numpy as np # linear algebra
import pandas as pd # data processing, CSV file I/O (e.g. pd.read_csv)
import os
from subprocess import check_output
import seaborn as sns
import matplotlib.pyplot as plt
import warnings
from pandas.plotting import lag_plot
from statsmodels.tsa.arima.model import ARIMA
from sklearn.metrics import mean_squared_error
#%%
warnings.filterwarnings('ignore')
#%%
df = pd.read_csv("/Users/bunty/DataspellProjects/pythonProject/data_sets/archive-2/AXISBANK.csv")
df.head()
#%%
df[['Close']].plot()
plt.title("Axis Bank")
plt.show()
#%%
dr = df.cumsum()
dr.plot()
plt.title('AXIS_BANK Cumulative Returns')
#%%
plt.figure(figsize=(10,10))
lag_plot(df['Open'], lag=5)
plt.title('AXIS_BANK Autocorrelation plot')

#%%
df['Date'][1857]

#%%
train_data, test_data = df[0:int(len(df)*0.8)], df[int(len(df)*0.8):]
plt.figure(figsize=(12,7))
plt.title('AXIS_BANK Prices')
plt.xlabel('Dates')
plt.ylabel('Prices')
plt.plot(df['Open'], 'blue', label='Training Data')
plt.plot(test_data['Open'], 'green', label='Testing Data')
plt.savefig('open_data.png')
plt.xticks(np.arange(0,1857, 300), df['Date'][0:1857:300])
plt.legend()
#%%
def smape_kun(y_true, y_pred):
    return np.mean((np.abs(y_pred - y_true) * 200/ (np.abs(y_pred) + np.abs(y_true))))
#%%

train_ar = train_data['Open'].values
test_ar = test_data['Open'].values


history = [x for x in train_ar]
print(type(history))
predictions = list()
for t in range(len(test_ar)):
    model = ARIMA(history, order=(5,5,0))
    model_fit = model.fit()
    output = model_fit.forecast()
    yhat = output[0]
    predictions.append(yhat)
    obs = test_ar[t]
    history.append(obs)
    print('predicted=%f, expected=%f' % (yhat, obs))
error = mean_squared_error(test_ar, predictions)
print('Testing Mean Squared Error: %.3f' % error)
error2 = smape_kun(test_ar, predictions)
print('Symmetric mean absolute percentage error: %.3f' % error2)

plt.figure(figsize=(12,7))
plt.plot(df['Open'], 'green', color='blue', label='Training Data')
plt.plot(test_data.index, predictions, color='green', marker='o', linestyle='dashed',
         label='Predicted Price')
plt.plot(test_data.index, test_data['Open'], color='red', label='Actual Price')
plt.savefig('predictions.png')
plt.title('AXIS_BANK Prices Prediction')
plt.xlabel('Dates')
plt.ylabel('Prices')
plt.xticks(np.arange(0,1857, 300), df['Date'][0:1857:300])
plt.legend()

plt.figure(figsize=(12,7))
plt.plot(test_data.index, predictions, color='green', marker='o', linestyle='dashed',
         label='Predicted Price')
plt.plot(test_data.index, test_data['Open'], color='red', label='Actual Price')
plt.xticks(np.arange(1486,1856, 60), df['Date'][1486:1856:60])
plt.title('BANK Prices Prediction')
plt.savefig('bank.png')
plt.xlabel('Dates')
plt.ylabel('Prices')
plt.legend()
