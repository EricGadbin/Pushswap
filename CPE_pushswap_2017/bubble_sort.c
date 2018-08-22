/*
** EPITECH PROJECT, 2017
** bubble sort
** File description:
** epitech
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"

void my_swap(int *array)
{
	int tmp = array[0];

	array[0] = array[1];
	array[1] = tmp;
	write(1, " sa", 3);
}

void my_rotate_l(int *array, int size)
{
	int i = 0;
	int tmp = array[i];

	while (i < size - 1) {
		array[i] = array[i + 1];
		i++;
	}
	array[size - 1] = tmp;
	write(1, " ra", 3);
}

int thewhile(int *array, int size)
{
	int i = 0;

	while (i < size -1) {
		if (array[i] > array[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void order(int i, int *array, int size)
{
	while (i < size - 1) {
		if (array[0] > array[1])
			my_swap(array);
		my_rotate_l(array, size);
		i++;
		}
}
void my_amazing_sorter(int *array, int size)
{
	int i = 0;

	if (size < 2 || !(array))
		return;
	while (thewhile(array, size)) {
		order(i, array, size);
		i = 0;
		my_rotate_l(array, size);
	}
}
