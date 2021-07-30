//Δέσποινα Ζωγραφίδου 321/2016041
#include <stdio.h>
#define SIZE 3

int main()
{
    int F[SIZE];
    int i,n;


    F[0] = 0;
    F[1] = 1;

    printf( "Give a number: ");
    scanf( "%d", &n );

    printf( "Fibonacci sequence is: " );

    for( i=2; i<n+1; i++ )
    {
        F[i%3] = F[(i-1)%3] + F[(i-2)%3];
        printf( " %d ", F[i%3] );
    }

}
