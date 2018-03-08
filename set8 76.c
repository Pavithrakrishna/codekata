
#include<stdio.h>
int main()
{ 
   int flag=0,i,n;
   printf("enter the number");
   scanf("%d",&n);
   for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
    {
      flag=1;
      break;
     }
     if(flag==1)
     {
     printf("the number is a composite number");
     }
     else
     {
     printf("the number is not a composite number");
     }
     return 0;
}
