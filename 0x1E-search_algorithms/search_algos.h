#ifndef __search_algos__
#define __search_algos__
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int search_binary(int *array, size_t low, size_t high, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
void print_searching(int *array, size_t first, size_t last);
double pow(double x, double y);

#endif /* __search_algos__ */
