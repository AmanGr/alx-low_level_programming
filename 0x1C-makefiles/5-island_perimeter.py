#!/usr/bin/python3
"""returns the perimeter of the island described in grid(int list of list)"""


def island_perimeter(grid):
    """Return the island perimeter"""
    wid = len(grid[0])
    hei = len(grid)
    edges = 0
    size = 0

    for i in range(hei):
        for j in range(wid):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (1 > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
