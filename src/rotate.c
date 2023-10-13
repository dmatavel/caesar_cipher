#include "../include/caesar_cipher.h"

int	rotate(int c, int k)
{
	if (isalpha(c))
	{
		if (isupper(c))
			c = (((c - 65) + k) % 26) + 65;
		else
			c = (((c - 97) + k) % 26) + 97;
	}
	return (c);
}
