//check whether a number is a palindrome.//
#include <stdio.h>
int main() 
{
    int n,i,a,revers = 0, remainder, ori;
    printf("enter an integer: ");
    scanf("%d",&n);
    ori = n;
    while (n != 0) 
    {
        remainder = n % 10;
        revers = revers * 10 + remainder;
        n = n / 10;
    }
    if (ori == revers)
    {
        printf("%d is a prime palindrome.",ori);
    }
    else
    {
        printf("%d is not a prime palindrome.",ori);
    }
    return 0;
}
