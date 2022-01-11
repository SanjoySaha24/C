#include<stdio.h>
#define Max 5
int top=-1,arr[Max];
int Push();
int Pop();
int Peep();
int main()
{
	int i,n;
	do
	{
		printf("\n ENTER 1 FOR PUSH 2 FOR POP 3 FOR PEEP:");
		scanf("%d",&n);
		switch(n)
		{
		
			case 1: Push();
				break;
		    case 2: Pop();
				break;
			case 3: Peep();
				break;
		
	    }
	}while(n<=3);
	return 0;
}
int Push()
{
	if(top==(Max-1))
	{
		printf("\nStack overflow");
	}
	else if(top<(Max-1))
	{
	printf("\nEnter the element:");	
	scanf("%d",&arr[top+1]);
	top++;
	}
	return 0;
}
int Pop()
{
	if(top==-1)
	{
		printf("\nStack underflow");
		
	}
	else
	{
		top--;
	}
	return 0;
}
int Peep()
{
	int i;
	if(top==-1)
	{
		printf("\nStack is empty");
	}
	else
	{
	printf("\nStack elements are:");
	for(i=top;i>=0;i--)
	{
		printf("\n%d",arr[i]);
	}
    }
	return 0;
}
