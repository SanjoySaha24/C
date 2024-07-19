#include<stdio.h>
#include<math.h>
int main() 
{
    int n,i;
    float s=0;

    printf("Enter the no. of element in Series = ");
    scanf("%d",&n);

  for(i=2;i<=n;i++){

        s=s+1/(pow(i,2));
    }
    printf("Sum = %lf",s);

    return 0;
}