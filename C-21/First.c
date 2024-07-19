/* 
1. Write a program in c to perform addition, subtraction,
integer division, multiplication and modulo division on
two integer numbers.*/

#include<stdio.h>
int main(){
    int x;
    printf("Enter first no. : ");
    scanf("%d", &x);

    int y;
    printf("Enter second no. : ");
    scanf("%d", &y);

    int add;
    int sub;
    int multi;
    int div;
    int modulo;

    add = x + y;
    sub = x - y;
    multi = x * y;
    div = x / y;
    modulo = x % y;

    printf("The Addition is : %d \n", add);
    printf("The Substraction is : %d \n", sub);
    printf("The Multiplication is : %d \n", multi);
    printf("The Division is : %d \n", div);
    printf("The Modulo division is : %d \n", modulo );

    return 0;
}
