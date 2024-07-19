#include<stdio.h>

void read_matrix(int mat[5][5], int, int);

void display_matrix(int mat[5][5], int, int);

int main()
{ 
	int row, col, mat[5][5];
 	printf("\n Enter the number of rows and columns of the matrix : ");
	scanf("%d %d", &row, &col);
 	read_matrix(mat, row, col);
 	display_matrix(mat,row,col);
 	return 0;
 
}
void read_matrix(int mat[5][5], int r, int c)
{ int i, j;
 	for(i=0;i<r;i++)
 	{ 
	 	for(j=0;j<c;j++)
 		{ 
		 	printf("\n mat[%d][%d] = ",i, j);
 			scanf("%d", &mat[i][j]);
 		}
 	}
}

void display_matrix(int mat[5][5], int r, int c)
{ 
	int i, j;
 	for(i=0;i<r;i++)
 	{ 
	 	printf("\n");
 		for(j=0;j<c;j++)
			printf("\t mat[%d][%d] = %d",i, j, mat[i][j]);
}
}
