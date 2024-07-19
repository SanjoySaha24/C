#include<stdio.h>  
void swap(int, int);  
int main()  
{  
    int a, b;  
    printf("Enter values for a and b = ");  
    scanf("%d%d", &a, &b);  
  
    printf("Before swapping: a = %d and b = %d", a, b);  
    swap(a, b);  
    return 0;  
}  
void swap(int x, int y)  
{  
    int temp;  
    temp = x;  
    x = y;  
    y = temp;  
    printf("After swapping: a = %d and b = %d", x, y);  
}