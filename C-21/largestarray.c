#include<stdio.h>
int main(){
    
 int Size, i, Largest;
  int a[10];
  printf("Enter size of array: ");
  scanf("%d",&Size);
  
  printf("Enter the no.s: ", Size);
  for(i=0; i<Size; i++){
     scanf("%d",&a[i]);
   }   
   Largest = a[0];
  for(i=1; i<Size; i++)
   {
    if(Largest<a[i])
     {
       Largest=a[i];
       }   
   }
   printf("\nLargest element in an Array = %d", Largest);
  return 0;
}