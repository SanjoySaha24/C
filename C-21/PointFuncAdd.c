#include <stdio.h>
void funcsum(int *a, int *b, int *c, int *sum){
    *sum = *a + *b + *c;
}
int main()
{
    int first, second, third;
       int sum;

    printf("Enter the no. \n");
    scanf("%d", &first);

    printf("Enter the no. \n");
    scanf("%d", &second);

    printf("Enter the no. \n");
    scanf("%d",&third);
    
    funcsum(&first,&second,&third,&sum);
    
    printf("Sum of entered numbers = %d\n",sum);
    return 0;
}