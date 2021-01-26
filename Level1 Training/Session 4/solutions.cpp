#include <iostream>

using namespace std;


int main(){

   // Three numbers
  int k,s, counter=0;
  cin >> k >>s;
  for(int x=0 ; x <= k ;x++){
    for(int y = 0 ; y<=k ;y++){
      int t = s - (x+y);
      if(t >=0 && t<= k){
        counter++;
      }
      //cout << "X "<<x <<" y "<<y<< " t " <<  t<< " counter "<<counter <<endl;
      /*for(int z =0 ; z <= k ;z++){
        int sum = x + y + z ;
        if(sum == s){
          counter++;
        }*/
      
    }
  }
  cout << counter <<endl;


  // Pyramid
  int n;
  cin >> n;

  for(int i=1 ;i<= n ;i++){

    for(int j= 1; j<=i ; j++){
      cout << "*";
    }

    cout << endl;
  }


  // Histogram
  char s;
  int n;
  cin >> s >> n;
  for(int i=0 ; i<n ;i++){
    int x ;
    cin >> x;
    for(int j = 0 ; j< x ;j++){
      cout << s;
    }
    cout <<endl;
  }



	return 0;
} 
