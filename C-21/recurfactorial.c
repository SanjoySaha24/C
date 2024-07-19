#include<stdio.h>
int factorial(int n);

int main(){
	int num;
	printf("\n Enter the number: ");
	scanf("%d", &num);
	
	printf("\n Factorial of %d = %d", num,factorial(num));
	return 0;
}
 int factorial(int n){
 	if(n==1) 
 		return 1;
 	return (n*factorial(n-1));
 }