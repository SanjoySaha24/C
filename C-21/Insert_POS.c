#include <stdio.h>
#include <conio.h>

int main()
{
	int i, n, pos, num, arr[10];
	printf("\n Enter number of elements in array: ");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		printf("\n Enter the values:");
		scanf("%d", &arr[i]);
	}

	printf("\n Enter the number to be inserted: ");
	scanf("%d", &num);
	printf("\n Enter the Element no: ");
	scanf("%d", &pos);

	for(i=n-1;i>=pos;i--)
	{
			arr[i+1]=arr[i];
	}
	arr[pos]=num;
	n++;

	printf("\n The array after insertion of %d is: ", num);
	for(i=0;i<n;i++)
		printf("\n Arr[%d]=%d",i,arr[i]);
	getch();
	return 0;
}
