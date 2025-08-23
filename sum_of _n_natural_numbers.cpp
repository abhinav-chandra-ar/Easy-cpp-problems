#include<iostream>
using namespace std;
int main(){
	int num,sum=0;
	
	//input number of terms
	cout<<"Enter number of terms : ";
	cin >> num;
	
	//calculation and output
	for(int i=1; i<= num; i++){
		sum=sum+i;
		}
		
	//output the sum
	cout << "The sum of " << num << " natural numbers is : " << sum << endl;
	return 0;
	}

