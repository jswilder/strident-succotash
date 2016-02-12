#include <cstdlib>
#include <cstring>
#include <iostream>

/*
  Jeremy Wilder
  February 11, 2016
  Sundaram Sieve Implementation
  Accepts integer n, computes all primes through n
*/

int main(){

  long long int n(0), m(0), i(0), j(0);

  std::cout << "Enter a value for N" << std::endl;
  std::cin >> n;

/*
  Sundaram calculates all primes through 2n+1
  only calculate through n/2 to give the requested
  number of primes
*/

  m = (n/2);
  int array[m];

    // Set them all to "true"
  while(i<m){
    array[i] = 1;
    i++;
  }

  for(i=1; i<m; i++){
    for(j=1; j<= ((m-i)/((2*i)+1)) ; j++){
      array[i+j+(2*i*j)] = 0;
    }
  }

    // Skips over the number "1"
  i=1;
    // Sundaram only calcultes odd primes, manually print 2
  std::cout << "2" << std::endl;
  while(i<m){
    if(array[i]){
      std::cout << (2*i)+1 << std::endl;
    }
  i++;
  }
}
