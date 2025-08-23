#include <iostream>
using namespace std;
// function to swap two numbers
void swapNumbers(int &num1, int &num2) {
    if (num1 == num2) {
        cout << "Enter two different numbers" << endl;
    } else {
        int temp = num1;
        num1 = num2;
        num2 = temp;
        cout << "Your numbers after swapping: num1 = " 
             << num1 << " and num2 = " << num2 << endl;
    }
}
int main() {
    int num1, num2;

    // input your numbers
    cout << "Enter your numbers: ";
    cin >> num1 >> num2;

    // swap function call
    swapNumbers(num1, num2);

    return 0;
}



