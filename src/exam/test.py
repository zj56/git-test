from itertools import count, cycle
from tempfile import tempdir
from tokenize import group
import pandas as pd
import numpy as np
# 导入数据
df_excel = pd.read_excel('d:/Desktop/第一周训练/data.xlsx')


# 根据小区编号分类
grouped_single = df_excel.groupby('小区编号')

# 初始化
averageUser_abnormal = 0
PDCPpipelines_abnormal = 0
averageActivate_abnormal = 0
account = 0
userAdd,pipelineAdd,activateAdd = 0,0,0
# 58个小区
cycleAbnormal=pd.Series(np.linspace(0,0,58))
pointAbnormal=pd.Series(np.linspace(0,0,58))
temp = pd.DataFrame()

# 遍历
for name,group in grouped_single:
    print(name) #打印小区编号
    single = grouped_single.get_group(name)
    #重置index
    # single = single.reset_index()
    averageUser = single['小区内的平均用户数']
    PDCPpipelines = single['小区PDCP流量']
    averageActivate = single['平均激活用户数']
    #  -------法则
    single['averageUser']=abs(averageUser-averageUser.mean())>3*averageUser.std()
    single['PDCPpipelines']=abs(PDCPpipelines-PDCPpipelines.mean())>3*PDCPpipelines.std()
    single['averageActivate']=abs(averageActivate-averageActivate.mean())>3*averageActivate.std()
    # -----------
    # if account > 1:
    temp = pd.concat([single,temp])
    # account =account + 1
print(temp)
temp.to_excel('./ALL.xlsx', sheet_name='Sheet1')
#  异常周期检测
    # for cycle in range(29):
    #     userAdd ,pipelineAdd,activateAdd = 0,0,0
    #     for times in range(24):
    #         if bool(single.averageUser[cycle*times]):
    #             userAdd = userAdd  + 1
    #         if bool(single.PDCPpipelines[cycle*times]):
    #             pipelineAdd = pipelineAdd  + 1
    #         if bool(single.averageActivate[cycle*times]):
    #             activateAdd = activateAdd  + 1
        # if userAdd  > 1:
        #     cycleAbnormal[account] = cycleAbnormal[account] + 1
        # if pipelineAdd  > 1:
        #     cycleAbnormal[account] = cycleAbnormal[account] + 1
    #     if activateAdd  > 1:
    #         cycleAbnormal[account] = cycleAbnormal[account] + 1
    
#58个小区的异常周期数 
# print(sum(cycleAbnormal))
# 异常点数汇总
# averageUser_abnormal += single['averageUser'].sum()
# PDCPpipelines_abnormal += single['PDCPpipelines'].sum()
# averageActivate_abnormal += single['averageActivate'].sum()

# print("averageUser_abnormal:"+repr(averageUser_abnormal))
# print("PDCPpipelines_abnormal:"+repr(PDCPpipelines_abnormal))
# print("averageActivate_abnormal:"+repr(averageActivate_abnormal))
#----------------






 






