
"""
Created on Fri Apr 21 16:27:25 2023

@author: DUCAT
"""
"""
anaconda distribution
jupyter notebook
spyder
pycharm

python or r
DATA ANAlytics
data science(data visualize,
             data preprocessing,
             stats,probabili
             )
machine learning
mysql
tableau
power
adv. excel


co2    temp
  1     1
  2     
  3     9
  4     11
  5     22

kaggle.com
uci 

ai/ml
chat gpt
recomendation
weather forecasting
disease prediction
banking
chat bot

"""
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

import glob
import cv2

covid = [cv2.imread(file) for file in 
         glob.glob('Covid/*.jpeg') ]

normal = [cv2.imread(file) for file in 
         glob.glob('normal/*.jpeg') ]

# VISUALIZATION

cv2.imshow('first',covid[0])
cv2.waitkey(0)
cv2.destroywindows()


cv2.imshow('first',normal[0])
cv2.waitkey(0)
cv2.destroywindows()

# data preporcessing

# resize all the images in same format

covid_data = [cv2.resize(image,(300,300)) for image in covid]


normal_data = [cv2.resize(image,(300,300)) for image in normal]



cv2.imshow('first',covid_data[0])
cv2.waitkey(0)
cv2.destroywindows()


covid_data = np.array(covid_data)

normal_data = np.array(normal_data)


x = np.concatenate([covid_data,normal_data])

covid_label = np.ones(46)

normal_label = np.zeros(70)

y = np.concatenate([covid_label,normal_label])


from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test = train_test_split(x,y)


y_train_name = ["covid +ve" if i==1.0 else 'normal' for i in y_train]



# visualizing the training set

for i in range(20):
    plt.subplot(5,5, i+1)
    plt.xticks([])
    plt.yticks([])
    plt.imshow(x_train[i],'gray')
    
plt.show()   
    
for i in range(20):
    plt.subplot(5,5, i+1)
    plt.xticks([])
    plt.yticks([])
    plt.imshow(x_train[i],'gray')
    plt.xlabel(y_train[i])
    
plt.show()   
  
for i in range(20):
    plt.subplot(5,5, i+1)
    plt.xticks([])
    plt.yticks([])
    plt.imshow(x_train[i],'gray')
    plt.xlabel('label:{}'.format(y_train[i]))
    
plt.show()   
  

x_train = x_train.reshape((87,270000))
x_test = x_test.reshape((29,270000))

# random forest algorithm application

from sklearn.ensemble import RandomForestClassifier
rf = RandomForestClassifier(max_depth= 10)
rf.fit(x_train,y_train)

rf.score(x_test,y_test)

y_pred = rf.predict(x_test)

y_pred_name = ["covid +ve" if i == 1.0 else 'normal' for i in y_pred]

y_test_name = ["covid +ve" if i == 1.0 else 'normal' for i in y_test]


for i in range(25):
    plt.subplot(5,5, i+1)
    plt.xticks([])
    plt.yticks([])
    plt.imshow(x_train[i].reshape(300,300,3),'gray')
    plt.xlabel('actual :{}\nprediction:{}'.format(y_test_name[i],y_pred_name[i]))
    
plt.tight_layout()
plt.show()   

# rohit pahwa
# 8826635197

# ducat
