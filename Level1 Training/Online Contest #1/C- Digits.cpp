#include <iostream>

using namespace std;

int main(){

  // 3456  --> 4
  // 345
  // 34
  // 3
  // 0

  int n;
  cin >> n;
  if(n==0){
    cout << 1;
    return 0;
  }

  int counter = 0;

  while(n>0){
    ++counter; //equal counter++ or counter = counter + 1 
    n = n / 10; // every step divide the number by 10
  }
  cout << counter ;
  
	return 0;
} 
