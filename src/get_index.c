#include "../include/caesar_cipher.h"

int	get_lower_alpha_index(int c)
{
	int	start;
	int	i;

	start = 'a';
	i = 0;
	while (start != 'z')
	{
		if (start == c)
			break ;
		start += 1;
		i++;
	}
	return (i);
}

int	get_upper_alpha_index(int c)
{
	int	start;
	int	i;

	start = 'A';
	i = 0;
	while (start != 'Z')
	{
		if (start == c)
			break ;
		start += 1;
		i++;
	}
	return (i);
}
