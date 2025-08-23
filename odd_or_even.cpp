#include<iostream>
using namespace std;

//function to find odd or even
void OddOrEven(int num){
	if(num%2==0){
		cout<<"The number is even ";
	}
	else{
		cout << "The number is odd" <<endl;
		}
		}
		
int main(){
	int num;
	
	//input number
	cout << "Enter your number : ";
	cin >> num;
	
	//function call
	OddOrEven(num);
	
	return 0;
	
	}
