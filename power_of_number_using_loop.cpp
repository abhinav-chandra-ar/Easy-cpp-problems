#include <iostream>
#include <cmath> 
using namespace std;

int main(){
    int base, exponent;
    double result =1;

    //input base and exponent
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    
    //copying exponent
    int exp=exponent;

    //calculate power
    while(exponent!=0){
		result *= base;
		exponent--;
		}

    // output result
    cout << base << " raised to the power " << exp << " is: " << result << endl;

    return 0;
}
