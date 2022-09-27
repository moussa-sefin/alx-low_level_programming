#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: memory area
  * @b: the byte
  * @n: # of bytes to fill
  * Return: pointer to s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < 95; i++)

		*(s + i) = b;
	return (s);
}

