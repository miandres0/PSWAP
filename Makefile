NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
SRCS = main.c \
	ft_strlen.c \
	ft_atoi.c \
	ft_strjoin.c \
	ft_split.c

OBJS = $(SRCS:%.c=%.o)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean:
	rm -f $(OBJS) $(NAME)

.PHONY: re
re:
	make fclean
	make
