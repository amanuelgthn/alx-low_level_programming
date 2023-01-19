#ifndef _FUNCTIONS_POINTERS_
#define _FUNCTIONS_POINTERS_
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int first_digit(int n);
int int_index(int *array, int size, int (*cmp)(int));
int main(int argc, char *argc[]);
#endif /* _FUNCTIONS_POINTERS_ */
