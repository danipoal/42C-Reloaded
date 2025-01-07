NAME = libft.a
SRCS = srcs/ft_putchar.c \
       srcs/ft_putstr.c \
       srcs/ft_strcmp.c \
       srcs/ft_strlen.c \
       srcs/ft_swap.c
       
OBJS = $(SRCS:.c=.o)
INC_DIR = includes 
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)



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
