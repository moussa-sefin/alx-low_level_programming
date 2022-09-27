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
	while (n-- > 0)
	s[n] = b;
	return (s);
}

