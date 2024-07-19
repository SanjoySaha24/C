#include<stdio.h>
int main(){
  int Size, i, Smallest, Position;
  int a[10];
  
  printf("Please Enter the size of an array : ");
  scanf("%d",&Size);

  printf("Enter elements of an array: \n", Size);
  for(i=0; i<Size; i++)
   {
   	 scanf("%d",&a[i]);
   }   
  Smallest = a[0];
  for(i=1; i<Size; i++){
    if(Smallest > a[i]){
       Smallest = a[i];
       Position = i;
	 }   
   }
  printf("Smallest element : %d\n", Smallest);
  printf("position of Smallest element = %d", Position);
  
  return 0;
}