#!/user/bin/env python3


def island_perimeter(grid):
    count = 0
    for i, v in enumerate(grid):
        for j, v in enumerate(v):
            # corner edge cases
            if i == 0 and j == 0 and v == 1:
                count += 2
            if i == 0 and j == len(grid[i])-1 and v == 1:
                count += 2
            if i == len(grid)-1 and j == 0 and v == 1:
                count += 2
            if i == len(grid)-1 and j == len(grid[i])-1 and v == 1:
                count += 2
            # row and columns at the end of the grid
            if i == 0 and (j != 0 or j != len(grid[i])-1) and v == 1:
                if grid[i][j-1] == 0:
                    count += 1
                if grid[i][j+1] == 0:
                    count += 1
            if i == len(grid)-1 and (j != 0 or j != len(grid[i])-1) and v == 1:
                if grid[i][j-1] == 0:
                    count += 1
                if grid[i][j+1] == 0:
                    count += 1
            if j == 0 and v == 1:
                if grid[i][j+1] == 0:
                    count += 1
            if j == len(grid[i])-1 and v == 1:
                if grid[i][j-1] == 0:
                    count += 1

            # any columns or rows that are not the outer perimter
            if (i != 0 or i != len(grid)-1) and (j != 0 or j != len(grid[i])-1):
                if j == 1:
                    if grid[i][j-1] == 0:
                        count += 1
                    if grid[i][j+1] == 0:
                        count += 1
                    if grid[i-1][j] == 0:
                        count += 1

    return count
