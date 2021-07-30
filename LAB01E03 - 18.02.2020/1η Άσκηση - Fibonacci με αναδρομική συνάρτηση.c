//Δέσποινα Ζωγραφίδου 321/2016041
#include <stdio.h>

int F( int N);

int main()
{
    int i, n;

    printf( "Give a number: " );
    scanf( "%d", &n );

    printf( "Fibonacci sequence is: " );

    for(i=0;i<n+1;i++)
        printf(" %d", F(i));
}

int F (int N)
{
    if (N==0)
        return 0;
    if (N==1)
        return 1;
    return F(N-1)+F(N-2);
}
