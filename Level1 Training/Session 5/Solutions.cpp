
  // some sum
    /*cin >> n >>a >>b;

    int sum_numbers =0 ;
    for(int i=1; i<= n;i++){

      int copy = i;
      int sum_digits=0;

      while(copy > 0){
        sum_digits += copy%10;
        copy /= 10;
      }

      if(sum_digits >= a && sum_digits <=b)
        sum_numbers += i;
    }

    cout << sum_numbers ;

*/
    // primes from 1 to n
    /*int n;
    cin >> n;
    for(int i=2;i<=n;i++){

      bool is_prime = true; 

      // check the number is prime or not
      for(int j =2;j<i ;j++){
        if(i % j ==0){
          is_prime = false;
          break;
        }
      }

      if(is_prime == true )
        cout << i <<" ";
    }
  */
  

 /* // sum odd
  int t;
  cin >>t;
  while(t--){
    int x,y;
    cin >> x >> y;
    int start = min(x,y);
    int end = max(x,y);
    int sum =0;
    for(int i = start+1 ; i<end ;i++){
      if(i%2 !=0 ){
        sum += i;
        // sum  = sum + i;
      }
    }

    cout << sum <<endl;

  }*/
