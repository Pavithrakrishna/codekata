#include<stdio.h>
int main()
{
  char str[100];
  int k,i;
  printf("Enter the string:");
  scanf("%s",&str);
  printf("\n Enter the limit:");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  printf("%c",str[i]);
  return 0;
}
