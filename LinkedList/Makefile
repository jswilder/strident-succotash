CC=g++
CFLAGS=-Wall -g

BINS= linkedList

all: $(BINS)
	
linkedList: LLtest.cpp
	$(CC) $(CFLAGS) LLtest.cpp linkedList.h
	
clean:
	rm *.o *.h.gch *~ a.out
