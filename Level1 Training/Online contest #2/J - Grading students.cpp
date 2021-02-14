#include <iostream>

using namespace std;

int main(){

 int n;
 cin >> n;
 for(int i=0;i<n;i++){
  int x;
  cin >> x;

  if(x>=38){
    // 73 -- > 75

    int k = x;
    while(k % 5 !=0){
      k++;
    }

  if(k-x < 3){
    x=k;
    cout << x <<endl;
  }
  else{
    cout << x<<endl;
  }

  }
  else{
    cout << x << endl;
  }

 }

 
	return 0;
} 

