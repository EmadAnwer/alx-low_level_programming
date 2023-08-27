#!/usr/bin/python3
""" Island Perimeter"""


def island_perimeter(grid):
    """ Island Perimeter"""
    count = 0
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Start with 4 sides

                # Check neighbors to subtract shared sides
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract top side
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract left side

    return perimeter
