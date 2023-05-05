#include<stdio.h>
int main()
{
	int limit,num,count,big;
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("enter %d numbers\n",limit);
	for(count=1;count<=limit;count++)
	{
		scanf("%d",&num);
		if(num>big|| count==1)
		{
			big = num;
		}
	}
	printf("biggest number is %d\n",big);
	return 0;
	
	
}
