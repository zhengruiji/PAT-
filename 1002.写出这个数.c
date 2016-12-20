//总结：
//题目给定了自然数的范围显然long long的数据类型都不能满足
//scan()格式化输入 getchar()只能单个读取字符 gets()能够读取字符到数组，实则返回的是指针
//数字和汉字之间存在着联系，可以设置一个存放汉字的数组，将要转换的数字作为汉字数组的下标  
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
	int amount=0;//位数-1 
	char temp; 
	while((temp=getchar())!='\n')//可以用gets()函数代替返回值为指针交给nature数组 
	{
		nature[location]=temp;
		location++;
	}
	location-=1;//字符串长度的计算可以交给strlen(const char*str),长度不包括字符串末尾的0 
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
int calculateAmount(int sum)//计算sum的位数 
{
	int amount=0;
	while(sum/=10!=0)
	{
		sum/=10;
		amount++;
	}
	return amount;
}

