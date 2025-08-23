#include<iostream>
using namespace std;
int main(){
	int num,product=1;
	
	//input number of terms
	cout<<"Enter number of terms : ";
	cin >> num;
	
	//calculation 
	for(int i=1; i<= num; i++){
		product=product*i;
		}
		
	//output the product
	cout << "The product of " << num << " natural numbers is : " << product << endl;
	return 0;
	}


