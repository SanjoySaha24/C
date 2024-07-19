#include <stdio.h>
int main(){
    int a;
    printf("Enter value of a \n");
    scanf("%d", &a);
    int b;
    printf("Enter value of b \n");
    scanf("%d", &b);
    
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("Swapped num 1: %d \n", a);
    printf("Swapped num 2: %d \n", b);

    return 0;
    
}