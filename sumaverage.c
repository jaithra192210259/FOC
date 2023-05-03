#include<stdio.h>

int main()
{
    int n, i;
    float sum = 0, avg, num;

    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("\nEnter %d elements\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &num);
        sum = sum + num;
    }
    avg = sum / n;
    printf("\nAverage of numbers is %f", avg);


}
