#include<stdio.h>
struct student
{
	char name[11];
	char id[11];
	int score;
};
void getStudent(struct student *p);

int main()
{
	int n=0;
	scanf("%d",&n);
	struct student max;
	struct student min;
	for(int i=1;i<=n;i++)
	{
		struct student temp;
		getStudent(&temp);
		if(i==1)
		{
			max=temp;
			min=temp;
		}
		else
		{
			if(temp.score>max.score)
			{
				max=temp;
			}
			if(temp.score<min.score)
			{
				min=temp;
			}
		}
	}
	printf("%s %s\n",max.name,max.id);
	printf("%s %s\n",min.name,min.id);
	return 0;
}

void getStudent(struct student *p)
{
	scanf("%s",p->name);
	scanf("%s",p->id);
	scanf("%d",&(p->score));
}
