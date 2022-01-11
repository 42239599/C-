//#include <stdio.h> 
//#define n 3
//struct student
//{
//	char num[10];
//	char name[20];
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
//		printf("请输入第%d位学生的学号，名字和三科成绩：\n",i+1);
//		scanf("%s %s %f %f %f",stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
//	} 
//}
//struct student max(struct student stu[])
//{
//	int i,m;
//	for(i=0;i<n;i++)
//	{
//		if(stu[i].aver>stu[m].aver)
//		m=i;
//	}
//	return stu[m];
//}
//void print(struct student stud)
//{
//	printf("最高分成绩如下：\n");
//	printf("学号:%s\n姓名:%s\n三科成绩:%5.2f\t%5.2f\t%5.2f\n平均分:%5.2f\n",stud.num ,stud.name ,stud.score [0],stud.score [1],stud.score [2],stud.aver );
////}
//
//#include <stdio.h>
//#define n 3
//struct  student
//{
//	char num[7];
//	char name[20];
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
//		printf("请输入第%d位同学的信息：\n",i+1);
//		scanf("%s %s %f %f %f",stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
//	}
//	
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
//	printf("成绩最高的信息如下：\n");
//	printf("学号:%s\n姓名:%s\n三科成绩:%5.2f\t%5.2f\t%5.2f\n平均分:%5.2f\n",
//	stud.num ,stud.name ,stud.score [0],stud.score [1],stud.score [2],stud.aver );
//	
//}

//#include <stdio.h>
//struct student			//声明结构体类型struct student 
//{
//	int num;
//	float score;
//	struct student *next;
//};
//int main()
//{
//	struct student a,b,c,*p,*head;//定义3个结构体变量，a,b,c作为链表的结点 
//	a.num =10086;a.score =90;//对结点a的num和score成员赋值 
//	b.num =10010;b.score =94;//对结点b的num和score成员赋值 
//	c.num =10000;c.score =96;//对结点c的num和score成员赋值 
//	head=&a;		//将结点a的起始地址赋给头指针head 
//	a.next =&b;		//将结点b的起始地址赋给a结点的next成员 
//	b.next =&c;		//将结点c的起始地址赋给b结点的next成员 
//	c.next =NULL;	//c结点的next成员不存放其他结点地址 
//	p=head;			//p爷指向a结点 
//	do
//	{
//		printf("%d\t%5.2f\n",p->num ,p->score );//输出p指向的结点的数据 
//		p=p->next ;		//使p指向下一结点 
//	}while(p!=NULL);	//输出完c结点后p的值为	null ，循环终止 
//	return 0;
//}

#include <stdio.h> 
struct 
{
	int num;
	char name[10];
	char sex;
	char job;
	union
	{
		int clas;
		char posision[10];
	}category;
}person[2];

int main()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("please input the date of person:\n");
		scanf("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job );
		if(person[i].job=='s')
			scanf("%s",&person[i].category.clas);
		else if(person[i].job=='t')
			scanf("%s",&person[i].category.posision);
		else
			printf("input error!");
	}
	printf("\n");
	printf("NO.	name	sex		job	class/posision\n");
	for(i=0;i<2;i++)
	{
		if(person[i].job=='s')
			printf("%-6d%-10d%-4c%-4c%-10d\n",person[i].num ,person[i].name ,person[i].sex ,person[i].job ,person[i].category.clas );
		else
			printf("%-6d%-10d%-4c%-4c%-10s\n",person[i].num ,person[i].name ,person[i].sex ,person[i].job ,person[i].category.posision);
	}
	return 0;
}




































