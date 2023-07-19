#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a matrix using malloc
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: return a pointer of pointer or null
 */
int **alloc_grid(int width, int height)
{
	int m, n, u, v;
	int **l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		l = (int **) malloc(height * sizeof(int *));
		/* we have to make a malloc per pointer*/
		if (!l)
		{
			free(l);
			return (NULL);
		}
		for (m = 0; m < height; m++)
		{
			l[m] = (int *) malloc(width * sizeof(int));
			if (!l[m])
			{
				for (n = 0; n <= m; n++)
					free(l[n]);
				free(l);
				return (NULL);
			}
		}
		for (u = 0; u < height; u++)
		{
			for (v = 0; v < width; v++)
			{
				l[u][v] = 0;
			}
		}
		return (l);
	}
}
