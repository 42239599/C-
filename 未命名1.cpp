//#include <stdio.h> 
//#define n 10
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
//	void print(struct student stu);
//	
//	input(stu);
//	print(max(stu));
//	
//	return 0;
//}
//void input(struct student stu[])
//{
//	int i,sum=0;
//	float aver;
//	for(i=0;i<n;i++)
//	{
//		printf("请输入第%d位学生的信息：\n",i+1);
//		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//		sum=sum+stu[i].score[0]+stu[i].score[1]+stu[i].score[2];
//		
//	}
//	aver=sum/(n*3.0);
//	printf("总平均成绩是%5.2f\n",aver);
//}
//struct student max(struct student stu[])
//{
//	
//	int i,m=0;
//	for(i=0;i<n;i++)
//	{
//		stu[i].aver =(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]) / 3.0 ;
//		if(stu[i].aver  > stu[m].aver )
//			m=i;
//	}
//	return stu[m];
//}
//void print(struct student stud)
//{
//	printf("成绩最高的同学的信息如下：\n");
//	printf("\nnum:%d\nname:%s\nscore[3]:%5.2f\t%5.2f\t%5.2f\naver:%5.2f\n",
//	stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
//}

//
//#include <stdio.h>
//int main(void)
//{
//	enum color{red,yellow,blue,white,black
//	};
//	int i,j,k,pri,n=0,loop;
//	for(i=red;i<=black;i++)
//	{
//		for(j=red;j<=black;j++)
//		{
//			if(i!=j)
//			{
//				for(k=red;k<=black;k++)
//				{
//					if(i!=k&&j!=k)
//					{
//						n=n+1;
//						printf("%-6d",n);
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
//	printf("一共有%d种情况\n\n",n);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int year,month,day,i,sum=0;
//	int month_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//	printf("请输入年月日：\n");
//	scanf("%d %d %d",&year,&month,&day);
//	for(i=0;i<month;i++)
//	{
//		sum+=month_day[i];
//	}
//	sum+=day;
//	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		if(month>2)
//		sum++;
//	}
//	printf("%d月%d日是%d年的第%d天\n\n",month,day,year,sum);
//	return 0;
//}








































