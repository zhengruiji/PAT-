//�ܽ᣺
//getchar() �����scanf()�Ļس�����getchar()������̻������Ļس�
//goto��� label�������û������������Ͽ���� 
#include<stdio.h>
#include<string.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	//fflush(stdin)�˺���ֻ֧�ֲ��ֱ����� 
	getchar();//��ȥ���̻������Ļس� 
	int real[n]; 
	for(int i=0;i<n;i++)
	{
		char str[110];
		gets(str);
		int count=0;
		int getP=0;
		while(str[count]!='\0')
		{
			if(str[count]=='P')
			{
				getP=1;
				break;
			}
			if(str[count]!='A')
			{
				real[i]=0; 
				goto out; 
			}
			count++;
		}
		if(getP==0)
		{
			real[i]=0;
			goto out;	
		} 
		int Plocation=count;
		
		count++;
		int getT=0;
		while(str[count]!='\0')
		{
			if(str[count]=='T')
			{
				getT=1;
				break;
			}
			if(str[count]!='A')
			{
				real[i]=0;
				goto out; 
			}
			count++;
		}
		if(getT==0)
		{
			real[i]=0;
			goto out;	
		}
		int Tlocation=count;
		
		count++;
		while(str[count]!='\0')
        {
        	if(str[count]!='A')
        	{
        		real[i]=0;
        		goto out; 
			}
        	count++; 
		}
		
		int x=Plocation;
		int y=Tlocation-Plocation-1;
		int z=strlen(str)-(Tlocation+1);
		if(y==0)
		{
			real[i]=0;
			goto out; 
		}
		if(x*y!=z)
		{
			real[i]=0;
			goto out;	
		}
		if(x*y==z)
		{
			real[i]=1;
		}
		out:
		{} 
	}
	for(int i=0;i<n;i++)
	{
		if(real[i]==0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");	
		} 
	}
	return 0;	
} 
