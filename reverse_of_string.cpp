#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    
//Accept input
    cout << "Enter your name: ";
    cin >> name;   // takes single word input
    
    cout << "Reverse of your name is: ";
    int len = name.length();
    for (int i = len - 1; i >= 0; i--) {//for loop to print the reverse
        cout << name[i];
    }
    cout << endl;

    return 0;
}
