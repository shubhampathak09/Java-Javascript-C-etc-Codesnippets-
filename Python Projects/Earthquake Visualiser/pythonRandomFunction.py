# -*- coding: utf-8 -*-
"""
Created on Fri Dec 30 19:38:57 2022

@author: Shubham Pathak
"""
import random

def generate(len):
 s=""   
 for i in range(len):
    s+=str((random.randint(0, 1)))
    
 return s   


def mutate(len,p):
    return

def printText():
    r=random.random()
    if(r<0.8):
        print('dogs')
    elif r <0.9:
        print('cats')
    else:
        print('bats')    