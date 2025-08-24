#include <iostream>
using namespace std;

int main() {
    int year;

    //Accept input
    cout << "Enter your year in YYYY format: ";
    cin >> year;

    // Check and print output
    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                cout << "Your year " << year << " is a leap year." << endl;
            }
            else{
                cout << "Your year " << year << " is not a leap year." << endl;
            }
        } 
        else{
            cout << "Your year " << year << " is a leap year." << endl;
        }
    }
    else{
        cout << "Your year " << year << " is not a leap year." << endl;
    }

    return 0;
}
