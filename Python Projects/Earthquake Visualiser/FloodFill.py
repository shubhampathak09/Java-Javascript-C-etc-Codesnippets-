# -*- coding: utf-8 -*-
"""
Created on Fri Dec 30 19:38:57 2022

@author: 91954
"""

# Pseudocode
#Tutorial from https://inventwithpython.com/blog/2011/08/11/recursion-explained-with-the-flood-fill-algorithm-and-zombies-and-cats/

def floodfill(x,y,oldColor,newColor):
    if surface[x][y]!= oldColor:
       return
   
    surface[x][y]=newColor
    
    floodfill(x+1, y, oldColor, newColor)
    
    floodfill(x-1,y,oldColor,newColor)
    
    floodfill(x,y+1,oldColor,newColor)
    
    floodfill(x, y-1, oldColor, newColor)