##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## No file there, just an epitech header example.
## You can even have multiple lines if you want!
##

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files
SRC = 	src/my_atoi.c\
		src/calculator.c\
		lib/my/my_putchar.c\
		lib/my/my_putstr.c\
		lib/my/my_putnbr.c\
		main.c



# Object files
OBJ =   $(SRC:.c=.o)

# Name of the final executable
NAME =   calculator

# Default target
all: $(NAME)

# Rule for building the executable
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

# Rule to compile .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and other generated files
clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f "#*#"
	rm -f *gcda
	rm -f *gcno
	rm -f *.o

# Clean and then remove the binary
fclean: clean
	rm -f $(NAME)

# Clean and rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re
