#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest;

    //input values
    cout << "Enter Principal amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest (in %): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    //Simple Interest calculation
    simpleInterest = (principal * rate * time) / 100;

    //output result
    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}
