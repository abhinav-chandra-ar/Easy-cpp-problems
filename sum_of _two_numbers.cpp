#include<iostream>
using namespace std;

int main()
{ 
	int num1,num2,sum;
	
	//input 2 numbers
	cout << "Enter first number : ";
	cin>>num1;
	cout << "Enter second number : ";
	cin>>num2;
	
	//calculation
	sum=num1+num2;
	
	//output
	cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
	return 0;
	
}
