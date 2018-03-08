#include<stdio.h>
int main()
{
int a,i,n,count=0;
scanf("%d",&n);
while(n>0)
{
    a=n%10;
    count=count+1;
    n=n/10;
}
printf("%d",count);
return 0;
}
