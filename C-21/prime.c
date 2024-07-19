#include <stdio.h>

int main() { 
   int i, number;
   
   printf("Enter the number = ");    
    scanf("%d",&number);   

   int prime = 1;
   
   for(i = 2; i < number; i++) {
      if((number % i) == 0) {
         prime = 0;
      }
   }

   if (prime == 1)
      printf("%d is prime number.", number);
   else
      printf("%d is a composite number.", number);
   return 0;
}