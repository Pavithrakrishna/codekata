#include<stdio.h>
#include<math.h>
int main() 
{
    int n1,n2,sum=0,count=0,temp=0,temp1=0,i,rem=0;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<n2;i++)
    {
        temp=i;
        temp1=i;
        while(temp!=0)
        {
            count++;
            temp=temp/10;
        }
        while(temp1!=0)
        {
            rem=temp1%10;
            sum=sum+pow(rem,count);
            temp1=temp1/10;
        }
        if(sum==i)
        {
            printf("%d",sum);
        }
       sum=0;
       count=0;
    }
	return 0;
}
