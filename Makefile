NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCF = libft_utils/ft_atoi.c libft_utils/split.c libft_utils/strdup.c libft_utils/strjoin.c libft_utils/substr.c \
		checker_func.c instr_utils.c sort_3_4_5.c sort_tools1.c sort_tools2.c sort_tools3.c stack_utils.c utils_func.c \
		push_swap.c final_sort.c checker_func1.c sort_big_range.c
OBJF = $(SRCF:.c=.o)

all : $(NAME)

$(NAME) : $(OBJF)
	$(CC) $(CFLAGS) $(OBJF) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJF)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re



    
