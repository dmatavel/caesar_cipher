#include "../include/caesar_cipher.h"

/*
** test if the string key has only digits
** and if it's an interger beteween 1-25
*/
int	invalid_key(char *key)
{
	int	k;

	k = 0;
	while (key[k] != '\0')
	{
		if (!(isdigit(key[k])))
			return (1);
		k++;
	}
	k = atoi(key);
	if (k < 1 || k > 25)
		return (1);
	return (0);
}

/* get the alphabetical index of a lowercase letter */
int	lower_index(int c)
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

/* get the alphabetical index of an uppercase letter */
int	upper_index(int c)
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

/*
** converts a character in ascii code to an alphabetic index
** applies the caesar cipher formula to it and converts it back
** to its ascii code 
*/
int	rotate(int c, int k)
{
	int	i;

	i = 0;
	if (isalpha(c))
	{
		if (isupper(c))
		{
			i = upper_index(c);
			i = (i + k) % 26;
			c = i + 65;
		}
		else
		{
			i = lower_index(c);
			i = (i + k) % 26;
			c = i + 97;
		}
	}
	return (c);
}

/*
** asks the user for a text to encrypt
*/
char	*get_string(void)
{
	char	*line;

	line = NULL;
	line = readline("plaintext: ");
	if (!line)
	{
		free(line);
		line = NULL;
		return (NULL);
	}
	line[strlen(line)] = '\0';
	return (line);
}
