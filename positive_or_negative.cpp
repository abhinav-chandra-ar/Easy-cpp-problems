#include <iostream>
using namespace std;

int main() {
    int num;

    //input number
    cout << "Enter the number: ";
    cin >> num;

    //check number and print output
    if (num > 0) {
        cout << "Your number is positive!!" << endl;
    }
    else if (num < 0) {
        cout << "Your number is negative!!" << endl;
    }
    else {
        cout << "Your number is zero" << endl;
    }

    return 0;
}
