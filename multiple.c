
#include <stdio.h>
int main()
{
  int n,i,temp=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      temp=n*i;
      printf("%d * %d = %d\n",n,i,temp);
  }
   return 0;
}
