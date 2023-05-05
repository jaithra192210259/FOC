#include <stdlib.h>
#include <stdio.h>
#include <math.h>

const int nMaxTerms=20;
factorials[nMaxTerms];

double factorial(int n)
{
    if (n==1)
        return 1;
    else
        return (double)n * factorial(n - 1.0);
}

void precalcFactorials()
{
    for (int i=1; i<nMaxTerms+1; i++)
    {
        factorials[i-1] = factorial(i);
    }
}

/*
    cos(x) = 1 - (x^2)/2! + (x^4)/4! - (x^6)/6! .......
*/
double taylorCos(double rads)
{
    double result = 1.0;
    for (int curTerm=1; curTerm<=(nMaxTerms/2)-1; curTerm++)
    {
        double curTermValue = pow(rads, (curTerm*2) );
        curTermValue /= factorials[ (curTerm*2) - 1 ];
        if (curTerm & 0x01)
            result -= curTermValue;
        else
            result += curTermValue;
    }
    return result;
}

int main()
{
    precalcFactorials();
    printf("Math cos(0.5) = %f\n", cos(0.5));
    printf("taylorCos(0.5) = %f\n", taylorCos(0.5));

    return 0;
}
