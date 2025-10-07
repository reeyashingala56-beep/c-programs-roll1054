//concatenate two strings.//
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[50],str2[50];
  printf("Enter first string :");
  fgets(str1,,sizeof(str1),stdin);
  printf("Enter second string :");
  gets(str2,sizeof(str2),stdin);
  strcat(str1,str2);
  printf("After concatenation:%s \n",str1);
  return 0;
}
