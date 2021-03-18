CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = rush-02
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
INCDIR = includes

all: $(TARGET) 

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all


