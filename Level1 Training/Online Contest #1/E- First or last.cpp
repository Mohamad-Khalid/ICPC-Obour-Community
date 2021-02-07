#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  // 497
  int first = n / 1000; // 4 
  int last = n % 10;  // 7 

  if( first > last)
    cout << first ;
  else if(last > first)
    cout << last ;
  else
    cout<<"="; 


	return 0;
} 
