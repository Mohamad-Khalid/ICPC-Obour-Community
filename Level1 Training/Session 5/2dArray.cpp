#include <iostream>

using namespace std;

const int N = 100+5;

int a[N][N];  // 2d array of N rows and N colomns

int main(){

  /*
    we declare 2d array as :
    Data type  name [rows][coloms]
    int A[4][5];
    it contains 4 rows and 5 colomns
      it looks like this :)
      --------------------
      |   |   |   |   |  |
      --------------------
      |   |   |   |   |  |
      --------------------
      |   |   |   |   |  |
      --------------------
      |   |   |   |   |  |
      --------------------
  */

   int n,m;
   cin >> n >> m;
   // n ---> number of rows
   // m ---> number of colomns
   for(int i=0;i<n;i++){
    for(int j=0;j<m ;j++){
      cin >> a[i][j];
    }
   }

    for(int i=0 ; i<n;i++){ // rows
      for(int j=0;j<m;j++){// colomns
        cout << a[i][j] <<" ";
      }
      cout << endl; // to print every row in new line
    }

	return 0;
} 
