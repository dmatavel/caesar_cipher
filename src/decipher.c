#include "../include/caesar_cipher.h"

void	decipher(void)
{
	char	*ciphertext;
	char	*buffer;
	int		i;
	int		key;

	ciphertext = get_string("ciphertext: ");
	key = 0;
	while (invalid_key(key))
	{
		buffer = get_string("Insert a key between 1-25: ");
		key = atoi(buffer);
		free(buffer);
	}
	printf("plaintext: ");
	i = 0;
	while (ciphertext[i] != '\0')
	{
		ciphertext[i] = rotate(ciphertext[i], (26 - key));
		printf("%c", ciphertext[i]);
		i++;
	}
	printf("\n");
	free(ciphertext);
	ciphertext = NULL;
	buffer = NULL;
}
