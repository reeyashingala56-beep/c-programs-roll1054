//compute the GCD of two number.//
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD is: %d\n", a);
    return 0;
}
