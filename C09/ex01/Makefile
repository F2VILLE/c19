CC = cc
CF = -Wall -Wextra -Werror 
SRCDIR = srcs
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c, $(SRCDIR)/%.o, $(SRCS))
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
