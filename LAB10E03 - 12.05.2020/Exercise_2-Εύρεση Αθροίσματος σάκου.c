// 321/2016041, Despoina Zografidou
// Euresh auroismatos sakou
#include<stdio.h>


#include<stdio.h>
#include<stdbool.h>

bool synarthsh(int table[], int n, int sum)
{
    bool table2[n+1][sum+1];
    int i,j;
    for(i=0; i<=n; i++)
    {
        table2[i][0]=true;
    }
    for(i=1; i<=sum; i++)
    {
        table2[0][i]=false;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=sum; j++)
        {
            if(j<table[i-1])
            {
                table2[i][j]=table2[i-1][j];
            }
            if(j>=table[i-1])
            {
table2[i][j]=(table2[i-1][j]) || (table2[i-1][j-table[i-1]]);
            }
        }
    }
    return table2[n][sum];}


int main()
{
    int table[]= {2,3,7,15,11};
    int n=5;
    int sum=25;

    if(synarthsh(table,n,sum))
    {
        printf("Yparxei");
    }
    else
        printf("Den yparxei");

    return 0;
}

