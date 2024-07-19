#include <stdio.h>
#include<math.h>
int fact(int);
double sum(int);
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The sum of the series is=%lf",sum(n));
}
int fact(int n){
    int i,f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
double sum(int n){
    int i;
    double s=0;
    for(i=1;i<=n;i++){
        s=s+(pow(i,i)/fact(i));
    }
    return s;
}