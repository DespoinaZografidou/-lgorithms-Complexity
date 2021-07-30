/*Για πολυπλοκότητα Ν 3 κάνω:
  for(i=0; i<N; i++)
    for(j=i; j<N; j++)
       for(k=i; k<=j; k++)
          sum += k;*/

#include <stdio.h>

int P[]= {-2, -6, 7, -2, -3, 1, 5, -8};

int main()
{
    int i, j;
    int N = 8;
    int sum = 0;
    int maxSum = 0;

    for( i=0; i<N; i++ )
    {
        sum=0;

        for( j=i; j<N; j++ )
        {
            sum += P[j];
            if ( sum > maxSum )
               maxSum = sum ;
        }
    }

    printf( "The largest sum is: %d", maxSum );
}
