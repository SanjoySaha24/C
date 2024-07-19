#include <stdio.h>
void read_array(int arr[8][8], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
	   {
		scanf("%d",*(arr+i)+j);
	   }
	}
}


void calc_array(int arr[8][8], int brr[8][8], int crr[8][8], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
	    {
		 *(*(crr+i)+j) = *(*(arr+i)+j)-*(*(brr+i)+j);
        }
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
int main()
{
	int ar[8][8], br[8][8], cr[8][8], a, b; 
	printf("Enter the number of rows for both the 2D array:-\n");
	scanf("%d",&a);
	printf("Enter the number of columns for both the 2D array:-\n");
	scanf("%d",&b);
	printf("Enter the elements of first array:-\n");
	read_array(ar,a,b);
	printf("The first array is :-\n");
	print_array(ar,a,b);
	printf("Enter the elements of second array:-\n");
	read_array(br,a,b);	
	printf("The second array is :-\n");
	print_array(br,a,b);
	calc_array(ar,br,cr,a,b);
    printf("The subtraction of both the array elements are : \n");
	print_array(cr,a,b);
	return 0;
}
