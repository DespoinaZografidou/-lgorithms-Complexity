//Despoina Zwgrafidou 321/2016041
//Diairei kai vasileue,metrhsh enalaggwn (paromoio me mergesotr)

#include<stdio.h>
#define size 10

int A[]={2,20,6,4,5};
int C[size];

int main()
{
	int count= divide(0,4);
	printf("count swap: %d\n",count);
	int k;
	for (k=0;k<5;k++)
		printf("%d\n", A[k]);
}

int divide(int left,int right)
{
	int mid;
	int count=0;
	if(left<right)
	{
		mid=(left+right)/2;
		count=divide(left,mid);
		count=divide(mid+1,right);
		count+=merge(left,mid+1,right);
	}
	
	return count;
}

int merge(int l,int m ,int r)
{
	int k=l;
	int i=l;
	int j=m+1;
	int counter=0;
	
	while(i<=m && j<=r)
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
	
	while(i<=m)
	{
		C[k]=A[i];
		k++;
		i++;
		counter++;	
	}
	
	while(j<=r)
	{
		C[k]=A[j];
		k++;
		j++;
		counter++;
	}	
	i=0;
	for(k=l;k<=r;k++)
	{
		A[k]=C[k];
		
	}
	
	return counter;
}
