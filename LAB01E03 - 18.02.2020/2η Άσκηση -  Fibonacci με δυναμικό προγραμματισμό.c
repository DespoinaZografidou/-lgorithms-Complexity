//Δέσποινα Ζωγραφίδου 321/2016041
#include <stdio.h>
#define SIZE 100

int main()
{
    int fibonacci[SIZE];
    int i,n;

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    printf( "Give a number: ");
    scanf( "%d", &n );

    printf( "Fibonacci sequence is: "  );

    //printf( " %d %d",fibonacci[0],fibonacci[1]);
    for( i=2; i<n+1; i++ )
    {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        printf(" %d" ,fibonacci[i] );
    }

}
