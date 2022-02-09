//#include <stdio.h> 
//int main()
//{
//	void reversed(int *p,int n);
//	int a[20],i,n;
//	printf("请输入数字个数：\n");
//	scanf("%d",&n);
//	printf("请输入各个数字：\n");
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
//	reversed(a,n);
//	return 0;
//}
//void reversed(int *p,int n)
//{
//	int mid,i,t,j=n-1;
//	mid=n/2;
//	for(i=0;i<mid;i++,j--)
//	{
//		t=*(p+i);
//		*(p+i)=*(p+j);
//		*(p+j)=t;
//	}
//	printf("输出结果是：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%d\t",*(p+i));
//	}
//}

//
//#include <stdio.h>
//int main()
//{
//	void average(float (*p)[4]);
//	void search(float (*p)[4]);
//	void search_a(float (*p)[4]);
//	
//	float score[3][4];
//	int i,j;
//	for(i=0;i<3;i++)
//	{
//		printf("请输入第%d位学生的成绩：\n",i+1);
//		for(j=0;j<4;j++)
//		{
//			scanf("%f",&score[i][j]);
//		}
//	}
//	
//	average(score);
//	search(score);
//	search_a(score);
//	
//	return 0;
//}
//void average(float (*p)[4])
//{
//	int i,j;
//	float aver,sum=0;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<1;j++)
//		{
//			sum+=*(*(p+i)+j);
//		}
//	}
//	aver=sum/3.0;
//	printf("第一门课平均分为：%5.2f\n\n",aver);
//}
//
//void search(float (*p)[4])
//{
//	int i,j,count=0;
//	float aver,sum=0;
//	for(i=0;i<3;i++)
//	{
//		aver=0;
//		sum=0;
//		count =0 ;
//		for(j=0;j<4;j++)
//		{
//			if(*(*(p+i)+j)<60)
//			count ++;
//			if(count>1)
//			{
//				for(j=0;j<4;j++)
//				{
//					sum+=*(*(p+i)+j);
//				}
//				aver=sum/4.0;
//				printf("第%d位同学的成绩至少有两门不及格\n总平均分是%5.2f\n各科成绩是：",i+1,aver);
//				for(j=0;j<4;j++)
//					printf("%5.2f\t",*(*(p+i)+j));
//			}
//		}
//		printf("\n");
//	}
//	
//}
//
//void search_a(float (*p)[4])
//{
//	int i,j,count;
//	float aver,sum=0;
//	for(i=0;i<3;i++)
//	{
//		sum=0;
//		aver=0;
//		count =0;
//		for(j=0;j<4;j++)
//		{
//			sum+=*(*(p+i)+j);
//			if(*(*(p+i)+j)>85)
//				count ++;
//		}
//		aver=sum/4.0;
//		if(count == 4)
//			printf("第%d位同学的全部成绩全在85以上！\n",i+1);
//		if(aver>90)
//			printf("第%d位同学的平均分在90以上!\n",i+1);	
//	}
//}
//

//#include <stdio.h>
//int main(void)
//{
//	struct Student
//	{
//		long int num;
//		char name[20];
//		char sex;
//		char addr[20];
//	}a={1001,"li ming",'M',"123 beijing road"};
//	printf("NO.%ld\nname:%s\nsex:%c\naddr:%s\n",a.num,a.name,a.sex,a.addr);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	struct stu
//	{
//		int num;
//		char name[10];
//		float score;
//	}student1,student2;
//	printf("请输入学生1的学号名字和成绩：\n");
//	scanf("%d%s%f",&student1.num,student1.name,&student1.score);
//	printf("请输入学生2的学号名字和成绩：\n");
//	scanf("%d%s%f",&student2.num,student2.name,&student2.score);
//	
//	if(student1.score > student2.score)
//		printf("num:%d\nname:%s\nscore:%5.2f\n",student1.num,student1.name,student1.score);
//	else if(student1.score < student2.score)
//		printf("num:%d\nname:%s\nscore:%5.2f\n",student2.num,student2.name,student2.score);
//	else
//	{
//		printf("num:%d\nname:%s\nscore:%5.2f\n",student1.num,student1.name,student1.score);
//		printf("num:%d\nname:%s\nscore:%5.2f\n",student2.num,student2.name,student2.score);			
//	}
//
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//struct person
//{
//	char name[20];
//	int count;
//}leader[3]={"li",0,"sun",0,"chen",0};
//int main()
//{
//	int i,j;
//	char name_c[20];
//	printf("请输入 名字：\n");
//	for(i=1;i<=10;i++) 
//	{
//		scanf("%s",name_c);
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(leader[j].name ,name_c) == 0)
//			leader[j].count++;
//		 } 
//	}
//	printf("结果如下：\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%5s:%d\n",leader[i].name,leader[i].count );
//	}	
//	return 0;
//}

//#include <stdio.h>
//struct student
//{
//	int num;
//	char name[20];
//	float score;
//};
//
//int main(void)
//{
//	struct student stu[5]={{502,"lihua",98},{506,"liming",94},{555,"lisi",98.5},{206,"xiaofang",94},{306,"zhangsan",96}};	
//	struct student t;
//	int n=5;
//	int i,j;
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(stu[i].score > stu[j].score )
//			{
//				t=stu[i];
//				stu[i]=stu[j];
//				stu[j]=t;
//			}
//		}
//	}
//	
//	printf("排序结果如下：\n");
//	
//	for(i=0;i<n;i++)
//	{
//		printf("\nnum:%d\nname:%s\nscore:%5.2f\n",stu[i].num ,stu[i].name ,stu[i].score );
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//struct person
//{
//	char namr[20];
//	int count;
//}leader[3]={"li",0,"sun",0,"qi",0};
//int main()
//{
//	int i,j;
//	char name_c[20];
//	printf("请输入名字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%s",name_c);
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(leader[j].namr , name_c) == 0)
//				leader[j].count ++;
//		}
//	}
//	printf("result:\n\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%5s:%d\n",leader[i].namr ,leader[i].count );
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	struct student
//	{
//		long num;
//		char name[20];
//		char sex;
//		float score;
//	};
//	
//	struct student stu_1;
//	struct student *p;
//	p=&stu_1;
//	stu_1.num=10101;
//	strcpy(stu_1.name,"lilei");
//	stu_1.sex='M';
//	stu_1.score=89.5;
//	printf("\nNO.%d\nname:%s\nsex:%c\nscore:%5.2f\n",stu_1.num,(*p).name,p->sex,stu_1.score);
//	
//	return 0;
//}


//#include <stdio.h>
//struct student
//{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//}stu[3]={{106,"liming",'M',20},{666,"lihua",'M',23},{405,"lisi",'F',21}};
//
//int main()
//{
//	struct student *p;
//	printf("num:\tname\tsex\tage\n");
//	for(p=stu;p<stu+3;p++)
//	{
//		printf("%d\t%s\t%c\t%d\n",p->num ,p->name ,p->sex ,p->age );
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//#define n 3
//struct student
//{
//	int num;
//	char name[10];
//	float score[3];
//	float aver;
//};
//
//int main(void)
//{
//	void input(struct student stu[]);
//	struct student max(struct student stu[]);
//	void print(struct student stud);
//	
//	struct student stu[n], *p=stu;
//	input(p);
//	print(max(p));
//	return 0;
//}
//void input(struct student stu[])
//{
//	int i;
//	printf("请输入各个学生的学号、姓名、3门课成绩：\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d%s%f%f%f",&stu[i].num ,stu[i].name,&stu[i].score[0] ,&stu[i].score[1],&stu[i].score [2] );
//		stu[i].aver =(stu[i].score [0]+stu[i].score [1]+stu[i].score [2])/3.0;
//	}
//	
//}
//
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
//	printf("成绩最高的同学是：\n");
//	printf("学号：%d\n姓名：%s\n三门成绩：%5.2f\t%5.2f\t%5.2f\n平均成绩：%5.2f\n",
//	stud.num ,stud.name ,stud.score [0],stud.score [1],stud.score [2],stud.aver );
//}


























