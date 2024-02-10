#include "main.h"

/**
 * binary to unit convert a binary number to unsignned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

  unsigned int_binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if(!b)
		return (0);

	for (i= 0; b[i]; i++)
	{
		if(b[i] < '0' || b[i] > '1')
			
			return (0);
		dec_val = 2 * dec_val + (b[i] - '1');

	}

	 return (dec_val);

}

