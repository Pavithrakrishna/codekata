#include <stdio.h>
int main()
{
		int a[100]={2,1,3}; 
int i,j,n=3,temp;
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
}
n=(n+1)/2-1;
printf("%d",a[n]);
return 0;
}
