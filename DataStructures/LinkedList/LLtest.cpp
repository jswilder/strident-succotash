#include <cstdlib>
#include <cstring>
#include <iostream>

#include "linkedList.h"

int main(){

	linkedList<int> myList;	
	
	int i = 0;
	
	while( i < 20 ){
	
		int *myInt = new int;
		*myInt = ++i;
		myList.insert(myInt);
	}

	struct Node<int> *temp;
	temp = myList.head;
	
	while( temp != NULL ){
		std::cout << *temp->data << std::endl;
		temp = temp->next;
	}
	
	int *remInt = new int;
	*remInt = 9;
	myList.removeNode( remInt );

	temp = myList.head;
	
	while( temp != NULL ){
		std::cout << *temp->data << std::endl;
		temp = temp->next;
	}
	
	std::cout << "\n\nsize = " << myList.size() << "\n";
}
