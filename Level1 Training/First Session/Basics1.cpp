#include <iostream>
#include <iomanip> // look at line 78

using namespace std ;

int main () {

	// how to declare variables
	string name ;
	double var;

	// it's important to know the data type
	int x = 3000000000 ; // ovelflow
	cout << x << endl ; // strange number :)

	long long k =  3000000000 ;
	cout << k << endl; // correct number

	//--------------------------------------
	// 		Operators 
	// unary operators ++ or --
		int num = 10 ; 
		num++ ; //increase num by 1 --> num = num + 1 
		--num ; //decrease num by 1 --> num = num - 1

	// binary oprerators
		// Arethmatic Operators  + , - , / , * , %
		int num1 = 3 , num2 = 4 ;
		int result = num1 + num2 ;
		result =num1 % num2 ;  // the remainder of the division

		// Relational operators  > , < , >= , <= , == , !=
		cout << (num1 > num2 ) << endl ; // print 1 if true or print 0 if false
		cout << (num1 != num2 ) << endl ;

		// Logicla operators && , || , !
		// we use them in conditions 
		if(num1 > num2 && num1 > 0)
			cout << "it is true\n";
		else
			cout << "it is false \n"; 

		// Betwise Operators  & , |  , << , >> , ~ , ^
		// we will know about them later
		// simple example :
		cout << (num1 & num2 ) << endl ; // work on the level of the bits 

		// Assignment operators = , += , -= , *= , /= , %= 
		result += 10 ; 
		cout<<"New result = "<< result <<endl;

		//Ternary operators  (condition) ? ----- : ------ ;
		num1 >= num2 ? cout <<"num1 greater\n" : cout << "num2 greater\n";

	//-------------------------------------------------------------
		// take input from the user 
		/*
			we use cin >> varible name ; to take input
			example :  cin >> num1 ;
			Note : cin with string take it until the first space only 
			try this : 
				string w ;
				cin >> w ;  // let you enter : Mohamed Khalid
				w will store only : Mohamed
			to avoid this , use :  getline(cin , w) ; instead of cin 
			it stores all the line 
		*/

	//--------------------------------------------------------------
		// Casting : convert a data type to another data type 
		int num3 = 8 ;
		double num4 = 9.88773 ;
		cout << (int) num4 <<endl ; // convert num4 to int 
		char c = 'A' ; 
		cout << (int) c <<endl ;   // print the Ascii code of 'A'
	//-------------------------------------------------------------
		/* 
		to show a specific number of digits (n) after the decimal point 
		we use cout << fixed << setprecision(n) << variable ;
		and must include <iomanip> --> #include <iomanip>
		*/
		double area = 5.767867766 ;
		cout<<"area without using setprecision " << area <<endl; 
		cout<<"area after using setprecision   " <<  fixed << setprecision(10) << area <<endl;

	//-------------------------------------------------------------

		// if condition

		int j = 100 , p = 200 ;
		if( j < p ){
			cout <<"j is smaller \n";
		}
		else{
			cout <<"p is smaller \n" ;
		}

		// we can use if , else if , else 
		if( j > p ){
			cout << "first case \n";
		}
		else if(j==p){
			cout << "second case \n"; 
		}
		else{
			cout<<"third case \n";
		}

		// we can use many conditions 
		/*
			codition && condition  --> true if the two conditions were true 
			codition || condition  --> true if one of them was true 
		*/
		if( j >= p && j > 0  && p > 0){
			cout<<"OK \n" ;
		} 
		else{
			cout<<"Not Ok \n" ;
		}


	return 0;
}
