#include <iostream>
using namespace std;

int main(){
 
	int side1,side2,side3;

	//enter the sides of the triangle
	cout << "Enter three sides of the triangle respectevely \n";
    	cin >> side1 >> side2 >> side3;

	//condition to check if triangle is valid
	if(side1+side2 > side3 && side1+side3 > side2 && side2+side3 > side1)
		cout << "\nThe traingle is valid !!" << endl;
	else
		cout << "\nThe sides are invalid !! " << endl;
	

return 0;
}