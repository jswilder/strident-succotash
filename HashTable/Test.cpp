#include <cstdlib>
#include <iostream>

void modify( int &val ){

	val = 5;
}

int main(){

	int val = 0;
	std::cout << “\n\n” << val << std::endl;
	modify( val );
	std::cout << “\n\n” << val << std::endl;

return 0;
}
