#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int num;
	int flag;
}Test;

int main()
{
	int k;//待测试数的个数 
	scanf("%d",&k);
	Test *test=(Test*)malloc(sizeof(Test)*k);
	int *temp=(int*)malloc(sizeof(int)*k); 
	for(int i=0;i<k;i++)//循环读入k次并初始化 
	{
		scanf("%d",&(test[i].num));
		test[i].flag=0;//0为初始化表示没有被覆盖 
	}
	for(int i=0;i<k;i++)//制作test数组的副本temp 
	{
		temp[i]=test[i].num;
	}
	for(int i=0;i<k;i++)//根据flag循环遍历test数组 
	{
		if(test[i].flag==0)
		{
			while(temp[i]!=1)
			{
				if(temp[i]%2==0)//如果是偶数 
				{
					temp[i]=temp[i]/2;
					for(int j=0;j<k;j++)
					{
						if(test[j].num==temp[i])
						{
							test[j].flag=1;
							break;	
						}	
					} 
				}
				else
				{
					temp[i]=(3*temp[i]+1)/2;
					for(int j=0;j<k;j++)
					{
						if(test[j].num==temp[i])
						{
							test[j].flag=1;
							break;	
						}	
					} 
				}
			}
		}
	}
	int result[100];
	int j=0;
	for(int i=0;i<k;i++)
	{
		if(test[i].flag==0)
		{
			result[j++]=test[i].num;	
		}
	}
	int len=j;
	for(int i=1;i<len;i++)//选择排序，共进行len-1轮 
	{
		for(int j=0;j<len-i;j++)
		{
			if(result[j]>result[j+1])
			{
				int temp=result[j];
				result[j]=result[j+1];
				result[j+1]=temp;
			}
		}
	}
	printf("%d",result[j-1]); 
	for(int i=j-2;i>=0;i--)
	{
		printf(" %d",result[i]);
	}
	return 0;
} 
