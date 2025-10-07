// print first N multiples of a number.//
#include<stdio.h>
int main()
{
 int n,num,i;
 printf("Enter a number :");
 scanf("%d",&num);
 printf("Enter N(how many multiples): ");
 scanf("%d",&n);
 printf("first %d multiples of %d are : \n",n,num);
 for(i=0;i<=n;i++)
 {
  printf("%d \n",num*i);
 }
  return 0;
}
