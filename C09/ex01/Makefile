FILES = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

NAME = libft.a

HEAD = ./includes/

CFLAGS += -Wall -Wextra -Werror

OBJS = $(FILES:.c=.o)

all: $(NAME)

.c.o:
	cc $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re