#include<stdio.h>
int fibonacci(int num)
{    
    if(num == 0 || num == 1){
        return num;
    }
    else
    {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

int main(void)
{    
    int terms;
    printf("Enter the  terms: ");
    scanf("%d", &terms);       

    for(int n = 0; n < terms; n++){
        printf("%d ", fibonacci(n));
    }

    return 0; 
}