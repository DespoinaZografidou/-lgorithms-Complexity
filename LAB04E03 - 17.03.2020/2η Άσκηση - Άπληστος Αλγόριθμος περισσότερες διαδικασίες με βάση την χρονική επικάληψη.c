//Despoina Zografidou 321/2016041
#include<stdio.h>

struct activity
{
    char a[5];
    int start;
    int finish;
};


void activitySelection(struct activity activities[],int n)
{
    int i,j;
    struct activity temp;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(activities[j].finish>activities[j+1].finish)
            {
                temp=activities[j];
                activities[j]=activities[j+1];
                activities[j+1]=temp;
            }
        }


    }
    printf("%10s %10s %10s","Activity","Start","Finish\n");
    printf("%10s %10d %10d ",activities[0].a,activities[0].start,activities[0].finish);
    i=0;
    printf("\n");

    for(j=1;j<n;j++)
    {
        if(activities[j].start>=activities[i].finish)
        {
             printf("%10s %10d %10d\n",activities[j].a,activities[j].start,activities[j].finish);
             i=j;
        }

    }
}

int main()
{
    struct activity activities[8]=
    {
        {"a1",1,3},
        {"a2",1,2},
        {"a3",0,1},
        {"a4",3,4},
        {"a5",4,6},
        {"a6",2,4},
        {"a7",4,5},
        {"a8",4,6}

    };
    int n=8;
    activitySelection(activities,n);
    return 0;
}
