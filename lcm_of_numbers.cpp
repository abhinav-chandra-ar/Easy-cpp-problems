#include <iostream>
using namespace std;

//LCM function def
int lcmnum(int a, int b) {
   	 for(int i = b; ; i++) {  
       		 if(i % a == 0 && i % b == 0) 
            		return i;          
    	}
}

int main() {
	int num1, num2;
        
	//accept input
	cout << "Enter smaller number: ";
    	cin >> num1;
    	cout << "Enter your bigger number: ";
    	cin >> num2;
   
	//function call 
	int lcm = lcmnum(num1, num2);

	//print output
    	cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm << endl;
    	return 0;
}
