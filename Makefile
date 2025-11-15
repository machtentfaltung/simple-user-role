CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c23
SRCS = main.c user.c

OBJS = $(SRCS:.c=.o)

EXEC = main
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

%.o: %.c user.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: all clean