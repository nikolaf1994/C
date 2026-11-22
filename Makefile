CC = clang
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c11
LDFLAGS = -L./libcs50-11.0.3/build/lib
LDLIBS = -lcs50
INCLUDES = -I./libcs50-11.0.3/build/include

hello: hello.c
	$(CC) $(CFLAGS) $(INCLUDES) -o hello hello.c $(LDFLAGS) $(LDLIBS)

.PHONY: clean
clean:
	rm -f hello
