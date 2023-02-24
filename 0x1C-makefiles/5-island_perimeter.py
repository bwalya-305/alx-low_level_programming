#!/usr/bin/python3

#Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:

#grid is a list of list of integers:
#0 represents a water zone
#1 represents a land zone 
#One cell is a square with side length 1
#Grid cells are connected horizontally/vertically (not diagonally).
#Grid is rectangular, width and height don't exceed 100

#Grid is completely surrounded by water, and there is one island (or nothing).
#The island doesn't have "lakes" (water inside that isn't connected to the water around the island).

def island_perimeter(grid):
    """Function that return the perimeter of a island"""

    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
                if grid[x][y]:
                    if x == 0 or grid[x - 1][y] == 0:
                        perimeter += 1
                    if x == (len(grid) - 1) or grid[x + 1][y] == 0:
                        perimeter += 1
                    if y == 0 or grid[x][y - 1] == 0:
                        perimeter += 1
                    if y == (len(grid[x]) - 1) or grid[x][y + 1] == 0:
                        perimeter += 1
    return perimeter
