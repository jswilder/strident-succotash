CC=g++
CFLAGS=-Wall -g

BINS= test1

all: $(BINS)
	
test1: test.cpp
	$(CC) $(CFLAGS) test.cpp -o test1

clean:
	rm $(BINS) *.o *.h.gch *~ data.txt
