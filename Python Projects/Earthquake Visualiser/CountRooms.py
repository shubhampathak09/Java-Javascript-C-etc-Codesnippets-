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
        

        
