#include <iostream>

using namespace std;

int main(){

  int k,n,w;
  cin >> k >> n >> w;

  int priceAll =0;

  for(int i = 1 ; i<= w ;i++){

    priceAll += (i*k);
    
  }

  if(priceAll <= n)
    cout << 0 ;
  else
    cout << priceAll - n;

  
	return 0;
} 

