#include <stdio.h>

int main() {
	
	int n, i, j, sum[100];
	float avg[100], classAvg;
	int sumTest=0;
	
	printf("Enter no. of students: ");
	scanf("%d", &n);
	
	int arr[n][3];
	
	for (i=0; i<n; i++) {
		sum[i] = 0;
		printf("Student %d: \n", i+1);
		for (j=0; j<3; j++) {
			if (j<2) {
				scanf("%d ", &arr[i][j]);
				sum[i] = sum[i] + arr[i][j];
			}	else {
				scanf("%d", &arr[i][j]);
				sum[i] = sum[i] + arr[i][j];
			}
		}
		avg[i] = (float)sum[i]/3;
	}
	
	for (i=0; i<n; i++) {
		printf("Student %d marks: \n", i+1);
		for (j=0; j<3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
		printf("Student %d Total = %d\n", i+1, sum[i]);
		printf("Student %d Average = %0.2f\n", i+1, avg[i]);
	}
	
	for (i=0; i<n; i++) {
		sumTest = sumTest + avg[i];
	}
	
	classAvg = (float)sumTest/n;
	
	printf("\nThe class average is : %f", classAvg);
	
	return 0;
}
