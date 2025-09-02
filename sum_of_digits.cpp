#include <iostream>
using namespace std;

//funtion sum
void sum(int num){
	int sum = 0;
	while(num!=0){
		int rem = num % 10;
		sum += rem;
		num = num/10;
		}
	cout << "Sum of your number is " << sum << endl;
}

int main(){
	int num;

	//Accept input//
	cout << "Enter your number : ";
	cin >> num;

	//function call
	sum(num);
return 0;
}