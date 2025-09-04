#include <iostream>
using namespace std;

//function call
int pow(int num, int exp){
	if(exp == 0)
		return 1;
	else
		return num * pow(num , exp-1);//recursive step
}

int main(){

	int num,exp;

//accept input 
	cout << "Enter your number : ";
 	cin >> num;
	cout << "Enter your exponent : ";
	cin >> exp;

//fuction call
	int res = pow(num ,exp);
	
	cout << "Your output is : " << res << endl;//print result

	return 0;
}
