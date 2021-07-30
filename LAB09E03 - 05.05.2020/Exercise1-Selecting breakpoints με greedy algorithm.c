//Despoina Zwgrafidou 321/2016041
//selecting breakpoint with greedy algorithm
#include<stdio.h>

int synartisi(int apost,int kalypto,int staseis[])
{
	int table[]={0,0,0,0,0};
	int i=0,dienisa=0,dp=kalypto,counter=0;
	
	if (staseis[0]>dp)
		return -1;
		
	dp=dp-staseis[0];
	
	while((dienisa<apost)&&(i<4))
	{
		dienisa=staseis[0];
		if((staseis[i+1]-staseis[i])>dp)
		{
			table[i]=1;
			counter++;
			dp=kalypto;		
		}
		
		dp=dp-(staseis[i+1]-staseis[i]);
		if(staseis[i+1]-staseis[i]>kalypto)
			return -1;
		i++;
	}
	
	dienisa=staseis[i];
	if (apost-staseis[i]>dp)
	{
		if (apost-staseis[i]>kalypto)
			return -1;
				
		table[i]=1;
		counter++;
	}
	
	for(i=0;i<5;i++)
		printf(" %d",table[i]);
		
	return counter;		
}

int main()
{
	int apost=600;
	int kalypto=200;
	int staseis[]={150,270,350,500,570};
	
	printf(" %d",synartisi(apost,kalypto,staseis));
}

