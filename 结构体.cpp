//#include <stdio.h> 
//#include <string.h>
//struct person
//{
//	char name[10];
//	int count;
//}leader[3]={"li",0,"sun",0,"chen",0};
//
//int main()
//{
//	char name_c[10];
//	int i,j;
//	printf("输入名字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%s",name_c);
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(name_c,leader[j].name ) == 0)
//			leader[j].count ++;
//		}
//	}
//	printf("结果如下：\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%5s:%d\n",leader[i].name ,leader[i].count );
//	}
//	return 0;
//}


//#include <stdio.h>
//#define n 5
//struct student
//{
//	int num;
//	char name[10];
//	float score[3];
//	float aver;
//}stu[n];
//
//int main()
//{
//	void input(struct student stu[]);
//	struct student max(struct student stu[]);
//	void print(struct student stud);
//	struct student *p=stu;
//	input(p);
//	print(max(p));
//	return 0;
//}
//void input (struct student stu[])
//{
//	int i;
//	float aver;
//	 
//	for(i=0;i<n;i++)
//	{
//		printf("请输入第%d位同学的信息：\n",i+1);
//		scanf("%d%s%f%f%f",&stu[i].num ,stu[i].name ,&stu[i].score [0],&stu[i].score [1],&stu[i].score [2]);
//		stu[i].aver =(stu[i].score [0]+stu[i].score [1]+stu[i].score [2])/3.0;
//	}
//}
//struct student max(struct student stu[])
//{
//	int i,m=0;
//	for(i=0;i<n;i++)
//	{
//		if(stu[i].aver >stu[m].aver )
//			m=i;
//	}
//	return stu[m];
//}
//void print(struct student stud)
//{
//	printf("成绩最高的信息如下：\n");
//	printf("学号：%d\n姓名：%s\n三门课成绩：%5.2f\t%5.2f\t%5.2f\n总平均分：%5.2f\n",
//	stud.num ,stud.name ,stud.score [0],stud.score [1],stud.score [2],stud.aver ); 
//}


//#include <stdio.h>
//struct student
//{
//	int num;
//	float score;
//	struct student *next;
//};
//int main()
//{
//	struct student a,b,c,*head,*p;
//	a.num =502;a.score =98;
//	b.num =555;b.score =97;
//	c.num =666;c.score =99;
//	head=&a;
//	a.next =&b;
//	b.next =&c;
//	c.next =NULL;
//	p=head;
//	for(;p != NULL;p=p->next )	
//	{
//		printf("%d\t%5.2f\n",p->num ,p->score );
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#define LEN sizeof(struct student)
//struct student
//{
//	long num;
//	float score;
//	struct student *next;
//	
//};
//
//int n;
//
//struct student *creat(void)
//{
//	struct student *head,*p1,*p2;
//	n=0;
//	p1=p2=(struct student*)malloc(LEN);
//	scanf("%ld,%f",&p1->num ,&p1->score );
//	head=NULL;
//	while(p1->num != 0)
//	{
//		n=n+1;
//		if(n==1)	head=p1;
//		else p2->next =p1;
//		p2=p1;
//		p1=(struct student *)malloc(LEN);
//		scanf("%ld,%f",&p1->num ,&p1->score );
//	}
//	p2->next =NULL;
//	return head;
//}
//
//int main(void)
//{
//	struct student *pt;
//	pt=creat();
//	printf("\nnum:%ld\nscore:%5.1f\n",pt->num ,pt->score );
//	return 0;
//}
//
//#include <stdio.h>
//struct 
//{
//	int num;
//	char name[10];
//	char sex;
//	char  job;
//	union
//	{
//		int clas;
//		char position[10];
//	}category;
//}person[2];
//int main()
//{
//	int i;
//	for(i=0;i<2;i++)
//	{
//		printf("请输入第%d位的号码，姓名，性别 和工作：\n",i+1);
//		scanf("%d %s %c %c",&person[i].num ,&person[i].name ,&person[i].sex ,&person[i].job );
//		if(person[i].job == 's')
//			scanf("%d",&person[i].category.clas );
//		else if(person[i].job == 't')
//			scanf("%s",person[i].category.position );
//		else 
//			printf("输入有误！！！\n");
//	}
//	printf("num\tname\tsex\tjob\tclas/position\n\n");
//	for(i=0;i<2;i++)
//	{
//		if(person[i].job == 's')
//		printf("%d\t%s\t%c\t%c\t%d\n",person[i].num ,person[i].name ,person[i].sex ,person[i].job ,person[i].category.clas  );
//		else
//		printf("%d\t%s\t%c\t%c\t%s\n",person[i].num ,person[i].name ,person[i].sex ,person[i].job ,person[i].category.position  );
//	}
//	return 0;
//}


#include <stdio.h>
int main(void)
{
	enum color{red,yellow,blue,white,black
	};
	enum color i,j,k,pri;
	int n,loop;
	n=0;
	for(i=red;i<=black;i++)
	{
		for(j=red;j<=black;j++)
		{
			if(i!=j)
			{
				for(k=red;k<=black;k++)
				{
					if((k!=i) && (k!=j))
					{
						n=n+1;
						printf("%-4d",n);
						for(loop=1;loop<=3;loop++)
						{
							switch(loop)
							{
								case 1:pri=i;break;
								case 2:pri=j;break;
								case 3:pri=k;break;
								default:break;
							}
						}
						
					}
				}
			}
		}
	}
	return 0;
}

































