#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * is_all_star - function that checks from index [1] to the [size] index
 *				contains '*' only ot nor
 *
 * @str: pointer to the string
 * @index: index that start from it checking
 * @size: the range to be checked
 *
 * Return: 1 if it consists only from * and 0 otherwise
 */

int is_all_star(char *str, int index, int size)
{
	if (index > size)
		return (1);

	if (str[index] != '*')
		return (0);

	return (is_all_star(str, index + 1, size));
}

/**
 * malloc_dp - function that mallocs the 2d array (dp) recursively
 *
 * @dp: the 2d array to be malloced
 * @row: the current to be malloced
 * @rows: number of rows in the 2d array
 * @cols: number of cols in the 2d array
 *
 * Return: Nothing
 */

void malloc_dp(int **dp, const int rows, const int cols, int row)
{
	if (row >= rows)
		return;

	dp[row] = (int *) malloc(cols * sizeof(int));
	malloc_dp(dp, rows, cols, row + 1);
}

/**
 * intialize_dp - function to intialize the dp elements with -1 recursively
 *
 * @dp: the array to be intialized
 * @row: the current row to be intialized
 * @col: the current col to be intialized
 * @rows: number of rows in the dp 2d array
 * @cols: number of cols in the dp 2d array
 *
 * Retunr: Nothing
*/

void intialize_dp(int **dp, int rows, int cols,  int row, int col)
{
	if (row >= rows || col >= cols)
		return;

	dp[row][col] = -1;
	intialize_dp(dp, rows, cols, row, col + 1);
	if (col == cols - 1)
		intialize_dp(dp, rows, cols, row + 1, 0);
}

/**
 * is_string_matching - check if the string 2 string matching if wildcard exist
 *
 * @s1: first string
 * @s2: second string
 * @s1_indx: the index to be checked in s1
 * @s2_indx: the index to be checked in s2
 * @dp: 2d array for memeorization dp technique for more optimization
 *
 * Return: returns 1 if the strings can be considered identical
 *			otherwise return 0
 */

int is_string_matching(char *s1, char *s2, int s1_indx, int s2_indx, int **dp)
{
	if (s1_indx < 0 && s2_indx < 0)
		return (1);
	if (s1_indx < 0 && s2_indx >= 0)
		return (0);

	if (s2_indx < 0 && s1_indx >= 0)
		return (is_all_star(s1, 0, s1_indx));

	if (dp[s1_indx][s2_indx] != -1)
		return (dp[s1_indx][s2_indx]);

	if (s1[s1_indx] == s2[s2_indx])
		return (dp[s1_indx][s2_indx] =
				is_string_matching(s1, s2, s1_indx - 1, s2_indx - 1, dp));
	else
	{
		if (s1[s1_indx] == '*')
			return (is_string_matching(s1, s2, s1_indx - 1, s2_indx, dp)
				|| is_string_matching(s1, s2, s1_indx, s2_indx - 1, dp));
		else
			return (0);
	}
}

/**
 * wildcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: seccond string
 *
 * Return: returns 1 if the strings can be considered identical
 *			otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	int n = strlen(s2);
	int m = strlen(s1);

	int **dp = (int **)malloc(n * sizeof(int *));

	malloc_dp(dp, n, m, 0);
	intialize_dp(dp,n, m, 0, 0);

	return (is_string_matching(s2, s1, n - 1, m - 1, dp));
}
