#include<stdio.h>
void read(int a[],int x){
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
}

 int smallest(int a[], int x){
     int small = 0;
     for(int i=0;i<x;i++){
         if(a[small]>a[i]){
             small = i;
         }
     }
        return small;
 }

  int largest(int a[], int x){
     int large = 0;
     for(int i=0;i<x;i++){
         if(a[large]<a[i]){
             large = i;
         }
     }
        return large;
 }

 void interchange(int sml, int lrg, int a[]){
     int temp = a[sml];
     a[sml]=a[lrg];
     a[lrg]=temp;
 }

void display(int a[], int x){
     for(int i=0;i<x;i++){
         printf("  ' %d",a[i]);
     }
}

void main(){
    int n,small,large;
    printf("Enter no. of elements : ");
    scanf("%d",&n);

    int a[n];
    read(a,n);
    small = smallest(a,n);
    large = largest(a,n);
    interchange(small,large,a);
    display(a,n);
}
