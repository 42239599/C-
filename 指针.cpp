//#include <stdio.h> 
//int main()
//{
//	struct stu			//声明结构体函数 
//	{
//		int student_id;
//		char name[20];
//		char sex;
//		char addr[20];
//	}a={10010,"john",'M',"beijing"};//定义结构体变量a并进行初始化 
//	printf("NO.%d\nname:%s\nsex:%c\naddr:%s\n",a.student_id,a.name,a.sex,a.addr);
//	return 0;
//}

////输入两个学生的学号姓名成绩，输出成绩高的学生信息
//#include <stdio.h> 
//int main()
//{
//	struct Stu			//声明结构体变量struct Stu 
//	{
//		int num;
//		char name[20];
//		float score;
//	}student1,student2;//定义两个结构体变量student1\student2 
//	printf("请输入学生1的学号、姓名和成绩：\n");
//	scanf("%d %s %f",&student1.num,student1.name,&student1.score);//输入学生1的数据 
//	printf("请输入学生2的学号、姓名和成绩：\n");
//	scanf("%d %s %f",&student2.num,student2.name,&student2.score);//输入学生2的数据 
//	if(student1.score>student2.score)
//	{
//		printf("成绩较高的是：%d\t%s\t%5.2f\n",student1.num,student1.name,student1.score);
//	}
//	else if(student1.score>student2.score)
//	{
//		printf("成绩较高的是：%d\t%s\t%5.2f\n",student2.num,student2.name,student2.score);
//	}
//	else
//	{
//		printf("两者成绩相等：\n");
//		printf("%d\t%s\t%5.2f\n",student1.num,student1.name,student1.score);
//		printf("%d\t%s\t%5.2f\n",student2.num,student2.name,student2.score);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct person			//声明结构体类型struct person 
//{
//	char name[10];		//候选人姓名 
//	int count;			//候选人的票数 
//}leader[3]={"li",0,"chen",0,"sun",0};//定义结构体数组并初始化 
//int main()
//{
//	char name_leader[10];	//定义字符数组 
//	int i,j;
//	printf("请输入姓名 ：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%s",name_leader);	//输入所选的候选人姓名 
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(leader[j].name,name_leader)==0)
//			leader[j].count ++;
//		}
//	}
//	printf("投票结果如下：\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%5s:%d\n",leader[i].name ,leader[i].count);
//	}
//	return 0;
//}

//#include <string.h>
//#include <stdio.h> 
//struct person
//{
//	char name[20];
//	int count;
//}leader[3]={"chen",0,"sun",0,"li",0};
//int main()
//{
//	int i,j;
//	char leader_name[20];
//	printf("请输入名字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%s",leader_name);
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(leader_name,leader[j].name)==0)
//			leader[j].count++;
//		}
//	}
//	printf("得票数情况如下：\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%5s:%d\n",leader[i].name ,leader[i].count);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct person
//{
//	char name[20];
//	int count;
//}leader[3]={"li",0,"chen",0,"sun",0};
//int main()
//{
//	int i,j;
//	char leader_name[20];
//	printf("请输入名字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%s",leader_name);
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(leader_name,leader[j] .name)== 0)
//			leader[j].count ++;
//		}
//	}
//	printf("结果如下：\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%5s:%d\n",leader[i].name,leader[i].count);
//	}
//	
//	return 0;
//}


////有n个学生的信息，包括学号，姓名，成绩，要求按照成绩的高低排序输出
//#include <stdio.h> 
//struct stu				//声明结构体类型struct stu 
//{
//	char num[10];
//	char name[20];
//	float score;
//}student[100];			//定义结构体数组 
//int main()
//{
//	int n,i,j;
//	printf("请输入学生个数：\n");
//	scanf("%d",&n);		//确定学生数量 
//	//输入学生的信息 
//	for(i=0;i<n;i++)
//	{
//		printf("第%d位学生的学号、姓名和成绩分别是：\n",i+1);
//		scanf("%s %s %f",&student[i].num,student[i].name ,&student[i].score);
//	}
//	printf("输入的学号、姓名和成绩分别如下：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%s\t%s\t%5.2f\n",student[i].num ,student[i].name ,student[i].score ); 
//	}
//	printf("\n\n");
//	
//	struct stu t;		//定义结构体变量他，用作交换时的临时变量 
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(student[i].score<student[j].score)	//进行成绩的比较 
//			{
//				t=student[i];
//				student[i]=student[j];
//				student[j]=t;
//			}
//		}	
//	}
//	printf("排序后的结果如下：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%s\t%s\t%5.2f\n",student[i].num ,student[i].name ,student[i].score ); 	
//	}
//	return 0;
//}

////指向结构体变量的指针 
////通过指向结构体变量的指针变量输出结构体变量中成员的信息
//#include <stdio.h> 
//#include <string.h>
//struct stu
//{
//	char num[20];
//	char name[20];
//	char sex;
//	float score;
//};
//int main()
//{
//	struct stu student;	//定义struct stu 类型的变量student 
//	struct stu *p;		//定义指向struct stu 类型数据的指针变量p 
//	p=&student;			//p指向student 
//	strcpy(student.num ,"007");	//对结构体成员进行赋值； 
//	strcpy(student.name ,"liming");//用字符串复制函数给 student.name赋值 
//	student.sex ='M';
//	student.score =98.5;
//	printf("%s\t%s\t%c\t%5.2f\n",student.num ,student.name,student.sex ,student.score );
//	printf("%s\t%s\t%c\t%5.2f\n",p->num,p->name,(*p).sex,(*p).score);
//	
//	return 0;
//}




































