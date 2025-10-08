//find the largest of four numbers.//
#include <stdio.h>
int main()
{
    int a, b, c, d, largest;
    printf("Enter number1: ");
    scanf("%d", &a);
    printf("Enter number2: ");
    scanf("%d", &b);
    printf("Enter number3: ");
    scanf("%d", &c);
    printf("Enter number4: ");
    scanf("%d", &d);
    largest = a;
    if (b > largest)
    {
        largest = b;
    }
    if (c > largest)
    {
        largest = c;
    }
    if (d > largest)
    {
        largest = d;
    }
    printf("The largest number is: %d\n", largest);
    return 0;
}
