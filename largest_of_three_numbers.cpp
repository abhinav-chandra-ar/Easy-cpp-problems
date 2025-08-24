#include<iostream>
using namespace std;
int main(){
	
	int arr[3];
	int max=0;
	
	//accept input;
	cout << "Enter 3 numbers : \n" ;
	for(int i=0;i<3;i++){
	cin >> arr[i];
	}
	
	//find the largest number using loop
	for(int i=0;i<3;i++){
		if(max < arr[i]){
			max = arr[i];
			}
		}
		
	//output the result
	cout << "The largest numbeer is : " << max << endl; 
	return 0;
	}
	
