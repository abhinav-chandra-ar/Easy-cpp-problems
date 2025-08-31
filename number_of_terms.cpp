#include <iostream>
using namespace std;
int main(){
	
	int num ;
	int i=1;

	//Accept input 

	cout << "Enter the numer of terms : \n ";
	cin >> num;
	
	
	cout << "\n The numbers are : " << num << " is :";

	//for loop for output 
	while(i <= num){
		cout << i << endl;
		i++;
	 }
	
	return 0;
 }