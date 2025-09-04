#include <iostream>
using namespace std;

//function to print right angled triangle  
void star(int row){
	for(int i =1 ; i<=row ; i++){
		for(int j=1 ; j<=i ; j++){
			cout << "*";
		}
		cout << "\n";
	}
}

int main(){

	int num;

	//accept input ;
	cout << "Enter number of rows for pattern : " ;
	cin >> num ;
	
	//function call
	star(num);
	
	return 0;
}