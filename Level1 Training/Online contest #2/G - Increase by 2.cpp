#include <iostream>

using namespace std;

int main(){

  int n;
  cin >> n;

  int A[n];
  for(int i=0 ; i<n;i++){
    cin >> A[i];
  }

  for(int i=0;i<n;i++){
    if(A[i] >=0 ){
      cout << A[i]+2 <<" ";
    }
    else {
      cout <<A[i] <<" ";
    }
  }
  
  
  // Another solution
  /*
  int n;
  cin >> n;

  for(int i=0;i<n;i++){
    int x;
    cin >> x;
    if(x>=0)
      cout <<x+2<<" ";
    else
      cout <<x <<" ";
  }
  
  
  
  */



	return 0;
} 

