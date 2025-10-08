//find the largest element in a 1D array.//
#include <stdio.h>
int main()
{
    int n, i, largest,arr[n];
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0]; 
    for(i = 1; i < n; i++) 
    {
        if(arr[i] > largest)
        {
            largest = arr[i];  
        }
    }
    printf("The largest element in the array is: %d\n", largest);
    return 0;
}
