#include "../include/caesar_cipher.h"

char	*get_string(const char *prompt)
{
	char	*line;

	line = NULL;
	line = readline(prompt);
	if (!line)
	{
		free(line);
		line = NULL;
		return (NULL);
	}
	line[strlen(line)] = '\0';
	return (line);
}

char *get_input(const char *prompt)
{
	char	*str;

	str = NULL;
	while (!str)
		str = get_string(prompt);
	return (str);
}
