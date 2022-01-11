#include<stdio.h>
#include<stdlib.h>

int n;

int main(){
	int i, choice;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter the elements of the array:\n");
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	printf("\nThe algorithms to perform sorting: \n");
	printf("1. Quick Sort\n");
	printf("2. Merge Sort\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch(choice) {
		case 1:
			quickSort(arr, 0, n-1);
			break;
		case 2:
			mergeSort(arr, 0, n-1);
			break;
		default:
			printf("Invalid option.");
	}
		printf("\nThe sorted array is:\n");
	for(i=0; i<n;i++)
		printf("%d ", arr[i]);
	return 0;
}
int quickSort(int a[], int start, int end){
	if(start>=end)
	return;
	
	int i,pivot = a[end], pivotIndex = start;
	for(i=start; i<end; i++){
		if(a[i]<=pivot)
		{
			int temp = a[i];
			a[i] = a[pivotIndex];
			a[pivotIndex] = temp;
			
			pivotIndex++;
		}
	}
	int temp = a[end];
	a[end] = a[pivotIndex];
	a[pivotIndex] = temp;
	
	quickSort(a, start, pivotIndex-1);
	quickSort(a, pivotIndex+1, end);
	return 0;
}

int merge(int a[], int start, int mid, int end){
	int i=start,j=mid+1, temp[7],k=start;
	while(i<=mid && j<=end){
		
		if(a[i]<a[j]){
		temp[k]=a[i];
		i++;
		}
		
		else{
		temp[k]=a[j];
		j++;
		}
		k++;
	}
	
	if(i==mid+1){
		for(; j<=end; j++,k++)
		temp[k]=a[j];
	}
	else if(j==end+1){
		for(; i<=mid; i++,k++)
		temp[k]=a[i];
	}
	for(i=start; i<=end; i++)
	a[i] = temp[i];
	
	return 0;
}

int mergeSort(int a[], int start, int end){
	if(start>=end)
	return;
	
	int mid = (start+end)/2;
	mergeSort(a, start, mid);
	mergeSort(a, mid+1, end);
	
	merge(a, start, mid, end);
	return 0;
}

