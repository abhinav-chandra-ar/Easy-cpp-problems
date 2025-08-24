#include<iostream>
int main(){
	
	int num;
	
	//accept input
	printf("Enter your number : ");
	scanf("%d", &num);
	
	//calculate and output the result
	if(num%5==0 && num%11==0){
		printf("The number %d is divisible by both 5 and 11 " ,num);
	}
	else if(num%5==0){
		printf("The number %d is divisible by 5 and not by 11", num);
		}
	else if(num%11==0){
		printf("The number %d is divisible by 11 and not by 5", num);
		}
	else {
		printf("The number %d is  not divisbile by neither 5 or 11",num);
		}
		
	return 0;
}
