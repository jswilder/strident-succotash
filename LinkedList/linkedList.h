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

	// LL Constructor
template <class T>
linkedList<T>::linkedList(){

	head = tail = NULL;
}

template <class T>
void linkedList<T>::insert( T *data ){

	struct Node<T> *node = new Node<T>;
	node->next = NULL;
	node->data = data;

	if( head == NULL ){
	
		head = tail = node;
	}
	else{

		tail->next = node;
		tail = node;
	}
}

template <class T>
void linkedList<T>::removeNode( T *remove ){

	struct Node<T> *curr = head;
	struct Node<T> *prev = head;
	
	while( curr != NULL ){
	
		if( *curr->data == *remove ){
			if( curr == head ){
				head = head->next;
			}
			else{
				prev->next = curr->next;
			}
			delete curr;
			return;
		}

	prev = curr;
	curr = curr->next;
	}	
}

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
