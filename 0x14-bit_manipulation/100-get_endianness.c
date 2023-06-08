#include "main.h"

/**
 * get_endianness - To check if a machine is little or big endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
