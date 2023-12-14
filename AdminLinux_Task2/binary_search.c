#include <stdio.h>

int binary_search(int arr[], int size, int key)
{
	int high=size-1,low=0,mid;
	
	mid = low + (high-low)/2;

    while (low <= high)
	{
	mid = low + (high-low)/2;
	if (arr[mid] == key) 
	{
        return mid;
   	}

    if (arr[mid] < key) {
        low = mid + 1;
	}
        
	else 
	{
	   high = mid - 1;
    }
    }

    // If the target is not present in the array
    return -1;
}

void main(void)
{
	int arr[10]={1,4,7,9,13,21,37,40,48,50};
	
	int key=50, index=-1;

	index = binary_search(arr, 10 , key);

	if(index==-1)
	{
	  printf("Key was not found\n");
	}
	else
	{
	  printf("The number %d was found at index %d\n", key, index);
	}
}
