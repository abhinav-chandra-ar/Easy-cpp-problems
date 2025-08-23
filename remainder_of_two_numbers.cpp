#include <iostream>
using namespace std;

int main() {
    int num1, num2, rem;

    //input your numbers
    cout << "Enter your numerator: ";
    cin >> num1;
    
    cout << "Enter your denominator: ";
    cin >> num2;
    
    //check for zero denominator
    if (num2 == 0) {
        cout << "Division by zero is not allowed!" << endl;
    } else {
        //calculation
        rem = num1 % num2;
        
        // output result
        cout << "Remainder of " << num1 << " divided by " << num2 << " is " << rem << endl;
    }

    return 0;
}

