#include <stdio.h>
int main() 
{
    int n,rev=0,temp=0;
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        rev=(rev*10)+temp;
        n=n/10;
    }
    n=rev;
    rev=0;
    temp=0;
    while(n!=0)
    {
        temp=n%10;
        if(temp%2==1)
        {
           printf("%d ",temp); 
        }
        rev=(rev*10)+temp;
        n=n/10;
    }
}
