#include <iostream>

using namespace std;

int main(){

  int n;
  cin >> n;

  if(n<=0){
    n = n*-1; // positive
  }
  
  // 123
  int first = n / 100 ; // 1
  int last = n % 10 ; // 3
  n = n/10; // 12
  int middle = n % 10;

  cout << first <<endl;
  cout << middle <<endl;
  cout << last <<endl;

 
	return 0;
} 

