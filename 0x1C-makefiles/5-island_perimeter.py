#!/usr/bin/python3
"""island perimeter """


def island_perimeter(grid):
    """returns the perimeter of the island """
    perm = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] is 1:
                if i is len(grid[i]) - 1 or grid[i + 1][j] is 0:
                    perm = perm + 1
                if j is len(grid[i]) - 1 or grid[i][j + 1] is 0:
                    perm = perm + 1
                if i is 0 or grid[i - 1][j] is 0:
                    perm = perm + 1
                if j is 0 or grid[i][j - 1] is 0:
                    perm = perm + 1
    return (perm)
