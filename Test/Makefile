CC=clang++
CFLAGS=-Wall -g

BINS= testing

all: $(BINS)

testing: test.cpp
	$(CC) $(CFLAGS) test.cpp -o testing

clean:
	rm $(BINS)
