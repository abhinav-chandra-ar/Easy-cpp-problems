#include <iostream>
using namespace std;
int main(){
	
	int num ,  n ;
	int i=1;

	//Accept input 

	cout << "Which number's multiplication table do you want ? \n ";
	cin >> num;
	cout << "\n Upto which term do you need the table ?";
	cin >> n;
	
	cout << "\n The multiplication table of " << num << " is :";

	//for loop for output 
	while(i <= n){
		cout << num <<" \n x " << i << " = " << num * i << endl;
		i++;
	 }
	
	return 0;
 }