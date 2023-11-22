#!/usr/bin/python3
"""Explain an island perimeter by measure a function."""


def island_perimeter(grid):
    """Return perimiter of the island.

    The grid shows water by 0 also land by 1.

    Args:
        grid (list): List of the list of integers represent island.
    Returns:
        The perimeter of island explain in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
