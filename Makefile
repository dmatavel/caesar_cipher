NAME =	caesar_cipher
SRC	=	src/main.c src/cipher.c src/decipher.c src/rotate.c \
		src/print_title.c src/get_inputs.c src/invalid_key.c

OBJ	= $(SRC:.c=.o)
CC	= gcc
FLAGS = -Wall -Werror -Wextra

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -lreadline -o $(NAME)

all: $(NAME)
	
clean:
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
