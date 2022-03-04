from tokenize import group
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
df_excel = pd.read_excel('d:/Desktop/第一周训练/data.xlsx')
# print(df_excel.head())
grouped_single = df_excel.groupby('小区编号')
# print(grouped_single.size())
# print(grouped_single.get_group(26019001).head())
# 以小区编号为26019001为例
x_data=grouped_single.get_group(26019001)['时间']
y_data=grouped_single.get_group(26019001)['小区内的平均用户数']
# print(x_data)
# for 时间,小区内的平均用户数 in 
plt.plot(x_data,y_data,color='red',linewidth=2.0,linestyle='--')
plt.show()