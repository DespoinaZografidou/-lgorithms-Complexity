//Despoina Zografidou 321/2016041
#include<stdio.h>
void Quicksort(int table[],int start,int finish)
{
    int pivot,i,j,temp;
    if (start<finish)
    {
        pivot=start;
        i=start;
        j=finish;
        while(i<j)
        {
            while(table[i]<=table[pivot]&& i<finish)
                i++;
            while(table[j]>table[pivot])
                j--;
            if(i<j)
            {
                temp=table[i];
                table[i]=table[j];
                table[j]=temp;
            }
            temp=table[pivot];
            table[pivot]=table[j];
            table[j]=temp;
            Quicksort(table,start,j-1);
            Quicksort(table,j+1,finish);

        }
    }
}


int main()
{
    int table[9]= {10,8,2,9,5,12,25,13,19};
    Quicksort(table,0,8);
    int i;
    for(i=0;i<9;i++)
    {
      printf("%d\n",table[i]);
    }
    return 0;

}
