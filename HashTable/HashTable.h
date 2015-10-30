// Jeremy Wilder
// Generic Linked-List Template

#include <cstdlib>
#include <iostream>

	// This is a generic node type
	// It takes a pointer to whatever legal data you send it

template <class T>
struct Node{

	Node<T> *next;
	T *data;
};


template <class T>
class linkedList {

	private:
	
	public:
		Node<T> *head;
		Node<T> *tail;
		linkedList();
		void insert( T* );
		void removeNode( T* );
		int size( );
};


template <class T>
int linkedList<T>::size( ){

	int count = 0;
	struct Node<T> *curr = head;	
	
	while( curr != NULL ){
		count++;
		curr = curr->next;
	}
	return count;
}
