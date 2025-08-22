#include <iostream>
using namespace std;

int main() {
    float celsius;

    // input temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    //converter
    float fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // output result
    cout << celsius << " °C is equal to " << fahrenheit << " °F" << endl;

    return 0;
}

