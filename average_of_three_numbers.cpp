#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // calculate average
    float average = (num1 + num2 + num3) / 3;

    // output result
    cout << "The average of " << num1 << ", " << num2 
         << " and " << num3 << " is: " << average << endl;

    return 0;
}

