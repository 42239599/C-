//#include <stdio.h> 
//struct
//{
//	int num;
//	char name [10];
//	char sex;
//	char job;
//	union
//	{
//		int clas;
//		char position[10];
//	}category;
//}person[2];
//
//int main()
//{
//	int i;
//	for(i=0;i<2;i++)
//	{
//		printf("请输入第%d位的信息：\n",i+1);
//		scanf("%d %s %c %c",&person[i].num ,&person[i].name ,&person[i].sex ,&person[i].job );
//		if(person[i].job == 's')
//			scanf("%d",&person[i].category.clas );
//		else if(person[i].job == 't')
//			scanf("%s",person[i].category.position );
//		else
//			printf("输入有误！！\n");
//	}
//	
//	printf("\n\n");
//	
//	printf("num\tname\tsex\tjob\tclas/position\n");
//	for(i=0;i<2;i++)
//	{
//		if(person[i].job == 's')
//			printf("%d\t%s\t%c\t%c\t%d\n\n",person[i].num ,person[i].name ,person[i].sex ,person[i].job ,person[i].category.clas );
//		else
//			printf("%d\t%s\t%c\t%c\t%s\n\n",person[i].num ,person[i].name ,person[i].sex ,person[i].job ,person[i].category.position );
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	enum color{red,yellow,blue,white,black
//	};
//	int i,j,k,pri;
//	int n,loop;
//	n=0;
//	for(i=red;i<=black;i++)
//	{
//		for(j=red;j<=black;j++)
//		{
//			if(i!=j)
//			{
//				for(k=red;k<=black;k++)
//				{
//					if((i!=k) &&  (j!=k))
//					{
//						n=n+1;
//						printf("%-4d",n);
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
//								case red:printf("%-10s","red");break;
//								case yellow:printf("%-10s","yellow");break;
//								case blue:printf("%-10s","blue");break;
//								case white:printf("%-10s","white");break;
//								case black:printf("%-10s","black");break;
//								default:break;
//							}
//						}
//						printf("\n");
//					}
//				}
//			}
//		}
//	}
//	printf("总共有%d种情况\n\n",n);
//	return 0;
//}


//#include <stdio.h>
//struct Date
//{
//	int year;
//	int month;
//	int day;
//}date;
//int main()
//{
//	int sum=0;
//	printf("请输入要计算的年月日：\n");
//	scanf("%d %d %d",&date.year ,&date.month ,&date.day );
//	switch(date.month )
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
//		case 1:sum+=date.day ;
//	}
//	
//	if((date.year %4==0 &&date.year %100 != 0) || date.year % 400 == 0)
//	{
//		if(date.month >=3)
//		sum+=1;
//	}
//	
//	printf("结果是第%d天\n\n",sum);
//	return 0;
//}


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


// 定义一个结构体变量(包括年、月、日)。计算该日在本年中是第几天，注意闰年问题。
//写一个函数days,实现第1题的计算。由主函数将年、月、日传递给days函数.
//计算后将日子数传回主函数输出。
//#include<stdio.h>
//
//int days(int year,int month,int day)
//{
//	int day_sum=0;
//	int month_sum[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};// 12个月每月的天数 
//	for(int i=0;i<month;i++)
//	{
//		day_sum+=month_sum[i];//month个月
//	}
//	
//	day_sum=day_sum+day;//加上这个月的day 
//	
//	if ((year%4==0 && year%100!=0 || year%400==0) && month > 2)//判断闰年 ，1月和2月不用考虑 
//	{
//		day_sum+=1;//闰年2月多一天 
//	}	
//	return day_sum; 
//}
//
//
//struct date 
//{
//	int year;
//	int month;
//	int day;
//};
//int main()
//{
//	struct date yanlu; 
//	int sum;
//	printf("请输入年月(1-12)日(1-31)：");
//	scanf("%d %d %d",&yanlu.year,&yanlu.month,&yanlu.day);
//	sum=days(yanlu.year,yanlu.month,yanlu.day);//调用time返回总天数 
//	printf("\n%d月%d日是%d年的第%d天。",yanlu.month,yanlu.day,yanlu.year,sum);
//	
//	return 0;
//}

//#include <stdio.h>
//struct Date
//{
//	int year;
//	int month;
//	int day;
//}date;
//
//int main()
//{
//	int i,sum_day=0;
//	int mon_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//12个月每天的天数 
//	printf("请输入要计算的年月日\n");
//	scanf("%d %d %d",&date.year ,&date.month ,&date.day );
//	for(i=0;i<date.month ;i++)
//	{
//		sum_day+=mon_day[i] ;//前几个月相加 
//	}
//	
//	sum_day+=date.day;	//加上当月的天数 
//	
//	if((date.year %4 == 0 && date.year %100 != 0 || date.year % 400 == 0) && (date.month > 2))//判断闰年，1、2月不用考虑 
//	{
//		sum_day+=1; 	//闰年加一天 
//	}
//	
//	printf("%d月%d日是%d年的第%d天。\n\n",date.month ,date.day ,date.year ,sum_day);
//	
//	return 0;
//}


//#include <stdio.h> 
//struct Date
//{
//	int year;
//	int month;
//	int day;
//}date;
//int main()
//{
//	int add(int year,int month,int day);
//	int sum;
//	printf("请输入年月日：\n");
//	scanf("%d %d %d",&date.year ,&date.month ,&date.day );
//	sum=add(date.year ,date.month ,date.day );
//	printf("%d月%d日是%d年的第%d天\n\n",date.month ,date.day ,date.year ,sum);
//	return 0;
//}
//int add(int year,int month,int day)
//{
//	int i,sum_day=0;
//	int month_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//	for(i=0;i<month;i++)
//	{
//		sum_day+=month_day[i];
//	}
//	
//	sum_day+=day;
//	
//	if((month % 4 == 0 && month % 100 != 0 || month %400 == 0) && (month > 2))
//	{
//		sum_day++;
//	}
//	return sum_day;
//}


#include <stdio.h>
struct student
{
	int num;
	char name[10];
	float score[3];
	float aver;
}stu[10];
int main()
{
	void input(struct student stu[]);

	input(stu);

	
	return 0;
}
void input(struct student stu[])
{
	int i,j;
	float aver[3],sum[3];
	for(i=0;i<10;i++)
	{
		printf("请输入第%d位学生的信息：\n",i+1);
		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<10;i++)
		{
			sum[j]=stu[i].score[0];
		}
	}
}




































