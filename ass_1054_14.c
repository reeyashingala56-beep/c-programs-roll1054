//check whether a number is a perfect square.//
#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) 
    {
        printf("%d is not a perfect square (negative number).\n", n);
    }
    for (i = 0; i * i <= n; i++) 
    {
        if (i * i == n) 
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1) 
    {
        printf("%d is a perfect square.\n", n);
    } 
    else 
    {
        printf("%d is NOT a perfect square.\n", n);
    }
    return 0;
}
