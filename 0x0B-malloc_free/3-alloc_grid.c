#include "main.h"

/**
 * free_grid - function that frees a given grid
 *
 * @grid: the address of the two dimensional grid
 * @row: the index of row to start free from it
 *
 * Return: Always NULL
 */

void *free_grid(int **grid, int row)
{
	while ((--row) >= 0)
		free(*(grid + row));
	free(grid);

	return (NULL);
}

/**
 * intialize_grid - functions that intialize given grid with 0
 *
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void intialize_grid(int **grid, int width, int height)
{
	int row, col;

	for (row = 0; row < height; row++)
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
}

/**
 * alloc_grid - function that returns a pointer to a 2D array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2D array of int
 *		If width or height is 0 or negative or on failure return NULL
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(grid + i) = malloc(width * sizeof(int));

		if (*(grid + i) == NULL)
			return (free_grid(grid, i));
	}


	intialize_grid(grid, width, height);
	return (grid);

}

