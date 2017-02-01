#include<stdio.h>
#include<math.h>
int isPrime(int i);

int main()
{
	int num;
	int count=0;
	int p1=2;
	int p2=0;
	scanf("%d",&num);
	for(int i=3;i<=num;i++)
	{
		if(isPrime(i)==1)//判断是否为素数 
		{
			p2=i;
			if(p2-p1==2)
			{
				count++;
			}
			p1=i;
		}
	}
	printf("%d",count);
	return 0;
}

int isPrime(int i)//判断是否为素数 
{
	int value=1;
	if(i<2)
	{
		value=0;
	}
	else
	{
		for(int j=2;j<=(int)sqrt(i);j++)
		{
			if(i%j==0)
			{
				value=0;
				break;
			}
		}
	} 
	return value;
}
