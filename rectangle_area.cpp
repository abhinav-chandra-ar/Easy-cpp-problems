#include<iostream>
using namespace std;
int main(){
	float length,width;
	
	//input length and width
	cout << "Enter Length and width of your rectangle respectevely: ";
	cin >> length;
	cin >> width;
	
	//area calculate
	float area = length * width;
	
	//output result
	cout<< "Area  of rectangle of length " << length << " and " << width << " is : " << area << endl;
	return 0;
	
	}
