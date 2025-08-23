#include<iostream>
using namespace std;
int main(){
	int num,result;
	
	//Input number
	cout << "Enter your number :";
	cin >> num;
	
	//cube calculation
	result=num*num*num;
	
	//output the result
	cout << "The cube of your number is : " << result << endl;
	return 0;

}
