#include<stdio.h>
int main() 
{
    int x;
    printf("Enter a number between 1-7\n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("The Day is Sunday");
        break;
    case 2:
        printf("The Day is Monday");
        break;
    case 3:
        printf("The Day is Tueaday");
        break;
    case 4:
        printf("The Day is Wednessday");
        break;
    case 5:
        printf("The Day is Thursday");
        break;
    case 6:
        printf("The Day is Friday");
        break;
    case 7:
        printf("The Day is Saturday");
        break;
    
    default:
        break;
    }

}