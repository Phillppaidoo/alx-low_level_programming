#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the order of an array of integers
 * @array: the array to be reversed
 * @size: the number of elements in the array
 * Return: void
 */
void reverse_array(int *array, int size)
{
int temp, i, j;
for (i = 0, j = size - 1; i < j; i++, j--)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
}
}
