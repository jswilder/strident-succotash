#include <cstdlib>
#include <cstring>
#include <iostream>

// Random Comment

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

int main(){

	int n = 4;
	int ret = 1;
	
	factorial( ret, n );

	std::cout << "\nfactorial is " << ret << std::endl;
}
