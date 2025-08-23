#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	
	//Input numbers
	cout << "Enter your numbers :";
	cin >> num1;
	cin >> num2;
	
	//check and print output
	if(num1==num2)
		cout << "The numbers are equal";
		
	else  if(num1>num2)
		cout << "The number " << num2 << " is " << "smaller";
			
	else
		cout << "The number " << num1 << " is " << "smaller";
		
	return 0;

}
