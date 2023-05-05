#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",&c);
	a=b;
	b=c;
	c=a;
	printf("\n after swapping: a=%d,b=%d,c=%d",a,b,c);
	return 0;
}
