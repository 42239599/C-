//#include <stdio.h> 
//int main()
//{
//	
//	void average(float (*p)[5]);
//	void search(float (*p)[5]);
//	void find_out(float (*p)[5]);
//	float score[4][5];
//	int i,j;
//	for(i=0;i<4;i++)
//	{
//		printf("请输入第%d名学生的成绩：\n",i+1);
//		for(j=0;j<5;j++)
//		{
//			scanf("%f",&score[i][j]);
//		}
//		printf("\n");
//	}
//
//	average(score);
//	search(score); 
//	find_out(score);
//	
//	return 0;
//}
//void average(float (*p)[5])
//{
//	float sum=0,aver;
//	int i,j;
//	for(i=0;i<4;i++)
//	{
//		for(j=0;j<1;j++)
//		{
//			sum+=*(*(p+i)+j);
//		}
//		
//	}
//	aver=sum/4;
//	printf("第一门课成绩平均分是：%5.2f\n",aver);
//	printf("\n\n");
//}
//void search(float (*p)[5])
//{
//	int i,j,count;
//	float aver,sum=0,a[5];
//	for(i=0;i<4;i++)
//	{
//		int k=0;
//		aver=0;
//		count=0;
//		sum=0;
//		for(j=0;j<5;j++)
//		{
//			a[k]=*(*(p+i)+j);
//			if(*(*(p+i)+j)<60)
//			count++;
//			k++;	
//		}
//		
//		if(count>=2)
//		{
//			printf("序号为%d的学生有2门以上的成绩不及格，各项成绩如下：\n",i+1);
//			for(k=0;k<5;k++)
//			{
//				printf("%8.2f",a[k]);
//				sum+=a[k]; 
//			}
//			printf("\n");
//			aver=sum/5;
//			printf("平均成绩是：%6.2f\n",aver);
//		}	
//	}
//	printf("\n\n");
//}
//
//void find_out(float (*p)[5])
//{
//	int i,j,mark;
//	float aver,sum=0;
//	for(i=0;i<4;i++)
//	{
//		aver=0;
//		sum=0;
//		mark=0;
//		for(j=0;j<5;j++)
//		{
//			sum+=*(*(p+i)+j);
//			if(*(*(p+i)+j)>85)
//			mark++;
//		}
//		aver=sum/5;
//		if(aver>90 || mark==5)
//		{
//			printf("序号为%d的同学的平均成绩在90以上或者全部课程成绩在85分以上，值得表扬！",i+1);
//		}	
//		printf("\n");
//	}
//}
//
//#include <stdio.h>
//int main()
//{
//	void average(float (*p)[5]);
//	void search(float (*p)[5]);
//	void find(float (*p)[5]);
//	int i,j;
//	float score[4][5];
//	for(i=0;i<4;i++)
//	{
//		printf("请输入第%d名学生的成绩：\n",i+1);	
//		for(j=0;j<5;j++)
//		{
//			scanf("%f",&score[i][j]);
//		}
//		printf("\n");
//	}
//	average(score);
//	search(score);
//	find(score);
//	return 0;
//}
//void average(float (*p)[5])
//{
//	int i,j;
//	float sum=0,aver;
//	for(i=0;i<4;i++)
//	{
//		for(j=0;j<1;j++)
//		{
//			sum+=*(*(p+i)+j);
//		}
//	}
//	aver=sum/4;
//	printf("第一门课程的平均分是：%5.2f\n\n",aver);
//}
//
//void search(float (*p)[5])
//{
//	int i,j,count;
//	float aver,sum=0;
//	for(i=0;i<4;i++)
//	{
//		sum=0;
//		aver=0;
//		count=0;
//		for(j=0;j<5;j++)
//		{
//			if(*(*(p+i)+j)<60)
//			count++;
//			sum+=*(*(p+i)+j);
//		}
//		if(count>=2)
//		{
//			aver=sum/5;
//			printf("学号为%d的同学至少有两门成绩不及格，其平均分为：%5.2f\n",i+1,aver);
//		}
//	}
//	printf("\n\n");
//}
//
//void find(float (*p)[5])
//{
//	int i,j,count;
//	float sum=0,aver;
//	for(i=0;i<4;i++)
//	{
//		sum=0;
//		aver=0;
//		count=0;
//		for(j=0;j<5;j++)
//		{
//			sum+=*(*(p+i)+j);
//			if(*(*(p+i)+j)>85)
//			count++;
//		}
//		aver=sum/5;
//		if(aver>90)
//		printf("学号为%d的同学平均分在90以上，值得表扬！！\n",i+1);
//		if(count==5)
//		printf("学号为%d的同学5门科目都在85以上，值得表扬！！\n",i+1);
//	}
//	
//}

//#include <stdio.h>
//int main()
//{
//	void trans(int *p);
//	int year,*p;
//	p=&year;
//	printf("请输入要转换的月份（阿拉伯数字）：\n");
//	scanf("%d",&year);
//	trans(p);
//	return 0;
//}
//void trans(int *p)
//{
//	switch(*p)
//	{
//		case 1:printf("January\n");
//			break;
//		case 2:printf("February\n");
//			break;
//		case 3:printf("March\n");
//			break;
//		case 4:printf("April\n");
//			break;
//		case 5:printf("May\n");
//			break;
//		case 6:printf("June\n");
//			break;
//		case 7:printf("July\n");
//			break;
//		case 8:printf("August\n");
//			break;
//		case 9:printf("September\n");
//			break;
//		case 10:printf("October\n");
//			break;
//		case 11:printf("November\n");
//			break;
//		case 12:printf("December\n");
//			break;
//		default:printf("请输入正确的月份！！\n");
//	}
//}
//
//#include <stdio.h>
//int main()
//{
//	void trans(int year);
//	int year;
//	printf("请输入月份：\n");
//	scanf("%d",&year);
//	trans(year);
//	return 0;
//}
//void trans(int year)
//{
//	switch(year)
//	{
//		case 1:printf("January\n");
//			break;
//		case 2:printf("February\n");
//			break;
//		case 3:printf("March\n");
//			break;
//		case 4:printf("April\n");
//			break;
//		case 5:printf("May\n");
//			break;
//		case 6:printf("June\n");
//			break;
//		case 7:printf("July\n");
//			break;
//		case 8:printf("August\n");
//			break;
//		case 9:printf("September\n");
//			break;
//		case 10:printf("October\n");
//			break;
//		case 11:printf("November\n");
//			break;
//		case 12:printf("December\n");
//			break;
//		default:printf("请输入正确的月份！！\n");
//	}
//}






























































