#include <stdio.h>
int main()
{
	int i,j,mat[3][3];
	printf("Enter elements of the matrix:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n mat[%d][%d] = ",i, j);
			scanf("%d", (*(mat + i)+j));
			
		}
	}
	
	printf("The elements of the matrix:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n mat[%d][%d] = ",i, j);
			printf("%d", *(*(mat + i)+j));
				
		}
	}
}
