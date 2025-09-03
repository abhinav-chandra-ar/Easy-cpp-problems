#include <iostream>
using namespace std;

//function of Armstrong
int Armstrong(int num){
	int arm = 0;
	while(num!=0){
		int rem = num % 10;
		arm = arm + (rem*rem*rem);
		num = num /10;
		}
return arm;
}

void checkarm(int temp,int arm){
	if(arm == temp)
		cout << "Your number is armstrong\n";
	else 
		cout << "Your number is not armstrong\n" << endl;
}

int main(){
	int num,temp,arm;
	
	//accept input
	cout << "Enter your number : ";
	cin >> num ;
	
	temp = num;//aving variable

	//function call
	arm=Armstrong(num);
	checkarm(temp,arm);
	
	return 0;
}