/* Find area of the Circle */

#include <stdio.h>
int main(){

    float pie = 3.14;
    float radius;
    printf("Enter radius : ");
    scanf("%f", &radius);

    float area = pie*radius*radius;
    printf("The area of Circle is  %f \n", area);

    return 0;
}