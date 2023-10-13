#include "../include/caesar_cipher.h"

void	print_title(void)
{
	puts("**********************************");
	puts("*                                *");
	puts("*   caesar_cipher, by dmatavel   *");
	puts("*                                *");
	puts("**********************************");
	printf("\n");
}

int	main(void)
{
	char	*buffer;
	int		option;

	system("clear");
	print_title();
	while (1)
	{
		puts("choose one option inserting its number:");
		buffer = get_string("1) cipher\n2) decipher\n3) quit\n");
		option = atoi(buffer);
		if (option == 1)
			cipher();
		else if (option == 2)
			decipher();
		else if (option == 3)
			exit(EXIT_SUCCESS);
		else
			puts("Option not found.");
	}
}
