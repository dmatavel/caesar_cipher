NAME = caesar_cipher
SRC	= src/main.c src/utils.c

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