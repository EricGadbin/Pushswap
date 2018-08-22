NAME		=	push_swap

CC		=	gcc
RM		=	rm -rf

SRC		=	main.c\
			my_getnbr.c\
			bubble_sort.c\

OBJ		=	$(SRC:.c=.o)

CFLAGS		+=	-Wall -Wextra -I./include 

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LD_FLAGS)

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all
