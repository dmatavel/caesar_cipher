#include "../include/caesar_cipher.h"

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
		buffer = get_input("Insert a key between 1 and 25: ");
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
