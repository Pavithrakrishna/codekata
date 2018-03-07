#include<stdio.h>
void main()
{
    int i,n,count=0;
    printf("\n Enter the number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%2==0)
        {
            printf("\n Not Prime");
            
        }
        else
        {
            printf("\n Prime");
        }
    }
}
