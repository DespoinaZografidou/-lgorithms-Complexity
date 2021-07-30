//Despoina Zografidou 321/2016041
#include<stdio.h>

int poso=1273;
int coin[]={1,2,5,10,20,50,100,500};
int table[]={0,0,0,0,0,0,0,0};

int main()
{
    int i=8;
   while(poso>0)
   {
       i--;
       table[i]=poso/coin[i];
       poso=poso%coin[i];
   }
   printf("\nCOINS * NUMBER_OF_COINS\n");
   for(i=0;i<8;i++)
   {
    printf("%d     * ",coin[i]);
    printf("     %d \n",table[i]);
   }

   return 0;
}
