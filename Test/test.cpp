#include <cstdlib>
#include <cstring>
#include <iostream>

// Random Comment ?!?!

class Shape{
public:
	std::string name;
	Shape() : name("unnamed shape") {}
	virtual void printStuff(){ std::cout << name << std::endl; };
};

class Circle : public Shape{

public:
	std::string name;
	Circle() : name("Unnamed circle") {}
	Circle(std::string n) : name(n) {}
	void printStuff(){	std::cout<< name << std::endl;	}
};

class Dounut : public Circle{

public:
	std::string name;
	Dounut() : name("Unnamed dounut") {}
	Dounut(std::string n) : name(n) {}
	void printStuff(){	std::cout << name << std::endl;	}
};

/*
	// Ret should = 1 for the base case
void factorial( int &fact, int n ){

	if( n == 0 ){
		fact = 1;
	}
	else{
		fact = fact * n;
		n--;
		if( n > 1 )
			factorial( fact, n );
	}
}
*/
int main(){

//	int n = 4;
//	int ret = 1;

	Shape *s = new Shape();
	Shape *t = new Dounut();
	Circle *u = new Dounut("Joe");

	s->printStuff();
	t->printStuff();
	u->printStuff();

//	factorial( ret, n );
//	std::cout << "\nfactorial is " << ret << std::endl;
}
