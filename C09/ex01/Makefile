CC = cc
CF = -Wall -Wextra -Werror 
SRCDIR = srcs
SRCS = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strcmp.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_swap.c
OBJS = $(SRCDIR)/ft_putchar.o $(SRCDIR)/ft_putstr.o $(SRCDIR)/ft_strcmp.o $(SRCDIR)/ft_strlen.o $(SRCDIR)/ft_swap.o
OUT = libft.a
INCLUDES = -Iincludes

all: $(OUT)

$(OUT): $(OBJS)
	ar rcs $(OUT) $^

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CF) $(INCLUDES) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(OUT)

re: fclean all

.PHONY: all clean fclean re
