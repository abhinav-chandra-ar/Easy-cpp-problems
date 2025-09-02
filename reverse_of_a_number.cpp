#include <iostream>
using namespace std;

//funtion rev
void rev(int num){
	int rev = 0;
	while(num!=0){
		int rem = num % 10;
		rev = (rev * 10) + rem;
		num = num/10;
		}
	cout << "Reverse of your number is " << rev << endl;
}

int main(){
	int num;

	//Accept input//
	cout << "Enter your number : ";
	cin >> num;

	//function call
	rev(num);
return 0;
}