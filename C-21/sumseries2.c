#include<stdio.h>
#include<math.h>
int main() 
{
    int n,i;

    printf("Enter the no. of element in Series = ");
    scanf("%d",&n);

    double s=0.0;

    for(i=1;i<=n;i++){

        s=s+((pow(i,i))/i);
    }

    printf("%lf",s);

    return 0;
}