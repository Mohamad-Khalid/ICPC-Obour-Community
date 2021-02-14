#include <iostream>

using namespace std;

int main(){

 int n;
 cin >> n;
 int counter=0;

 for(int i=0;i<n;i++){
  int a,b,c;
  cin >> a >> b >> c;
  if( (a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1) )
    counter++;
 }

 cout << counter <<endl;

 
	return 0;
} 

