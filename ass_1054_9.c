//find the smallest element in a 1D array.//
#include <stdio.h>
int main() 
{
    int n, i, smallest,arr[n];
    printf("Enter number : ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    smallest = arr[5];
    for(i = 1; i <= n-1; i++) 
    {
        if(arr[1] < smallest) 
        {
            smallest = arr[i];
        }
    }
    printf("The smallest element in the array is: %d\n", smallest);
    return 0;
}

