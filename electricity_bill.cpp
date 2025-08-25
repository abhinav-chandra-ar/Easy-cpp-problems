#include <iostream>
using namespace std;
int main() {
    int units;
    float bill = 0;

    //Input
    cout << "Enter total units consumed: ";
    cin >> units;

    //Calculate bill using slabs
    if(units <= 100){
        bill = units * 1.50f;
    } 
    else if(units <= 200){
        bill = (100 * 1.50f) + ((units - 100) * 2.50f);
    } 
    else if(units <= 500){
        bill = (100 * 1.50f) + (100 * 2.50f) + ((units - 200) * 4.00f);
    } 
    else{
        bill = (100 * 1.50f) + (100 * 2.50f) + (300 * 4.00f) + ((units - 500) * 6.00f);
    }

    //Output
    cout << "Electricity Bill = Rs. " << bill << endl;

    return 0;
}

