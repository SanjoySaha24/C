#include<stdio.h>
int main(){
  int i,n;
  printf("Enter size of array: ");
  scanf("%d",&n);

  int arr[n];
  printf("Enter the elements: ");

  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);

  int largest = arr[0];
  int second = arr[1];

  for(i=1;i<n;i++){
      if(arr[i]>largest){
          second = largest;
          largest = arr[i];
      }
  }
  printf("Second largest no. is : %d",second);
}
