#include<stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	int i=num/100;//��λ 
	int j=num%100/10;//ʮλ 
	int k=num%10;//��λ
	for(int t=1;t<=i;t++)
	{
		printf("B");
	}
	for(int t=1;t<=j;t++)
	{
		printf("S");
	}
	for(int t=1;t<=k;t++)
	{
		printf("%d",t);
	} 
}
