/*Write a program in c to perform addition, subtraction,
division and multiplication on two floating point
numbers. */

#include<stdio.h>
int main(){

    float x;
    printf("Enter the first no. : ");
    scanf("%f", &x);

    float y;
    printf("Enter the second no. : ");
    scanf("%f", &y);

    float add;
    float sub;
    float div;
    float multi;

    add = x+y;
    sub = x-y;
    div = x/y;
    multi = x * y;

    printf("The Addition is : %f \n",add);
    printf("The Substraction is : %f \n",sub);
    printf("The Division is : %f \n",div);
    printf("The Multiplication is : %f \n",multi);

    return 0;
}


