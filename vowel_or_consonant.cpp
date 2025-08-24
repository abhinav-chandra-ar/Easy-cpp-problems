#include <iostream>
using namespace std;
int main() {
    char ch;
    char vowels[] = {'a','e','i','o','u','A','E','I','O','U'};
    bool isVowel = false;

    // input character
    cout << "Enter an alphabet: ";
    cin >> ch;

    //check using array
    forint i = 0; i < 10; i++) {
        if(ch == vowels[i]) {
            isVowel = true;
            break;
        }
    }

    //output result
    if(isVowel) {
        cout << ch << " is a vowel." << endl;
    }else{
        cout << ch << " is not an alphabet!" << endl;
    }

    return 0;
}
