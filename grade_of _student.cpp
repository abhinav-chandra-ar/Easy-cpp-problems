#include <iostream>
using namespace std;

int main(){
    int marks;

    //Accept input
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    //Check valid range
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered!" << endl;
    } 
    else {
        //Determine grade and output the result
        if(marks >= 90) {
            cout << "Grade: A+" << endl;
        } 
        else if(marks >= 80) {
            cout << "Grade: A" << endl;
        } 
        else if(marks >= 70) {
            cout << "Grade: B" << endl;
        } 
        else if(marks >= 60) {
            cout << "Grade: C" << endl;
        } 
        else if(marks >= 50) {
            cout << "Grade: D" << endl;
        } 
        else{
            cout << "Grade: F (Fail)" << endl;
        }
    }

    return 0;
}

