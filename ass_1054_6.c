//compute the sum of digits of number. //
#include<stdio.h>
int main()
{
  int n,sum=0,digit;
  printf("Enter a number: ");
  scanf("%d",&n);
  for(;n>0;n=n/10)
  {
    digit=n%10;
    sum=sum+digit;
  }
  printf("sum of digits = %d\n",sum);
  return 0;
}
