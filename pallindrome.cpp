#include <iostream>
using namespace std;

int main() {
    int num, rem, rev = 0, temp;
    cout << "Enter your number : ";
    cin >> num;
    temp = num;//to backup the number

    //while loop to reverse the number
    while (num > 0){
        rem = num % 10;       
        rev = rev * 10 + rem; 
        num = num / 10;  
	}     

    // if condition to check if palindrome or not
    if (temp == rev)
        cout << "The number " << temp << " is a palindrome !!" << endl;
    else
        cout << "The number " << temp << " is not a palindrome" << endl;

    return 0;
}
