#include <stdio.h>
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
  printf("%d ",*(*(crr+i)+j));
        }
        printf("\n");
    }
}
void trans_array(int crr[8][8], int trr[8][8], int m, int n)
{
 int i,j;
 for(i=0; i<m; i++)
 {
  for(j=0; j<n; j++)
     {
  *(*(trr+j)+i) = *(*(crr+i)+j);
        }
    }
}
int main() {
    int a[8][8], transpose[8][8], r, c;
    printf("Enter rows and columns:-\n");
    scanf("%d\n%d", &r, &c);
    printf("Enter matrix elements:\n");
    read_array(a,r,c);
    printf("The original matrix is:-\n");
    print_array(a,r,c);
    trans_array(a,transpose,r,c);
    printf("The transposed matrix is:-\n");
    print_array(transpose,r,c);
    return 0;
}