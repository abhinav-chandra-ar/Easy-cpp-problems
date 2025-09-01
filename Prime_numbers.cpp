#include <iostream>
using namespace std;

//function to check prime
void prime(int num){
	int flag =0;
	for(int i = 1 ; i < num/2 ; i++){//for loop to find the number of factors
		if(num % i == 0){
			flag++;
		}
	}
	if(flag > 1)
		cout << "Your number is not prime !" << endl;
	else 
		cout << "Your number is  prime " << endl;
}

int main(){
	int num;
	
	//accept input 
	cout << "Enter your number :";
	cin >> num;

	prime(num);//function call
	return 0;
}