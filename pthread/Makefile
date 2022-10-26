CC=gcc

CFLAGS=-g -O0
LDFLAGS=-pthread

src=yellow_block_red.c
objs=$(src:.c=.o)

default:
	$(CC) $(CFLAGS) $(src) $(LDFLAGS) -o main
