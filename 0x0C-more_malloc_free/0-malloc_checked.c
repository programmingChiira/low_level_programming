#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL) {
		printf("Error: malloc failed\n");
		exit(98);
	}
	return ptr;
}
