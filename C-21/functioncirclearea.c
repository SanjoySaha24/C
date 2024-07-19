#include <stdio.h>

float areaOfcircle(float radiuscircle);

  int main() {
    float radius;
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);

    printf("Area of circle : %.2f", areaOfcircle(radius));
    printf("\n");

   return 0;
}

float areaOfcircle(float radiuscircle){
   float area_circle;
   area_circle = 3.14 * radiuscircle * radiuscircle;

   return area_circle;
}