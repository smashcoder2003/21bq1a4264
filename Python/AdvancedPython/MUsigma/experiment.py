import pandas as pd
import numpy as np
from sklearn.neighbors import KNeighborsRegressor
from sklearn.impute import SimpleImputer, KNNImputer

# Load the dataset
data = pd.read_csv("/Users/bunty/Documents/elephantinindia.csv")

# Replace "Census not conducted" with NaN for easier handling
data = data.replace("Census not conducted", np.nan)

# Convert numerical columns to numeric type
numeric_columns = data.columns[1:]
data[numeric_columns] = data[numeric_columns].apply(pd.to_numeric)

# Separate instances with missing values and complete instances
missing_data = data[data.isnull().any(axis=1)]
missing_data.to_csv('missing_data.csv')
complete_data = data.dropna()
complete_data.to_csv('complete_data.csv')

# Set the number of neighbors (K) for imputation
K = 3

# Iterate over each feature with missing values
for column in numeric_columns:
    # Separate the feature with missing values and other features
    X_train = complete_data.drop([column, 'STATE'], axis=1)
    y_train = complete_data[column]
    X_test = missing_data.drop([column, 'STATE'], axis=1)

    # Handle missing values in X_test
    imputer = KNNImputer()
    X_test_imputed = imputer.fit_transform(X_test)

    # Create the K-Nearest Neighbors regressor
    knn = KNeighborsRegressor(n_neighbors=K)

    # Fit the model and predict missing values
    knn.fit(X_train, y_train)
    y_pred = knn.predict(X_test_imputed)

    # Assign the predicted values back to missing_data
    missing_data.loc[:, column] = y_pred

# Combine the imputed data with the complete data
imputed_data = pd.concat([complete_data, missing_data])

# Sort the data by state (optional)
imputed_data = imputed_data.sort_values(by=["STATE"])

# Print the imputed dataset
imputed_data = imputed_data.astype({'ELEPHANT POPULATION IN 1993': 'int',
                                    'ELEPHANT POPULATION IN 1997': 'int',
                                    'ELEPHANT POPULATION IN 2002': 'int',
                                    'ELEPHANT POPULATION IN 2007': 'int',
                                    'ELEPHANT POPULATION IN 2012': 'int',
                                    'ELEPHANT POPULATION IN 2017': 'int'})

# Save the imputed dataset to a CSV file
imputed_data.to_csv("imputed_elephant_population.csv", index=False)
