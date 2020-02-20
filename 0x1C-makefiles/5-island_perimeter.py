#!/usr/bin/python3
"""
Module for function island_perimeter(grid): that returns the perimeter of the
island.
"""


def island_perimeter(grid):
    """
    Function that returns the perimeter of the island.

    Args:
        grid (list): The grid that describe de island.

    Return:
        Return the perimeter of the island.
    """

    """ per is the array with de details for sum """
    per = list()
    for i in range(len(grid)):
        per.append([0 for x in range(len(grid[0]))])

    """ First take into account the line boundaries """
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if j == 0:
                    per[i][j] += 1
                elif grid[i][j-1] == 0:
                    per[i][j] += 1
            elif grid[i][j] == 0:
                if j != 0:
                    if grid[i][j-1] == 1:
                        per[i][j-1] += 1

    """ Second take into account the columns boundaries """
    for j in range(len(grid[0])):
        for i in range(len(grid)):
            if grid[i][j] == 1:
                if i == 0:
                    per[i][j] += 1
                elif grid[i-1][j] == 0:
                    per[i][j] += 1
            elif grid[i][j] == 0:
                if i != 0:
                    if grid[i-1][j] == 1:
                        per[i-1][j] += 1

    """ Finally sum the sums of each line of per list of lists """
    return sum([sum(x) for x in per])
