SRC = ft_printf.c ft_pointer.c ft_cases.c count_hex.c ft_putchar.c \
	  ft_putnbr.c ft_putstr.c ft_putunbr.c hex_low.c hex_up.c
OFILES = ${SRC:.c=.o}

CC = gcc
W = -c -Wall -Wextra -Werror
INC = ft_printf.h
NAME = libftprintf.a

${NAME} : ${SRC} ${INC}
	@${CC} ${W} ${SRC}
	@ar -rc ${NAME} ${OFILES}
clean:
	@rm -f ${OFILES}
fclean : clean
	@rm -f ${NAME}
re : fclean all
all : ${NAME}
