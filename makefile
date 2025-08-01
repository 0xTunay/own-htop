CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude
LDFLAGS = -lncurses

SRC = main.c src/system_info.c src/process_list.c src/ui.c
OBJ = $(SRC:.c=.o)

all: htop-lite

htop-lite: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm -f htop-lite $(OBJ)