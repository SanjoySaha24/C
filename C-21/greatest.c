#include <stdio.h>
int main() {
    double n1, n2, n3;
    printf("Enter three numbers - ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if(n1 >= n2 && n1 >= n3){
        printf("%lf is the largest no.", n1);
    }
     else if(n2 >= n3 && n2 >= n1){
        printf("%lf is the largest no.", n2);
    }
     else{
        printf("%lf is the largest no.", n3);
    }
    return 0;
}