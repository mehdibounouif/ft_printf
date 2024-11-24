SRC = ft_printf.c \
      printID.c \
      printS.c \
      printX.c \
      printC.c \


OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

AR = ar crs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

#exec: ft_printf.h
#	$(CC) $(FLAGS) main.c -L. -lftprintf -o program

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
