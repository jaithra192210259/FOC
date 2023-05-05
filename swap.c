#include<stdio.h>
int main()
{
	int a,b;
	printf(" enter value of a:");
	scanf("%d",&a);
	printf("enter value of b :");
	scanf("%d",&b);
	int temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping :a=%d,b=%d",a,b);
	return 0;
}
