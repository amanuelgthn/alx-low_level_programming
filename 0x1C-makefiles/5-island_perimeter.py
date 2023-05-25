#!/usr/bin/python3
"""
Module containing function def island_perimeter(grid):
"""


def island_perimeter(grid):
    """
    function that return the perimeter of the island described in grid
    """
    len_grid = len(grid)
    len_row = len(grid[0])
    perimeter = 0
    for i in range(0, len_grid):
        for j in range(0, len_row):
            if grid[i][j] == 1:
                if grid[i-1][j] == 0 and i != 0:
                    perimeter += 1
                if grid[i+1][j] == 0:
                    perimeter += 1
                if grid[i][j-1] == 0 and j != 0:
                    perimeter += 1
                if grid[i][j+1] == 0:
                    perimeter += 1
    return perimeter
