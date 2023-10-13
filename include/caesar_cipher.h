#ifndef CAESAR_CIPHER_H
# define CAESAR_CIPHER_H

# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <unistd.h>
# include <readline/readline.h>
# include <readline/history.h>

/* cipher.c */
void	cipher(void);
int		rotate(int c, int k);

/* decipher.c */
void	decipher(void);

/* get_inputs.c */
char	*get_string(const char *prompt);
char	*get_input(const char *prompt);

/* get_index.c */
int		get_lower_alpha_index(int c);
int		get_upper_alpha_index(int c);

/* invalid_key.c */
int		invalid_key(int key);

#endif //CAESAR_CIPHER_H
