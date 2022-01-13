//#include <stdio.h>
//int main()
//{
//	enum color{red,yellow,blue,white,black};
//	int i,j,k,n=0,pri,loop;
//	for(i=red;i<=black;i++)
//	{
//		for(j=red;j<=black;j++)
//		{
//			if(i!=j)
//			{
//				for(k=red;k<=black;k++)
//				{
//					if((i!=k) && (j!=k))
//					{
//						n++;
//						printf("%4d",n);
//						for(loop=1;loop<=3;loop++)
//						{
//							switch(loop)
//							{
//								case 1:pri=i;break;
//								case 2:pri=j;break;
//								case 3:pri=k;break;
//								default:break;
//							}
//							switch(pri)
//							{
//								case red:printf("%8s","red");break;
//								case yellow:printf("%8s","yellow");break;
//								case blue:printf("%8s","blue");break;
//								case white:printf("%8s","white");break;
//								case black:printf("%8s","black");break;
//								default:break;
//							}
//						}
//						printf("\n");
//					}
//				}
//			}
//		}
//	}
//	printf("一共有%d中可能。\n",n);
//	
//	return 0;
//}

////定义一个结构体变量（包括年月日），计算该日在本年中是第几天（主义闰年问题） 
////一般方法
//#include <stdio.h> 
//int main()
//{
//	int year,month,day,sum=0;
//	printf("请输入年月日：\n");
//	scanf("%d %d %d",&year,&month,&day);
//	if(month<=0 || month>12)
//		printf("error!!\n");
//	else
//	{
//		switch(month)
//		{
//			case 12:sum+=31;
//			case 11:sum+=30;
//			case 10:sum+=31;
//			case 9:sum+=30;
//			case 8:sum+=31;
//			case 7:sum+=31;
//			case 6:sum+=30;
//			case 5:sum+=31;
//			case 4:sum+=30;
//			case 3:sum+=31;
//			case 2:sum+=28; //假设是平年 
//			case 1:sum+=day;
//		}
//	}
//	if(year%4==0 && year%100!=0 || year%400==0)
//	{
//		if(month>=3)
//		{
//			printf("%d年是闰年，所输入的数据是该年的第%d天\n",year,sum+=1);		
//		}
//		else
//		{
//			printf("%d年是闰年，所输入的数据是该年的第%d天\n",year,sum);
//		}
//	}
//	else
//	{
//		printf("%d年是平年，所输入的数据是该年的第%d天\n",year,sum);
//	}	
//	return 0;
//}
//
////结构体变量 
//#include <stdio.h> 
//struct Year
//{
//	int year;
//	int month;
//	int day;
//}a;
//int main()
//{
//	int sum=0;
//	printf("请输入年月日：\n");
//	scanf("%d %d %d",&a.year,&a.month,&a.day);
//	switch(a.month)
//	{
//		case 12:sum+=31;
//		case 11:sum+=30;
//		case 10:sum+=31;
//		case 9:sum+=30;
//		case 8:sum+=31;
//		case 7:sum+=31;
//		case 6:sum+=30;
//		case 5:sum+=31;
//		case 4:sum+=30;
//		case 3:sum+=31;
//		case 2:sum+=28; //假设是平年 
//		case 1:sum+=a.day;		
//	}
//	if(a.year%4==0 &&a.year%100!=0 ||a.year%400==0)
//	{
//		if(a.month >=3)
//		{
//			printf("%d年是闰年，输入的日期是该年的第%d天.\n",a.year,sum+=1);
//		}
//		else
//		{
//			printf("%d年是闰年，输入的日期是该年的第%d天.\n",a.year,sum);
//		}
//	}
//	else
//	{
//		printf("%d年是平年，输入的日期是该年的%d天。\n",a.year,sum);
//	}
//	return 0;
//}

////写一个函数days实现  定义一个结构体变量（包括年月日），计算该日在本年中是第几天（注意闰年问题）
////的计算，主函数将年月日传递给days函数，计算后将日子传回主函数输出 
//#include <stdio.h>
//int main()
//{
//	int days(int y,int m,int d);
//	int year,month,day;
//	printf("请输入年月日：\n");
//	scanf("%d %d %d",&year,&month,&day);
//	printf("输入的日期是该年的第%d天。\n",days(year,month,day));
//	return 0;
//}
//
//int days(int y,int m,int d)
//{
//	int sum=0;
//	switch(m)
//	{
//		case 12:sum+=31;
//		case 11:sum+=30;
//		case 10:sum+=31;
//		case 9:sum+=30;
//		case 8:sum+=31;
//		case 7:sum+=31;
//		case 6:sum+=30;
//		case 5:sum+=31;
//		case 4:sum+=30;
//		case 3:sum+=31;
//		case 2:sum+=28;
//		case 1:sum+=d;
//	}
//	if(y%4==0 && y%100!=0 ||y%4==0)
//	{
//		if(m>=3)
//			sum=sum+1;
//	}
//	return sum;
//}
//
////结构体变量指针 
//#include <stdio.h>
//struct Year
//{
//	int year;
//	int month;
//	int day;
//}a;
//int main()
//{
//	int days(int *q1,int *q2,int *q3);
//	int *p1,*p2,*p3,c;
//	p1=&a.year;
//	p2=&a.month ;
//	p3=&a.day ;
//	printf("请输入年月日：\n");
//	scanf("%d %d %d",p1,p2,p3);
//	c=days(p1,p2,p3);
//	printf("输入的日期是该年的第%d天。\n",c);
//	return 0;
//}
//int days(int *q1,int *q2,int *q3)
//{
//	int sum=0;
//	switch(*q2)
//	{
//		case 12:sum+=31;
//		case 11:sum+=30;
//		case 10:sum+=31;
//		case 9:sum+=30;
//		case 8:sum+=31;
//		case 7:sum+=31;
//		case 6:sum+=30;
//		case 5:sum+=31;
//		case 4:sum+=30;
//		case 3:sum+=31;
//		case 2:sum+=28;
//		case 1:sum+=*q3;
//	}
//	if(*q1%4==0 && *q1%100 != 0 ||*q1%400 == 0)
//	{
//		if(*q2>=3)
//		sum+=1;	
//	}
//	return sum;
//}



///**********************************************
//*编写函数print和input，打印一个学生的成绩数组；该数组有5名
//*学生的数据记录，每个记录包括num，name,score[3], 
//*用input函数输入记录，print函数输出 
//**********************************************/ 
//#include <stdio.h>
//struct student
//{
//	int num;
//	char name[10];
//	float score[3];
//} ;
//int main()
//{
//	void input(struct student stu[]);
//	void print(struct student stu[]);
//	struct student stu[5];
//	input(stu);
//	print(stu);
//	return 0;
//}
//void input(struct student stu[])
//{
//	int i;
//	for(i=0;i<5;i++)
//	{
//		printf("请输入第%d位学生的学号名字和三门成绩：\n",i+1);
//		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//	}
//}
//void print(struct student stu[])
//{
//	int i;
//	printf("NO.	name	score\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d\t%s\t%5.2f\t%5.2f\t%5.2f\n",stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
//	}
//	
//}

////有10个学生，每个学生的数据包括学号、姓名、3门课程的成绩，从键盘输入数据
////要求输出3门课程总评分，以及最高分的学生数据
//#include <stdio.h> 
//struct student
//{
//	int num;
//	char name[10];
//	float score[3];
//	float aver;
//};
//int main()
//{
//	void input(struct student stu[]);
//	struct student max(struct student stu[]);
//	void print(struct student stu);
//	struct student stu[10];
//	input(stu);
//	
//	print( max(stu));
//	return 0;
//}
//void input(struct student stu[])
//{
//	int i;
//	for(i=0;i<10;i++)
//	{
//		printf("请输入第%d位学生的学号、姓名和三科成绩：\n",i+1);
//		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//	}
//	printf("\n");
//}
//struct student max(struct student stu[])
//{
//	int m=0,i,sum=0;
//	for(i=0;i<10;i++)
//	{
//		sum=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]);
//		stu[i].aver=sum/3.0;
//		if(stu[m].aver<stu[i].aver)
//		m=i;
//	}
//	return stu[m];
//}
//void print(struct student stud)
//{
//	printf("成绩最高的学生信息：\n");
//	printf("学号：%d\n姓名：%s\n三科成绩：%f\t%f\t%f\t平均分：%5.2f\n",stud.num ,stud.name ,stud.score[0],stud.score[1],stud.score[2],stud.aver);
//}


//#include <stdio.h>
//int main()
//{
//	int i,k=0,m=0,a[13],*p=a;
//	for(i=0;i<13;i++)
//	{
//		a[i]=i+1;
//	}
//	i=0;
//	while(m<12)
//	{
//		if(*(p+i)!=0)
//		{
//			k++;
//		}
//		if(k==3)
//		{
//			*(p+i)=0;
//			m++;
//			k=0;
//		}
//		i++;
//		if(i==13)
//		{
//			i=0;
//		}
//	}
//	while(*p==0)
//	{
//		p++;
//	}
//	printf("%d",*p);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n,i,k = 0,m = 0;//k为1，2，3的计数变量，m为退出人数 
//	int a[100];
//	int* p;
//	
//	puts("Please input the number of players:");//输入人数 
//	scanf("%d",&n);
//		
//	for (i = 0;i <= n - 1;i++)//对每个人进行编号，方便后续得出结果 
//	{
//		a[i] = i + 1;
//	}
//
////以下为逻辑判断部分 
//	p = a;
//	i = 0;
//	while (m < n - 1)
//	{
//		if (*(p + i) != 0)//遍历剩下的元素（当然，第一遍是所有元素） 
//		{
//			k++;
//		}
//		if (k == 3)
//		{
//			*(p + i) = 0;//退出标志
//			m++;
//			k = 0;
//		}
//		i++;
//		if(i ==n)
//		{
//			i = 0;
//		}
//	}
//	while (*p == 0)//判断出第几个，即最后未变成0的元素 
//	{
//		p++;
//	}
//	printf("The index of the person is %d",*p);
//	return 0;
//}
















