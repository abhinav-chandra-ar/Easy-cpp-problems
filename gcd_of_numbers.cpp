#include <iostream>
using namespace std;

//function for gcd 
int gcdnum(int a, int b){//for loop to finfdthe smallest value for i
	int gcd;
	for(int i=1 ; i< b ; i++){
		if(a % i == 0 && b % i == 0)
		 gcd = i;
	}
	return gcd;
}

int main(){
	int num1,num2,gcd;
	
	//accept input
	cout << "Enter smaller number :";
	cin >> num1;
	cout << "Enter your bigger number : ";
	cin >> num2;

	//function call
	gcd = gcdnum(num1,num2);

	
	//print output
	cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd << endl;
	return 0;
}