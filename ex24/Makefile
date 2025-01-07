NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(SRCS:.c=.o)

# Regla all para compilar libreria
all: $(NAME)

# Crear biblioteca
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compilar cada archivo en o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar datos no necesarios
.PHONY: clean
clean:
	rm -rf $(OBJS)

# Limpiar todo lo compilado incluido la biblioteca
.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

# Recompilar todo
.PHONY: re
re: fclean all
