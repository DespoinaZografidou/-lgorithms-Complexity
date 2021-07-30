//Despoina zwgrafidou 321/2016041

#include<stdio.h>
#define SIZE 8

int A[]={-12,27,2,-17,5,81,18,23};
int C[SIZE];

void merge(int left,int middle,int right)
{
    int k=left;
    int i=left;
    int j=middle + 1;

    while(i <= middle && j <= right )
    {
        if (A[i]>=A[j])
        {
            C[k]=A[j];
            j++;
            k++;
        }

        else
        {
            C[k]=A[i];
            i++;
            k++;

        }

    }
    while (i<= middle)
    {
        C[k]=A[i];
        k++;
        i++;
    }

    while(j<= right)
    {
        C[k]=A[j];
        k++;
        j++;
    }

    i=0;

    for(k=left;k<=right;k++)
    {
        A[k]=C[k];
    }

}

void mergesort(int left ,int right)
{
    int middle=(left+right)/2;

    if(left>=right)
        return;

        mergesort(left,middle);
        mergesort(middle+1,right);
        merge(left,middle,right);
}

int main()
{
    mergesort(0,7);

    for(int k=0;k<8;k++)
    {
        printf("%d  ",A[k]);
    }
}
