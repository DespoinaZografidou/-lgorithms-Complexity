//Despoina Zografidou 321/2016041
#include<stdio.h>

int n = 5;

int sunartisi ( int neos[], int j)
{
    int i;
    int flag=0;

    for(i=0; i<n; i++)
    {
        if(neos[i]==j)
            flag++;
    }
    if (flag==0)
        return 1;
    else
        return 0;
}

int main ()
{
    int kerdos[]= {10,1,20,15,5};
    int dead[]= {1,1,2,2,3};
    int neos[]= {0,0,0,0,0};
    int j,i;

    for(i=0; i<5; i++)
    {
        for(j=dead[i]; i>0; i--)
        {
            if( sunartisi(neos,j)==1)
                neos[i]=j;
        }
    }

    for(i=0; i<5; i++)
    {
        printf("%d",neos[i]);
    }

}
