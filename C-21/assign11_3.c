#include <stdio.h>

int main() {
	
	int i, j, sum[100], arr[5][3], sub_max[3], sub_ind[3];
	int sumTest=0;
	
	for (i=0; i<5; i++) {
		printf("Student %d: \n", i+1);
		for (j=0; j<3; j++) {
			if (j<2) {
				scanf("%d ", &arr[i][j]);
			}	else {
				scanf("%d", &arr[i][j]);
			}
		}
	}
	
	for (i=0; i<3; i++) {
		sub_max[i] = 0;
		for (j=0; j<5; j++) {
			if (sub_max[i] < arr[j][i]) {
				sub_max[i] = arr[j][i];
				sub_ind[i] = j+1;
			}
		}
		printf("\n Subject %d\n", i+1);
		printf("  Highest marks = %d, Which is scored by Student %d.\n", sub_max[i], sub_ind[i]);
	}
	
	
	return 0;
}
