#include <stdio.h>

int len_arr(int *arr)
{
	int i;
	
	i = 0;
	while(*arr)
	{
		i++;
		arr++;
	}
	return(i);
}

int	binory_serch(int num, int *arr)
{
	int first;
	int last;
	int mid;

	first  = 0;
	last = len_arr(arr) - 1;
	while(first <= last)
		{
			mid = (first + last)/2;
			if (arr[mid] == num)
					return (mid);
			else if (arr[mid] > num)
				last = mid -1;			
			else
				first = mid +1;
		}
	return (0);
}

int main (void)
{
	int arr[] = {1,2,3,4,5,6,8,9};
	
	
	printf("%d",binory_serch(3,arr));
}
