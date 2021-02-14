#include <iostream>

using namespace std;

int main(){



  int n ;
  cin >> n;

  // 1 3 initial
  // 4 6 
  // 7 9
  // 10 12 

  if(n>=1 && n <=3)
    cout <<"Initial";
  else if(n >= 4 && n<=6)
    cout <<"Average";
  else if(n>=7 && n<=9)
    cout <<"Sufficient";
  else 
    cout <<"High";
 


	return 0;
} 

