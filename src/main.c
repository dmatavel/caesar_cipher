#include "../include/caesar_cipher.h"

int	main(int argc, char **argv)
{
	char	*p;
	int		i;
	int		k;

	if ((argc != 2) || ((invalid_key(argv[1]))))
	{
		puts("Usage: ./caesar [key] *a key must be an integer between 1-25*");
		return (1);
	}
	p = NULL;
	while (!p)
		p = get_string();
	printf("ciphertext: ");
	i = 0;
	k = atoi(argv[1]);
	while (p[i] != '\0')
	{
		p[i] = rotate(p[i], k);
		printf("%c", p[i]);
		i++;
	}
	printf("\n");
	free(p);
	p = NULL;
	return (0);
}
