CC = clang
CFLAGS = -g -Wall -Werror -Wextra
LDLIBS = -lcs50

# List all your programs here
PROGRAMS = hello scores scrabble

all: $(PROGRAMS)

hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c $(LDLIBS)

scores: scores.c
	$(CC) $(CFLAGS) -o scores scores.c $(LDLIBS)

scrabble: scrabble.c
	$(CC) $(CFLAGS) -o scrabble scrabble.c $(LDLIBS)

clean:
	rm -f $(PROGRAMS)
	rm -f *.o 