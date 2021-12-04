# -*- coding: utf-8 -*-
"""
Created on Sat Dec  4 19:16:29 2021

@author: 91954
"""

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt


data=pd.read_csv("C:/Users/91954/Documents/Codes For Javascript Java and C++/Python Projects/Earthquake Visualiser/database.csv")

data = data[['Date', 'Time', 'Latitude', 'Longitude', 'Depth', 'Magnitude']]




import datetime
import time

ct=0



#data['Date']=pd.to_datetime(data['Date'])

#process the data after 1970 date

newdf = (data['Date'] > '01-01-1970')
#data = (data['Date'] > '01-01-1970') 

newdf = data.loc[newdf]
#& (data['Date'] <= '31-12-2020')

timestamp=[]
#print(len(data['Date']))
for d,t in zip(newdf['Date'],newdf['Time']):
    try:
    #ts=datetime.datetime().strptime(d+' '+t, '%m/%d/%Y %H:%M:%S')
     ts = datetime.datetime.strptime(d+' '+t, '%m/%d/%Y %H:%M:%S')
     
     timestamp.append(ts)
     ct=ct+1
    except ValueError:
        timestamp.append('ValueError')

    
timeStamp=pd.Series(timestamp)
newdf['TimeStamp']=timeStamp.values   

process_data = newdf.drop(['Date', 'Time'], axis=1)
process_data = process_data[data.TimeStamp != 'ValueError']





   
#    print(d+' '+t)
#import datetime 
#import time
print(ct)
#timestamp = []
#for d, t in zip(data['Date'], data['Time']):
 #   try:
#        ts = datetime.datetime.strptime(d+' '+t, '%Y/%m/%d %H:%M:%S')
#       # print(d)
#       # print(t)
#       #data['TimeStamp']=ts
#        tss=datetime.datetime().timestamp(ts) 
#        print(tss)
#        timestamp.append(tss)
#       # timestamp.append(time.mktime(ts.timetuple()))
#    except ValueError:
#        # print('ValueError')
#        timestamp.append('ValueError')
#timeStamp = pd.Series(timestamp)
#data['Timestamp'] = timeStamp.values
#final_data = data.drop(['Date', 'Time'], axis=1)
#final_data = final_data[final_data.Timestamp != 'ValueError']
#final_data.head()

#data['Date']=pd.to_datetime(data['Date'])

#type(data['Date'])

#newdata=data[data['Date'].dt.year>=1970]

#data=data[pd.to_datetime(data['Date']>'01-01-1970')]

