CC = gcc

.PHONY:all clean

all:

	@$(CC) -o fac fac.c

clean:

	@rm -f *.o fac  
