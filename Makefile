SRCS	= ft_char.c ft_decimal_integer.c ft_hexadecimal.c ft_pointer.c \
ft_printf_utils.c ft_printf.c ft_string.c ft_unsigned_decimal.c \
ft_hexadecimal_maj.c ft_unsignedint.c

OBJS	= $(SRCS:.c=.o)

NAME	= libftprintf.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

all:		$(NAME)

clean:	
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re