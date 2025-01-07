NAME = ft_display_file

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c
OBJS = $(SRCS:.c=.o)

# Regla principal para compilar el binario
all: $(NAME)

# Crear el binario enlazando los archivos objetos
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Regla para generar los archivos objetos
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar archivos objetos
.PHONY: clean
clean:
	rm -rf $(OBJS)

# Limpiar archivos objetos y el binario
.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

# Regla para recompilar todo
.PHONY: re
re: fclean all
