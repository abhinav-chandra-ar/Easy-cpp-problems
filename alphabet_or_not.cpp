#include <iostream>
using namespace std;

int main() {
    char letter;

    // Accept input
    cout << "Enter your character: ";
    cin >> letter;

    // Check if it's an alphabet
    if((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')){
        cout << "Your character '" << letter << "' is an alphabet." << endl;
    }
    else{
        cout << "Your character '" << letter << "' is not an alphabet." << endl;
    }

    return 0;
}
