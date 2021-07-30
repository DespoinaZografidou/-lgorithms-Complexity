//Despoina Zografidou 321/2016041
#include<stdio.h>
struct Activity
{
    int s,e,v;
};
int max(int a,int b)
{
    return a>b?a:b;
}
int weightedActivity(int n,struct Activity a[])
{
    int i,j,x;
    int dp[n];
    if(n==0)
        return a[0].v;
    dp[0]=a[0].v;
    for(i=1; i<n; i++)
    {
        x=a[i].v;
        j=i-1;
        while(j>=0 && a[i].s < a[j].e)
        {
            j--;
        }
        if(j!=-1)
            x+=dp[j];

        dp[i]=max(x,dp[i-1]);
    }
    return dp[n-1];
}



int main()
{
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);
    struct Activity a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&a[i].s, &a[i].e, &a[i].v);
    }
    printf("%d",weightedActivity(n,a));
}
