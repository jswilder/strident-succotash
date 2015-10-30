// Jeremy Wilder
// Generic Linked-List Template

#include <cstdlib>
#include <iostream>

// Not actually a hash table yet..

template <class T>
struct Node{

	Node<T> *next;
	T *data;
};
