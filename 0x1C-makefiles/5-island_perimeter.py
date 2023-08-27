#!/usr/bin/python3
""" Island Perimeter"""


def island_perimeter(grid):
    """ Island Perimeter"""
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if not grid[i + 1][j]:
                        count += 1
                    if not grid[i - 1][j]:
                        count += 1
                    if not grid[i][j - 1]:
                        count += 1
                    if not grid[i][j + 1]:
                        count += 1
                except Exception as e:
                    pass
    return count
