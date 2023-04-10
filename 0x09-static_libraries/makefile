CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
DEPS=main.h

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

libmy.a: _putchar.o _strlen.o _strncpy.o _strcmp.o _memcpy.o _strchr.o _strspn.o _strpbrk.o _strstr.o
	ar rcs $@ $^

clean:
	rm -f *.o libmy.a
