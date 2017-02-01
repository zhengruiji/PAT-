#include<stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	int i=num/100;//百位 
	int j=num%100/10;//十位 
	int k=num%10;//个位
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
