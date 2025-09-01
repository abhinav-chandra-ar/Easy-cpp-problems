#include <iostream>
using namespace std;

// Recursive function
int fibonacci(int n) {
    if (n <= 1)
        return n;   
    return fibonacci(n-1) + fibonacci(n-2);  // Recursion
}

int main() {
    int n;

    //Accept input
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
    return 0;
}
