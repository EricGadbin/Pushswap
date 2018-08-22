/*
** EPITECH PROJECT, 2017
** epitech
** File description:
** pushswap
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int main(int ac, char **argv)
{
	int *array = malloc(sizeof(int)* ac - 1);
	int a = 1;
	int nb = 0;

	if (array == NULL)
		return (84);
	while (a != ac) {
		nb = my_getnbr(argv[a]);
		array[a - 1] = nb;
		a++;
	}
	if (thewhile(array, ac -1)) {
		write(1, "sa sa", 5);
		my_amazing_sorter(array, ac - 1);
		write(1, "\n", 1);
	}
	free(array);
	return (0);
}
