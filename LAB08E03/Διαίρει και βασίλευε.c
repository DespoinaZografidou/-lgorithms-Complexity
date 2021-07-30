#include <stdio.h>
#include <limits.h>

int P[]= {-2, -6, 7, -2, -3, 1, 5, -8};

int max (int a, int b)
{
    return a>b? a:b;
}

int max3 (int a, int b, int c)
{
   return max (max (a, b), c );
}

int divide (int l, int r)
{
    if( l == r)
        return P[l];
    int m = (l+r) / 2;

    return max3 (divide(l, m), divide(m+1, r), midSum (l, m, r));
}
int midSum( int l, int m, int r )
{
    int maxR = INT_MIN;
    int maxL = INT_MIN;
    int sum = 0;
    int i;

    for ( i=m+1; i<=r; i++)
    {
        sum += P[i];
        if ( sum > maxR )
            maxR = sum;
    }

    sum = 0;

    for ( i=m; i>=l; i--)
    {
        sum += P[i];
        if ( sum > maxL )
            maxL = sum;
    }

    sum = 0;
    return maxR + maxL;
}

int main()
{
    int x = divide ( 0, 7 );

    printf("%d", x);
}
