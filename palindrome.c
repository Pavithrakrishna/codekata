#include <stdio.h>
int main(void) 
{
	int num,rem,temp,rev=0;
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
	rem=num%10;
            rev=rev*10+rem;
            num=num/10;
	}
	if(rev==temp)
	printf("yes");
	else
	printf("no");
	return 0;
}
