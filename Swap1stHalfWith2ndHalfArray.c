#include <stdio.h>
#include <string.h>

void swap_first_second_half(int arr[], int n) 
{
	int temp, ptr1, ptr2;
	ptr1 = 0;				// pointer to first half
	ptr2 = (n + 1) / 2;		// pointer to second half

	while (ptr2 < n) 
   {
		temp = arr[ptr1];
		arr[ptr1] = arr[ptr2];
		arr[ptr2] = temp;
		++ptr1;
		++ptr2;
	}
}

int main() 
{
	int arr[10];
	int n, i;

	printf("\nEnter size of array: ");
	scanf("%d", &n);

	printf("Enter array elements: ");
	for (i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	printf("\nArray Before Swap: ");
	for (i = 0; i < n; ++i) 
		printf("%d ", arr[i]);

	// calling swap function to swap first and second half of arr
	swap_first_second_half(arr, n);

	printf("\nArray After Swap: ");
	for (i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}