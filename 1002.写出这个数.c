//�ܽ᣺
//��Ŀ��������Ȼ���ķ�Χ��Ȼlong long���������Ͷ���������
//scan()��ʽ������ getchar()ֻ�ܵ�����ȡ�ַ� gets()�ܹ���ȡ�ַ������飬ʵ�򷵻ص���ָ��
//���ֺͺ���֮���������ϵ����������һ����ź��ֵ����飬��Ҫת����������Ϊ����������±�  
#include<stdio.h>
#include<math.h>
int calculate(char nature[],int location);
void write(int sum,int amount);
int calculateAmount(int sum);

int main()
{
	char nature[110];
	int location=0;
	int sum=0;
	int amount=0;//λ��-1 
	char temp; 
	while((temp=getchar())!='\n')//������gets()�������淵��ֵΪָ�뽻��nature���� 
	{
		nature[location]=temp;
		location++;
	}
	location-=1;//�ַ������ȵļ�����Խ���strlen(const char*str),���Ȳ������ַ���ĩβ��0 
	sum=calculate(nature,location);
	amount=calculateAmount(sum);
	write(sum,amount-1);
	return 0;
}

int calculate(char nature[],int location)
{
	int sum=0;
	for(;location>=0;location--)
	{
		sum+=(int)nature[location]-48;
	}
	return sum;
}
void write(int sum,int amount)
{
	while(amount!=0)
	{
		int temp=sum/pow(10,amount);
	    switch(temp)
		{
			case 0:printf("ling ");break;
			case 1:printf("yi ");break;
			case 2:printf("er ");break;
			case 3:printf("san ");break;
			case 4:printf("si ");break;
			case 5:printf("wu ");break;
			case 6:printf("liu ");break;
			case 7:printf("qi ");break;
			case 8:printf("ba ");break;
			case 9:printf("jiu ");break;
		}
		sum=sum%(int)pow(10,amount);
		amount--;
	}
	switch(sum)
	{
		case 0:printf("ling");break;
		case 1:printf("yi");break;
		case 2:printf("er");break;
		case 3:printf("san");break;
		case 4:printf("si");break;
		case 5:printf("wu");break;
		case 6:printf("liu");break;
		case 7:printf("qi");break;
		case 8:printf("ba");break;
		case 9:printf("jiu");break;
	}
}
int calculateAmount(int sum)//����sum��λ�� 
{
	int amount=0;
	while(sum/=10!=0)
	{
		sum/=10;
		amount++;
	}
	return amount;
}

