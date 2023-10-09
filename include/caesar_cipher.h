#ifndef CAESAR_CIPHER_H
# define CAESAR_CIPHER_H

# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <unistd.h>
# include <readline/readline.h>
# include <readline/history.h>

/* utils.c */
int		invalid_key(char *key);
int		get_lower_alpha_index(int c);
int		get_upper_alpha_index(int c);
int		rotate(int c, int k);
char	*get_string(void);

#endif //CAESAR_CIPHER_H
