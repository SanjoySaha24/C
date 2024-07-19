#include<stdio.h>  
#include<math.h>  
void cal_area(float, float, float, float*); 
void read_data();  
int main(){  
    float  area , a, b, c;  
    read_data (&a,&b,&c);
    cal_area (a, b, c, &area);  
    printf("Area of Triangle is %0.2f\n", area);  
    return 0;  
}  
void cal_area(float x, float y, float z, float *A){  
    float S;  
    S = (x + y + z) / 2.0;  
  
    *A = sqrt(S * (S - x) * (S - y) * (S - z));  
}  
void read_data(float *a,float *b,float *c){  
    printf("Enter values of 3 sides of a Triangle.\n");  
    scanf("%f%f%f", a, b, c);  
}