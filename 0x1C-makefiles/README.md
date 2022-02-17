C - Makefiles
Topics aim was to understand what makefiles are, how, why and when they should be used. Also topic helped in understanding:-

What are rules and how to set and use them
What are explicit and implicit rules
What are the most common / useful rules
What are variables and how to set and use them
Following task files helped in testing my understanding on the concept. Files used for the tasks were main.c and holberton.c for tests while creating makefiles

0-Makefile

Creates Makefile with the follwing requirements

name of the executable: holberton
rules: all
The all rule builds your executable
variables: none
1-Makefile

Make file with the following requirements

name of the executable: holberton
rules: all
The all rule builds your executable
variables: CC, SRC
CC: the compiler to be used
SRC: the .c files
2-Makefile

Make file with the following requirements

name of the executable: holberton

rules: all

The all rule builds your executable

variables: CC, SRC, OBJ, NAME

CC: the compiler to be used SRC: the .c files OBJ: the .o files NAME: the name of the executable The all rule should recompile only the updated source files Not allowed to have a list of all the .o files

3-Makefile

Make file that meets the following requirements

name of the executable: holberton

rules: all, clean, oclean, fclean, re

all: builds your executable clean: deletes all Emacs and Vim temporary files along with the executable oclean: deletes the object files fclean: deletes all Emacs and Vim temporary files, the executable, and the object files re: forces recompilation of all source files

variables: CC, SRC, OBJ, NAME, RM

CC: the compiler to be used SRC: the .c files OBJ: the .o files NAME: the name of the executable RM: the program to delete files The all rule should recompile only the updated source files The clean, oclean, fclean, re rules should never fail Not allowed to have a list of all the .o files

4-Makefile

Make file that meets 3-Makefile makefile requirements but with following additional requirement

Variable

CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
5-island_perimeter.py

Function def island_perimeter(grid): that returns the perimeter of the island described in grid

grid is a list of list of integers

0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
example of grid is as follows

grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
Perimeter of ground covered by land is got by visiting every cell in the grid and determining soroundings ie. on it's top, bottom, left, right to check if theres water or land on the sides. Each side that has water on sides gets 1 unit addition to it's parameter. We keep on adding the sides that have water as neighbours and also taking into consideration first indexes and last grid indexes until the end of whole grid