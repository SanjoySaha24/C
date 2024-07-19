#include<stdio.h>    
void read_array(int arr[8][8], int m, int n)
{
	int i,j;
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j) {
            scanf("%d",*(arr+i)+j);
        }
}
void print_array(int crr[8][8], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
	    {
		printf("%d  ",*(*(crr+i)+j));
        }
        printf("\n");
    }
}
void calc_array(int arr[8][8], int brr[8][8], int crr[8][8], int m, int n, int o, int p)
{
	int i,j,k;
	for (i = 0; i < m; ++i) {
      for (j = 0; j < p; ++j) {
         *(*(crr+i)+j) = 0;
      }
   }
   for (i = 0; i < m; ++i) {
      for (j = 0; j < p; ++j) {
         for (k = 0; k < n; ++k) {
            *(*(crr+i)+j) += (*(*(arr+i)+k))* (*(*(brr+k)+j));
        }
    }
}
}
int main(){  
	int ar[8][8], br[8][8], cr[8][8], a, b, c, d; 
	printf("Enter the number of rows for first array:-\n");
	scanf("%d",&a);
	printf("Enter the number of columns for first array:-\n");
	scanf("%d",&b);
	printf("Enter the elements of first array:-\n");
	read_array(ar,a,b);
	printf("The first array is :-\n");
	print_array(ar,a,b);
	printf("Enter the number of rows for second array:-\n");
	scanf("%d",&c);
	printf("Enter the number of columns for second array:-\n");
	scanf("%d",&d);
	printf("Enter the elements of second array:-\n");
	read_array(br,c,d);	
	printf("The second array is :-\n");
	print_array(br,c,d);
	calc_array(ar,br,cr,a,b,c,d);
    printf("The multiplication of both the array elements are : \n");
	print_array(cr,a,d);
	return 0;
}
