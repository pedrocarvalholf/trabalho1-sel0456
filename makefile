CC = gcc
CFLAGS = -Wall -Werror

SRCS = main.c processArray.c printArray.c modifyArray.c funcoes.h
OBJS = $(SRCS:.c=.o)

programa: $(OBJS)
	$(CC) $(CFLAGS) -o programa $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f programa $(OBJS)
