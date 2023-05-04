NAME = push_swap
NAME_BONUS = checker

SRC = ft_atoi.c ft_split.c linked_list.c \
    five.c main.c instr_func_one.c instr_func_two.c instr_func_three.c push_swap.c sort_three.c one_hundred.c five_hundered.c \
	get_next_line.c get_next_line_util.c func_error.c sort_three_func.c

SRC_BONUS = checker.c ft_atoi.c ft_split.c linked_list.c \
    five.c main.c instr_func_one.c instr_func_two.c instr_func_three.c push_swap.c sort_three.c one_hundred.c five_hundered.c \
	get_next_line.c get_next_line_util.c fun_error.c sort_three_func.c
	
CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all : $(NAME)

bonus : $(NAME_BONUS)

$(NAME_BONUS) : $(OBJ_BONUS)
	$(CC) $(CFLAGS) $(OBJ_BONUS) -o $(NAME_BONUS)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

