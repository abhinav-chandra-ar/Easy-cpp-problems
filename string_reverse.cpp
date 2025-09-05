#include<iostream>
using namespace std;

int strlen(string str){
	int count =0;
	while(str[count]!= '\0'){
		count++;
	}
	return count;
}

int main(){
	string str;
	
	cout << "Enter your string :";
	getline(cin, str); 
	
 	int n = strlen(str);
	cout << "\n";
	cout << "The reverse of the string is : " ;
	for(int i = n ; i>=0 ; i--){
		cout << str[i];
	}
	cout << endl;
	return 0;
}