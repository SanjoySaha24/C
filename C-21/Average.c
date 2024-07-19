#include <stdio.h>
int main(){

    float a;
    printf("Enter first no. :");
    scanf("%f", &a);
    float b;
    printf("Enter first no. :");
    scanf("%f", &b);

    float avg;
    avg = (a + b)/2;

    float dev;
    dev = (a-avg);

    float dev2;
     dev2 = (b-avg);

    printf("The Average is : %f \n",avg);

    printf("Deviation of two no. is %f \n", dev);
    printf("Deviation of two no. is %f \n", dev2);

    return 0;


}