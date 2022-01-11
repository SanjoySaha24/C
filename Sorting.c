// Write a C program (menu driven) to sort an array using the following sorting 
// algorithms:
// 1. Bubble Sort
// 2. Selection Sort
// 3. Insertion Sort

#include<stdio.h>
void bubble_sort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
    if(arr[j]>arr[j+1]){
    int temp=arr[j+1];
    arr[j+1]=arr[j];
    arr[j]=temp;
    }
  }
}
for(int i=0;i<n;i++){
    printf(" %d ",arr[i]);
     }
}
void selection_sort(int n,int arr[]){
for(int i=0;i<n-1;i++)
{
    int min=i;
    for(int j=i+1;j<n;j++){
    if(arr[j]<arr[min]){
 min=j;
}
}
if(min!=i){
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
}
}
for(int i=0;i<n;i++){
    printf(" %d ",arr[i]);
  }
}
void insertion_sort(int n,int arr[]){
int j=0;
    for(int i=1;i<n;i++){
        int temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
}
arr[j+1]=temp;
}
 for(int i=0;i<n;i++){
  printf(" %d ",arr[i]);
 }
}
int main(){
printf("Enter the size of array :: ");
int n=0;
scanf("%d",&n);

int arr[n];
 printf("\nEnter the elements of the array :: ");
 for(int i=0;i<n;i++){
 scanf("%d",&arr[i]);
 } 
int ch;
printf("\nEnter 1 for Bubble sort\nEnter 2 for selection sort\nEnter 3 for insertion sort");
printf("\nEnter your choice :: ");

scanf("%d",&ch);
switch(ch){
case 1:
bubble_sort(n,arr);
break;
case 2:
selection_sort(n,arr);
break;
case 3:
insertion_sort(n,arr);
break;
}
return 0;
}