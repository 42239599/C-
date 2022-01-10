//#include <stdio.h> 
//#include <string.h>
//struct person
//{
//	char name[20];
//	int count;
// } leader[3]={"li",0,"chen",0,"sun",0};
//int main()
//{
//	int i,j;
//	char name_leader[20];
//	printf("请输入投票情况：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%s",name_leader);
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(leader[j].name ,name_leader)==0)
//			leader[j].count ++;
//		}
//	}
//	printf("得票如下：\n");
//	for(j=0;j<3;j++)
//	{
//		printf("%5s:%d\n",leader[j].name ,leader[j].count );
//	}
//	return 0;
//}

//#include <stdio.h>
//struct student
//{
//	char num[10];
//	char name[20];
//	float score;
//}stu[100];
//int main()
//{
//	int i,j,k,n;
//	struct student t;
//	printf("请输入学生个数：\n");
//	scanf("%d",&n);
//	printf("请输入学生信息：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("第%d位学生的学号、名字和成绩：\n",i+1);
//		scanf("%s %s %f",stu[i].num ,stu[i].name ,&stu[i].score );
//	}
//	for(i=0;i<n-1;i++)
//	{
//		k=i;
//		for(j=i+1;j<n;j++)
//		{
//			if(stu[i].score<stu[j].score)	
//			{
//				k=j;
//				t=stu[i];
//				stu[i] =stu[k];
//				stu[k] =t; 
//			}
//		}
//	}
//	printf("结果如下：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%s\t%s\t%5.2f\n",stu[i].num ,stu[i].name ,stu[i].score );
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct stu
//{
//	char num[5];
//	char name[10];
//	float score;
//}student;
//int main()
//{
//	struct stu *p;
//	p=&student;
//	strcpy(student.num,"006");
//	strcpy(student.name ,"lihua");
//	student.score =98;
//	printf("%s\t%s\t%5.2f\n",student.num ,student.name ,student.score );
//	printf("%s\t%s\t%5.2f\n",p->num ,p->name ,(*p).score);
//	return 0;
//}

////指向结构体数组的指针
////有3个学生的信息，放在结构体数组中，要求输出全部学生的信息
//#include <stdio.h> 
//struct stu		//声明结构体类型struct stu 
//{
//	char num[9];
//	char name[20];
//	char sex;
//	int age;
//}//定义结构体变量并进行初始化 
//student[3]={{"006","liming",'M',23},{"007","sudaqiang",'M',75},{"009","lihua",'M',18}};
//int main()
//{
//	struct stu *p;		//定义指向struct stu结构体变量的指针变量 
//	p=student;
//	for(;p<student+3;p++)
//	{
//		printf("%s\t%s\t%c\t%d\n",p->num ,p->name ,p->sex ,p->age );
//	}
//	return 0;
//}

////用结构体变量和结构体变量的指针做函数参数
////有n个结构体变量，内含学生学号，姓名和3门课程成绩，要求输出平均成绩最高的学生信息 
//#include <stdio.h> 
//#define n 3		//学生数为3 
//struct student	//建立结构体类型struct student 
//{
//	char num[6];	//学号 
//	char name[10];	//姓名 
//	float score[3];	//	三门成绩 
//	float aver;		//平均分 
//};
//int main()
//{
//	void input(struct student stu[]);		//函数声明 
//	struct student max(struct student stu[]);//函数声明 
//	void print(struct student stu);			//函数声明 
//	struct student stu[n],*p=stu;	//定义结构体数组和指针 
//	input(p);		//调用input函数 
//	print(max(p));	//调用print函数，以max函数的返回值作为实参 
//	return 0;
//}
//void input(struct student stu[])	//定义input函数 
//{
//	int i;
//	printf("请输入各学生的信息：学号、姓名、三门成绩：\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%s %s %f %f %f",stu[i].num,stu[i].name,
//		&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);//输入数据 
//		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;//求平均成绩 
//	}
//}
//struct student max(struct student stu[])		//定义max函数 
//{
//	int i,m=0;			//用m来存放成绩最高的学生在数组中的序号 
//	for(i=0;i<n;i++)
//	{
//		if(stu[i].aver>stu[m].aver)	//找出平均成绩最高的学生在数组中的序号 
//		m=i;
//	}
//	return stu[m];	//返回包含该生信息的结构体元素 
//}
//void print(struct student stud)	//定义print函数 
//{
//	printf("\n成绩最高的学生是：\n");
//	printf("学号:%s\n姓名:%s\n三门成绩:%5.2f\t%5.2f\t%5.2f\n平均分:%5.2f\n",
//	stud.num ,stud.name ,stud.score[0],stud.score [1],stud.score [2],stud.aver);
////}
//#include <stdio.h> 
//#define n 3
//struct student
//{
//	char num[5];
//	char name[10];
//	float score[3];
//	float aver;
//};
//int main()
//{
//	void input(struct student stu[]);
//	struct student max(struct student stu[]);
//	void print(struct student stu);
//	struct student stu[n],*p=stu;
//	input(p);
//	print(max(p));
//	return 0;
//}
//void input(struct student stu[])
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		printf("请输入第%d位学生学号、名字和三科成绩：\n",i+1);
//		scanf("%s %s %f %f %f",stu[i].num,stu[i].name,
//		&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
//	}
//}
//struct student max(struct student stu[])
//{
//	int i,m=0;
//	for(i=0;i<n;i++)
//	{
//		if(stu[i].aver>stu[m].aver)
//		m=i;
//	}
//	return stu[m];
//}
//void print(struct student stud)
//{
//	printf("成绩最高的同学信息如下：\n");
//	printf("\n学号：%s\n姓名：%s\n三科成绩：%5.2f\t%5.2f\t%5.2f\t平均分：%5.2f\n",
//	stud.num ,stud.name ,stud.score [0],stud.score [1],stud.score [2],stud.aver);
//}

//#include <stdio.h>
//#define n 3
//struct student
//{
//	char num[6];
//	char name[20];
//	float score[3];
//	float aver;
//}stu[n];
//int main()
//{
//	void input(struct student stu[]);
//	struct student max(struct student stu[]);
//	void print(struct student stu);
//	struct student stu[n],*p=stu;
//	input(p);
//	print(max(p));
//	return 0;
//}
//void input(struct student stu[])
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		printf("第%d位学生的学号、名字和三科的成绩：\n",i+1);
//		scanf("%s %s %f %f %f",stu[i].num ,stu[i].name ,&stu[i].score [0],&stu[i].score [1],&stu[i].score [2]);
//		stu[i].aver =(stu[i].score [0]+stu[i].score [1]+stu[i].score [2])/3.0;
//	}
//}
//struct student max(struct student stu[])
//{
//	int i,m=0;
//	for(i=0;i<n;i++)
//	{
//		if(stu[i].aver >stu[m].aver )
//		m=i;
//	}
//	return stu[m];
//}
//void print(struct student stud)
//{
//	printf("成绩最高的信息如下：\n");
//	printf("\n学号:%s\n姓名:%s\n三科成绩:%5.2f\t%5.2f\t%5.2f\n平均分:%5.2f\n",stud.num ,stud.name ,stud.score [0],stud.score [1],stud.score [2],stud.aver );
//}

#include <stdio.h>
struct student
{
	int num;
	float score;
	struct student *next;
};
int main()
{
	struct student a,b,c,*p,*head;
	a.num =10086;a.score =94.5;
	b.num =10000;b.score =97.6;
	c.num =10010;c.score =96.3;
	head=&a;
	a.next =&b;
	b.next =&c;
	a.next =NULL;
	p=head;
	do
	{
		printf("%d %5.1f\n",p->num ,p->score );
		p=p->next ;
	}while(p!=NULL);
	
	return 0;
}


























