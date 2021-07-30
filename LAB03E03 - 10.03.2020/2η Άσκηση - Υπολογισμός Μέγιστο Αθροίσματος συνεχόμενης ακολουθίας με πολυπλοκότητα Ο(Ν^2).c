
//Despoina Zwgrafidou 321/2016041
#include<limits.h>
#include<stdio.h>

#define N 7

int A[]= {-7,-3,3,4,-4,5,-1};

int main()
{
    int i,j,n,max=INT_MIN,sum=0;

    for(i=0; i<N; i++)
    {
        sum=0;

        for(j=i; j<N; j++)
        {
            sum+=A[j];

            if (sum>max)
                max=sum;
        }
    }
    printf("%d",max);
}
