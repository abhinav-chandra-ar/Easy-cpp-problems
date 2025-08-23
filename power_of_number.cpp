#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int base, exponent;

    //input base and exponent
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    //calculate power
    double result = pow(base, exponent);

    //output result
    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}

