#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter the value of n1:");
	scanf("%d",&n1);
	printf("enter the value of n2:");
	scanf("%d",&n2);
	if(n1>n2)
	{
	
	   printf("%d is a largest :",n1);
    }
	else if(n2>n1)
	{
	
	   printf("%d is a largest :",n2);
    }
     else
          printf("both are equal :");
	return 0;
	
}
