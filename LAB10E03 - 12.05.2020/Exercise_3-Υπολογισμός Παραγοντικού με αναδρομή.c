// 321/2016041, Despoina Zografidou
// Ypologismos paragwntikou me anadromh
#include<stdio.h>

int Paragwntiko (int n)
{
	if(n==0)
		return 1;
	if (n==1)
		return 1;
	else
		return n*Paragwntiko(n-1);	
}

int main()
{
	int n;
	int solution;
	printf("Give me an integer: " );
	scanf("%d",&n);
	solution=Paragwntiko(n);
	printf("%d",solution);
}
