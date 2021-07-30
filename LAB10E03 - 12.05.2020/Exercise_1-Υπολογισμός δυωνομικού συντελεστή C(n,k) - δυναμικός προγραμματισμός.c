// 321/2016041, Despoina Zografidou
//Ypologismos dionumikou suntelesth C(n,k) -dunamikos programmatismos

#include<stdio.h>

int synartisi(int n,int k)
{
	if ((k==0)||(k==1))
		return 1;
	return synartisi(n-1,k)+ synartisi(n-1,k-1);
}

int main()
{
	int n,k;
	do
	{
		printf("Dwse mou 2 arithmous : ");
		scanf("%d %d",&n,&k);
	}while(n<k);
	
	printf("%d", synartisi(n,k));
}
