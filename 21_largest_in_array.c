#include <stdio.h>
int largest(int arr[], int num)
{
int i, max;
max = arr[0];
for (i = 1; i < num; i++)
if (arr[i] > max)
max = arr[i];
return max;
}
int main()
{
int arr[] = {1, 24, 15, 20, 8, -11, 30};
int n = sizeof(arr)/sizeof(arr[0]);
printf("Largest element of array is %d", largest(arr, n));
return 0;
}
