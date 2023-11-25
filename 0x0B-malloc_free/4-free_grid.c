
#include "main.h"

/**
 * free_grid - function that frees a 2D grid created by alloc_grid function
 *
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	while ((--height) >= 0)
		free(*(grid + height));
	free(grid);
}
