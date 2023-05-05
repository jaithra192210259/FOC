#include <stdio.h>
#include <math.h>
int OctalToDecimal(int num)
{
    int x = 0;
    int ans = 0;

    while (num >0)
    {
	
        int y = num % 10;

        num /= 10;

        ans += y * pow(8, x);
        ++x;
    }

    return ans;
}
int main()
{
    int num;
    printf("Enter Octal Number: ");
    scanf("%d", &num);
    printf("\n");
    printf("Decimal Number is : %d", OctalToDecimal(num));
    return 0;
}


