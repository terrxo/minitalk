SRCS = ft_printf.c ft_print_formats.c ft_print_hex_pointer.c ft_print_unsigned.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):	$(OBJS)
			$(MAKE) all bonus -C ./libft
			cp libft/libft.a $(NAME)
			ar -rcs $(NAME) libft/libft.a $(OBJS)

$(OBJS):
			$(CC) $(CFLAGS) -c $(SRCS)

clean:	
			$(MAKE) clean -C ./libft
			rm -f $(OBJS)

fclean:	clean
			$(MAKE) fclean -C ./libft
			rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
