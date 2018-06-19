#!/usr/bin/python3


def island_perimeter(grid):
    """finds the perimeter of number of 0's around 1's in a grid"""
    count = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                count += 4
                if row > 0 and grid[row - 1][col] == 1:
                    count -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    count -= 2
    return count
