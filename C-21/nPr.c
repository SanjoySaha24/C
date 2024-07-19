#include<stdio.h>
int cal(int n){
   if (n <= 1)
      return 1;
return n*cal(n-1);
}
int nPr(int n, int r){
   return cal(n)/cal(n-r);
}
int main(){
   int n;
    printf("Enter value of n \n");
    scanf("%d", &n);
   int r;
    printf("Enter value of r \n");
    scanf("%d", &r);
    printf("value of %dP%d is %d", n, r, nPr(n, r));
   return 0;
}