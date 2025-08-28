#include <iostream>
using namespace std;

int main(){
	
	int num,sum=0;
	cout << "Please enter your number : ";
	cin >> num;
	
	//loop to find all factors of the numbers
	for(int i = 1; i<num ; i++){
		if(num % i  == 0){
			sum = sum + i;
			}
		}
	
	//if condition to check if your number is a perfect nnumber
	if(num == sum)
		cout << "Your number " << num << " is a perfect number " << endl;
	else
		cout << "your number " << num << " is not a perfect number " << endl;
	return 0;
}