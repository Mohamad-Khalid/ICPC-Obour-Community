#include <iostream>

using namespace std;

// it is the large size can be given in the problem and must be contant(dosn't rhange)
const int N = 1e5 + 5;
int A[N] ; // array of size N and all elements initialozed by 0
int B[100000]; // we can also do this 


int main(){
  /*
    - Array is a data structure contains some data of the same type
    - It is 0 index --> start from 0 , 1 , 2 ....
    - We declare it as follow 
    data type  name [ size ] 
    like : int A [10] it is array contains 10 places and evry place
           is an integer

   - We prefer to declare the array Global (outside the main function)
   - we give the size to the array by a large number
  */

  int n ; 
  cin >>  n; // number of elements of the array

  for(int i=0; i<n; i++){
    cin >> A[i] ; // fill the array 
  }

  for(int i=0 ; i<n ;i++){
    cout << A[i] <<" ";  // print the elements of the array
  }


	return 0;
} 
