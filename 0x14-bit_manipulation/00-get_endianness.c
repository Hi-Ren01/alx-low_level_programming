#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return 1 if little endian or 0 if  big endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
