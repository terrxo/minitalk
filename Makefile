CC = cc
CFLAGS = -Wall -Wextra -Werror

all:
			$(MAKE) all -C ./ft_printf
			$(CC) $(CFLAGS) -c ft_client.c
			$(CC) $(CFLAGS) -o client ft_client.o ./ft_printf/libftprintf.a
			$(MAKE) all -C ./ft_printf
			$(CC) $(CFLAGS) -c ft_server.c
			$(CC) $(CFLAGS) -o server ft_server.o ./ft_printf/libftprintf.a
			
clean:	
			$(MAKE) clean -C ./ft_printf
			rm -f ft_client.o ft_server.o

fclean:	clean
			$(MAKE) fclean -C ./ft_printf
			rm -f client server

re:	fclean all

.PHONY:	all clean fclean re
