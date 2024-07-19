
#include<stdio.h>
int main() 
{
    int value;
    printf("Enter a value between 1-10\n");
    scanf("%d", &value);

    switch (value)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
           printf("Number is odd");
           break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
           printf("Number is even");
           break;
        
        default:
           break;
    }
    
}