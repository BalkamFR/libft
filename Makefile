CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = includes
NAME = libft.a

SRC_DIR = .
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
BONUS_FILES = $(wildcard $(SRC_DIR)/*_bonus.c)

OBJS = $(SRC_FILES:.c=.o)
OBJS_BONUS = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
