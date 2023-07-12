#ifndef __search_algos__
#define __search_algos__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
void print_searching(int *array, size_t first, size_t last);

#endif /* __search_algos__ */
