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
    r=random.random()
    if(r<=p):
        print('1')
    else:
        print('0')        
    return

def printText():
    r=random.random()
    if(r<0.8):
        print('dogs')
    elif r <0.9:
        print('cats')
    else:
        print('bats')    
        
        
def hippyJoin(string):
    s=''.join('1' if chr=='0' else '0' for chr in string)
    return s     

def mutate1(chromosome,p):
    for c in chromosome:
        print(c)
        r=random.random()
        print(r)
        return  
   