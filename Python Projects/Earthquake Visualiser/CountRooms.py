# -*- coding: utf-8 -*-
"""
Created on Fri Dec 30 20:51:32 2022

@author: Shubham Pathak
"""
import sys
textmap = """
........................#.....
........................#.....
........................#.....
.....######.............######
.....#....#....######.........
.....#....#....#....#.....#...
.....######....##.###.....#...
................#.#.......####
................#.#...........
######.....######.#######.....
#....#.....#............#.....
###..#.....#............#.....
###..#.....##############.....
#....#........................
######........................
"""
lines=textmap.strip().split("\n")

assert ['bad width' for x in lines if len(x) != len(lines[0])] == [], "WORLD string needs to be rectangular."

def getWorldFromTextMap(textmap):
    worldWidth = len(textmap.strip().split('\n')[0])
    worldHeight = len(textmap.strip().split('\n'))
    textmap = textmap.strip().split('\n')
    world =[]
    for i in range(worldWidth):
        world.append(['']*worldHeight)
    for x in range(worldWidth):
        for y in range(worldHeight):
            world[x][y]=textmap[y][x]
    return world

def printWorld(world):
    worldWidth=len(world)
    worldHeight=len(world[0])
    for y in range(worldHeight):
        for x in range(worldWidth):
            sys.stdout.write(world[x][y])
    sys.stdout.write("\n")
        
def floodFill(world,x,y,oldChar,newCHar):
    worldWidth=len(world)
    worldHeight=len(world[0])
    
    if oldChar == None:
        oldChar=world[x][y]
        
    if world[x][y]!=oldChar:
       return
    world[x][y]=newCHar
    if x > 0 :
       floodFill(world,x-1,y,oldChar,newCHar)
    if y > 0 :
       floodFill(world,x,y-1,oldChar,newCHar)
    if( x< worldWidth-1):
       floodFill(world,x+1,y,oldChar,newCHar)
    if(y< worldHeight-1):
       floodFill(world, x, y+1, oldChar, newCHar)    




def getNumOfRooms(world):
    worldWidth=len(world)
    worldHeight=len(world[0])
    roomCount=-1