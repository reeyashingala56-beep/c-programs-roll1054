//print the first N odd number. //
#include<stdio.h>
int main()
{
  int n,i;
  printf("Enter any number :");
  scanf("%d",&n);
  printf("the first %d odd number are: \n",n);
  for(i=1;i<=n;i++)
  {
    printf("%d \n",2*i-1);
  }
  return 0;
}
