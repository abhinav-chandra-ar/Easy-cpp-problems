#include <iostream>
using namespace std;

//factorial function 
void fact(int num){

	int fact = 1;
	for(int i = 1; i<=num ; i++){
		fact = fact * i;

		}

	cout<< "Factorial of your number is " << fact << endl; //Print result
}


int main() {

	int num;
	
	//enter input 
	cout << " Enter Your Number : ";
	cin >> num ;
	
	fact(num);//function call

return 0;
}

