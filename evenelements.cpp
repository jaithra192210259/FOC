#include<conio.h>
int main()
{
    int a[5], i;
    printf("Enter any 5 array elements: ");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    printf("\nAll Even Array elements are:\n");
    for(i=0; i<5; i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
