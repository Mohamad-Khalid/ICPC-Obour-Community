#include <iostream>

using namespace std;

int main(){


 	/******** Lecture 2 : LOOP *******/

 	/*
		we need loop when we want to repeat somthig.

		Any loop have (initial value) (condition) (increment or decrement) (body)

		the loop will work while the condition is true 
		and end when the condition is false.
	
		types of loop
			- for loop
			- while loop
			- do while loop
		
		in the body of the loop we can write anything we need 
		we can write loop inside a loop --> nested loop

		Avoid infinite loop (forget increment or decrement)

		we use (break) to end the loop and (continue) to end the current step but not end the loop


 	*/

	// print ICPC Obour Community 5 times
			// by using for
			for(int i = 0 ; i<5 ;i++){
				cout<<"ICPC Obour Community\n";
			}

			cout<<"________________________________\n";

			//by using while
			int i=0;
			while(i<5){
				cout<<"ICPC Obour Community\n";
				i++;
			}
			cout<<"________________________________\n";

	// show the numbers from 10 to 15
			for (int i = 10 ; i<=15 ;i++){
				cout << i <<"\n";
			}

	// take n numbers from the user and print their sum
			/*
				input :
				3
				5 8 7
				output : 20
			*/
			int n;
			cin >> n;

			int sum = 0; 

			for(int i = 0 ; i < n ; i++ ){
				int x;
				cin >> x;
				sum += x ;
			}

			cout << sum << endl;

	cout<<"________________________________\n";

	// break 
	for(int i = 0 ; i<10 ;i++){

		if(i==6){
			cout<<"the loop will end here \n";
			break;
		}
		cout << i << endl ;
	}

	cout<<"________________________________\n";

	// continue 
	for(int i = 0 ; i<10 ;i++){

		if(i==6){
			cout<<"this will skip the current step \n";
			continue;
		}
		cout << i << endl ;
	}


	return 0;
}
