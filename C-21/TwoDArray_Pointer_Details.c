#include <stdio.h>

int main() {
    
   int arr[4][3]={{1,2,3},{4, 5,6},{7,8,9},{10,11,12}};
   
	int (*ptr)[3];
	ptr = arr;
	
   int i,j, m=4, n=3;
   for(i=0;i<m;i++)
   {
   		//printf("\n");
    	for(j=0;j<n;j++)
    	{    // printf("\n\n Address= %u %u %u", arr, (arr+i), *(arr+i));
          	printf("\n value = %d  %d  %d", *(arr+i), *(*(arr+i)+j), *((arr+i)+j));
		  	

    	}
	}
  
    return 0;
}
