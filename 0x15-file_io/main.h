#ifndef _MAIN_
#define _MAIN_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif /* _MAIN_ */
