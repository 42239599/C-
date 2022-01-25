//#include <stdio.h> 
//int main()
//{
//	void hannuo(int n,char one,char two,char three);
//	int m;
//	printf("请输入碟子：\n");
//	scanf("%d",&m);
//	hannuo(m,'A','B','C');
//	return 0;
//}
//void hannuo(int n,char one,char two,char three)
//{
//	void move(char x,char y);
//	if(n==1)
//		move(one,three);
//	else
//	{
//		hannuo(n-1,one,three,two);
//		move(one,three);
//		hannuo(n-1,two,one,three);
//	}
//	
//}
//void move(char x,char y)
//{
//	printf("%c-->%c\n",x,y);
//}
//
////输入10个数，输出最大的元素以及该数是第几个
//#include <stdio.h> 
//void input(int a[],int x)
//{
//	int i;
//	printf("请输入十个数字：\n");
//	for(i=0;i<x;i++)
//		scanf("%d",&a[i]); 
//}
//////小到大 
////void sorting(int a[],int x)
////{
////	int i,j,y;
////	for(j=0;j<x-1;j++)
////	{
////		for(i=0;i<x-1-j;i++)
////		{
////			if(a[i]>a[i+1])
////			{
////				t=a[i];
////				a[i]=a[i+1];
////				a[i+1]=t;
////			}
////		}
////	}
////}
//
//void search(int a[],int x)
//{
//	int max, i,bits;
//	max=a[0];
//	for(i=0;i<x;i++)
//	{
//		if(a[i]>max)
//		{
//			max=a[i];
//			bits=i;
//		}
//	}
//	printf("最大数是%d,在第%d个元素\n",max,bits+1);
//}
//
//int main()
//{
//	int a[10];
//	input(a,10);
////	sorting(a,10);
//	search(a,10);
//	return 0;
//}

////一维数组有十个成绩，求平均分
//#include <stdio.h> 
//int main(void)
//{
//	float average(float score[],int x);
//	int i;
//	float aver,score[10];
//	printf("请输入10个成绩：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%f",&score[i]);
//	}
//	aver=average(score,10);
//	printf("平均分是%5.2f\n",aver);
//	return 0;
//}
//float average(float score[],int x)
//{
//	float sum=0,aver;
//	int i;
//	for(i=0;i<x;i++)
//	{
//		sum+=score[i];
//	}
//	return aver=sum/x;
//}

//两个班5和10人，调用一个average函数求平均分 
//#include <stdio.h>
//int main(void)
//{
//	float average(float array[],int x);
//	float score1[5],score2[10];
//	int i;
//	printf("请输入一班的成绩：\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%f",&score1[i]);
//	}
//	printf("请输入二班的成绩：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%f",&score2[i]);
//	 } 
//	
//	printf("一班平均分为%5.2f\n二班平均分为%5.2f\n",average(score1,5),average(score2,10));
//	
//	return 0;
//}
//float average(float array[],int x)
//{
//	int i;
//	float sum=0,aver;
//	for(i=0;i<x;i++)
//	{
//		sum+=array[i];
//	}
//	return aver=sum/x;
//}

//
//#include <stdio.h>
//int main(void)
//{
//	void sorts(int a[],int x);
//	int a[10],i;
//	printf("请输入十个数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	sorts(a,10);
//	printf("选择排序小到大的是：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",a[i]);
//	}	
//	
//	return 0;
//}
//void sorts(int a[],int x)
//{
//	int i,j,t;
//	for(i=0;i<x-1;i++)
//	{
//		for(j=i+1;j<x;j++)
//		{
//			if(a[i]>a[j])
//			{
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}
//
//}

////3*4找最大值 
//#include <stdio.h>
//int main(void)
//{
//	int sorts(int a[][4],int x);
//	int a[3][4],i,j;
//	printf("请输入12个数：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//			scanf("%d",&a[i][j]);
//	}
//
//	printf("最大数是：%d\n",sorts(a,3));
//	return 0;
//}
//int sorts(int a[][4],int x)
//{
//	int max=a[0][0],i,j;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			if(a[i][j]>max)
//				max=a[i][j];
//		}
//	}
//	return max;
//}

//
//#include <stdio.h>
//float max=0,min=0;
//int main(void)
//{	
//	float average(float score[],int n);
//	float aver,score[10]={87,95,68,42,62,85,74,93,65,70};
//	aver=average(score,10);
//	printf("最大分数：%5.2f\n最小分数：%5.2f\n平均分数：%5.2f\n",max,min,aver);
//	return 0;
//}
//float average(float score[],int n)
//{
//	int i;
//	float sum=0,aver;
//	for(i=0;i<n;i++)
//	{
//		if(score[i]>max)	max=score[i];
//		else if(score[i]<min)    min=score[i];
//		sum+=score[i];
//	}
//	return aver=sum/n;
//}

//#include <stdio.h>
//float max=0,min=0;
//int main(void)
//{
//	float average(float score[],int n);
//	float aver,score[10]={74,85,96,89,78,45,56,65,87,94};
//	aver=average(score,10);
//	printf("max=%5.2f\nmin=%5.2f\naver=%5.2f\n",max,min,aver);
//	return 0;
//}
//float average(float score[],int n)
//{
//	int i;
//	float aver,sum=0;
//	max=min=score[0];
//	for(i=0;i<n;i++)
//	{
//		if(score[i]>max)	max=score[i];
//		if(score[i]<min)	min=score[i];
//		sum+=score[i];
//	}
//	return aver=sum/n;
//}























