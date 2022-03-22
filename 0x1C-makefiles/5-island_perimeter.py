#!/usr/bin/python3
"""
5-main
"""


def island_perimeter(grid):
    """ Island perimeter function"""
    height = len(grid)
    width = len(grid[1])
    num_islas = 0
    perimeter = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if i == 0:
                    perimeter += 1
                if i == height - 1:
                    perimeter += 1
                if j == 0:
                    perimeter += 1
                if j == width - 1:
                    perimeter += 1
                if i > 0:
                    if grid[i-1][j] == 0:
                        perimeter += 1
                if i < width - 1:
                    if grid[i+1][j] == 0:
                        perimeter += 1
                if j > 0:
                    if grid[i][j-1] == 0:
                        perimeter += 1
                if j < height - 1:
                    if grid[i][j+1] == 0:
                        perimeter += 1
    return(perimeter)
