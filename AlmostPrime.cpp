#include <iostream>
#include <vector> 

#define ll long long 

using namespace std;

vector<int>v;
void get_divisors(int n){
  for(int i=2;i*i<=n ; i++){
    if(n%i==0){
      v.push_back(i);
      if(n/i!=i)
        v.push_back(n/i);
    }
  }
}

bool is_prime(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0)
      return 0;
  }

  return true;

}

int main(){
  
  // fast input   
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  
  int n;
  cin >> n;
  int ans=0;

  for(int i=1;i<=n;i++){ // loop form 1--->n

    // step 1 : get divisors for every number
    get_divisors(i);

    // step 2 : count how many prime in these divisors
    int counter=0;
    for(int j=0;j<v.size();j++){
      if(is_prime(v[j])){
        counter++;
      }
    }
    
    // step 3 : check if counter = 2

    if(counter==2) // if they were 2 numbers then
      ans++; // i will increase the answer by 1 

    v.clear(); // to empty the vector as the vector is global

  }

  cout << ans; 


  return 0; 
} 
