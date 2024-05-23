# ifndef ALGOS_H
# define ALGOS_H
#define MIN(i, j) (((i) <= (j)) ? (i) : (j))
#include <stddef.h>
#include <stdio.h>
#include <stddef.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
