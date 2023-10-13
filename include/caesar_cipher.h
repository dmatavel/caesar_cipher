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

/* decipher.c */
void	decipher(void);

/* rotate.c */
int		rotate(int c, int k);

/* print_title.c*/
void    print_title(void);

/* get_inputs.c */
char	*get_string(const char *prompt);
char	*get_input(const char *prompt);

/* invalid_key.c */
int		invalid_key(int key);

#endif //CAESAR_CIPHER_H
