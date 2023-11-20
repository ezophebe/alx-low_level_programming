#include "main.h"

/**
 * alloc_grid - fuction retruns  pointer to 2-dimensional array of integers
 *@height: dimension 1
 *@width: dimension 2
 *Return: output
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **op;

	if (width <= 0 || height <= 0)
		return (NULL);

	op = malloc(sizeof(int *) * height);

	if (op == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		op[i] = malloc(sizeof(int) * width);

		if (op[i] == NULL)
		{
			free(op);
			for (j = 0; j <= height; j++)
				free(op[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			op[i][j] = 0;
	}
	return (op);
}
