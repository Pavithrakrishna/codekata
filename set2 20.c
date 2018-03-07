#include <stdio.h>
int main(void) {
	int num,i;
	scanf("%d",&num);
	for(i=1;i<=num*5;i++)
	{
		if(i%num==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
