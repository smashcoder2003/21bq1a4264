import pandas as pd
import numpy as np
from statsmodels.tsa.seasonal import seasonal_decompose

# Create a DataFrame with the given dataset
data = {
    'STATE': ['Arunachal Pradesh', 'Assam', 'Meghalaya', 'Nagaland', 'Mizoram', 'Manipur', 'Tripura',
              'West Bengal (North)', 'West Bengal (South)', 'Jharkhand', 'Odisha', 'Chhattisgarh', 'Bihar',
              'Madhya Pradesh', 'Uttarakhand', 'Uttar Pradesh', 'Haryana', 'Himachal Pradesh', 'Tamil Nadu',
              'Karnataka', 'Kerala', 'Andhra Pradesh', 'Maharashtra', 'A&N Nicobar Islands', 'Total'],
    '1993': [2102, 5524, 2872, 178, 15, 50, 100, 186, 14, 550, 1750, np.nan, np.nan, np.nan, 828, 47, np.nan, np.nan,
             2307, 5500, 3500, 46, np.nan, np.nan, 25569],
    '1997': [1800, 5312, 1840, 158, 22, 30, 70, 250, 26, 618, 1800, np.nan, np.nan, np.nan, 1130, 70, np.nan, np.nan,
             2971, 6088, 3600, 57, np.nan, np.nan, 25842],
    '2002': [1607, 5246, 1868, 145, 33, 12, 40, 292, 36, 772, 1841, np.nan, np.nan, np.nan, 1582, 85, np.nan, np.nan,
             3052, 5838, 3850, 74, np.nan, np.nan, 26373],
    '2007': [1690, 5281, 1811, 152, 12, np.nan, 59, 325, 25, 624, 1862, 122, np.nan, np.nan, 1346, 380, np.nan, np.nan,
             3867, 4035, 6068, 28, 7, np.nan, 27694],
    '2012': [890, 5620, 1811, 212, np.nan, np.nan, 59, 647, 'Census not conducted', 688, 1930, 247,
             np.nan, np.nan, 'Census not conducted', 291, np.nan, np.nan, 4015, 6068, 6182, 41, 4, np.nan, 30051],
    '2017': [1614, 5719, 1754, 446, 7, 9, 102, 488, 194, 679, 1976, 247, 25, 7, 1839, 232, 7, 7, 2761, 6049,
             5706, 65, 6, 25, 29964]
}

df = pd.DataFrame(data)

# Replace 'Census not conducted' with NaN
df.replace('Census not conducted', np.nan, inplace=True)

# Set 'STATE' column as the index
df.set_index('STATE', inplace=True)

# Perform seasonal decomposition for each year column
for year in ['1993', '1997', '2002', '2007', '2012', '2017']:
    # Create a dummy index with categorical values
    dummy_index = pd.Index(df.index, name='Dummy')

    # Combine the dummy index with the year column to create a new index
    new_index = pd.MultiIndex.from_product([dummy_index, [year]], names=['STATE', 'YEAR'])

    # Create a new DataFrame with the year column as the index
    year_df = pd.DataFrame(df[year].values, index=new_index, columns=['Population'])

    # Perform seasonal decomposition with additive mode
    decomposition = seasonal_decompose(year_df, model='additive', extrapolate_trend='freq')

    # Replace the trend component in the original DataFrame
    df[year] = decomposition.trend.values

# Display the imputed dataset
print(df)
