/*****Array of Pointers ******/

#include <stdio.h>
int main()
{
  /*  int *ptr[10];
	int p=1, q=2, r=3, s=4, t=5;
	int i;
	
	ptr[0]=&p;
	ptr[1]=&q;
	ptr[2]=&r;
	ptr[3]=&s;
	ptr[4]=&t;
	
	printf("%d\n", *ptr[3]);
	/*for(i=0;i<5;i++)
		printf("%u  %u\n", ptr[i], (ptr+i));*/
		
	int arr1[]={1,2,3,4,5};
	int arr2[]={10,20,30,40,50};
	int arr3[]={100,200,300,400,500};
	
	int *parr[3]={arr1,arr2,arr3};
	int i;
	for(i=0; i<3; i++)
	{
		printf("\n %d", *parr[i]);
	}
	return 0;
}
