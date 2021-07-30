
//Despoina Zwgrafidou 321/2016041
#include<limits.h>
#include <stdio.h>

int A[]={-7,-3,3,4,-4,5,-1};

int MidSum(int left, int middle, int right);
int divide(int left, int right);
int max3(int a, int b, int c);

int max(int a , int b)
{
    return (a>=b?a:b);
}

int max3(int a, int b, int c)
{
    return max(a, max(b, c));
}

int divide(int left, int right)
{
    int middle;

    if(left==right)
        return A[left];

    middle=(left + right)/2;

    return max3(divide(left, middle), divide(middle+1, right), MidSum(left, middle, right));

}

int MidSum(int left, int middle, int right)
{
    int i;

    int LSum=INT_MIN, RSum=INT_MIN;
    int sum1=0, sum2=0;

    for(i=right; i>middle; i--)
    {
        sum1+=A[i];

        if(sum1>RSum)
            RSum=sum1;
    }

    for(i=left; i<=middle; i++)
    {
        sum2+=A[i];

        if(sum2>LSum)
            LSum=sum2;
    }

    return LSum +RSum;
}


int main()
{
    printf("%d",divide(0,6));
    return 0;
}
