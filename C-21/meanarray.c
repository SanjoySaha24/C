#include <stdio.h>
int main(){

int n, i , sum = 0;
float  mean = 0 ;
printf("Enter size for array -\n");
scanf("%d",&n);
int arr[n];
printf("Enter the no.: ");

for (  i = 0 ; i < n ; i++){
scanf("%d", &arr[i]);
sum = sum + arr[i];
}

mean = sum/n ;
printf("The mean is: %.2f ",mean);
return 0;
}