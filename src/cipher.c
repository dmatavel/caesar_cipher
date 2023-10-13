#include "../include/caesar_cipher.h"

int	rotate(int c, int k);

void	cipher(void)
{
	char	*plaintext;
	char	*buffer;
	int		i;
	int		key;

	plaintext = get_input("plaintext: ");
	key = 0;
	while (invalid_key(key))
	{
		buffer = get_string("Insert a key between 1-25: ");
		key = atoi(buffer);
		free(buffer);
	}
	printf("ciphertext: ");
	i = 0;
	while (plaintext[i] != '\0')
	{
		plaintext[i] = rotate(plaintext[i], key);
		printf("%c", plaintext[i]);
		i++;
	}
	printf("\n");
	free(plaintext);
	plaintext = NULL;
	buffer = NULL;
}

int	rotate(int c, int k)
{
	int	i;

	i = 0;
	if (isalpha(c))
	{
		if (isupper(c))
		{
			i = get_upper_alpha_index(c);
			i = (i + k) % 26;
			c = i + 65;
		}
		else
		{
			i = get_lower_alpha_index(c);
			i = (i + k) % 26;
			c = i + 97;
		}
	}
	return (c);
}
