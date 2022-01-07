////11 22 33 44 55 66 77 88 99 10 20 30 40 50 60 70 80 90 12 23 45 56 78 89 55
//#include <stdio.h> 
//int main()
//{
//	void sorts(int *p,int n);
//	int a[5][5],i,j;
//	printf("请输入矩阵数据：\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	sorts(*a,25);
//	printf("处理后的结果是：\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%-3d",a[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//void sorts(int *p,int n)
//{
//	int i,t;
//	int *pmax=p;
//	int *pmin=p;
//	for(i=0;i<n;i++)
//	{
//		if(*pmax<*(p+i))	pmax=p+i;
//		if(*pmin>*(p+i))	pmin=p+i;
//	}
//	t=*pmax;*pmax=*(p+12);*(p+12)=t;
//	t=*pmin;*pmin=*p;*p=t;
//	
//	pmin=p+1;
//	for(i=0;i<n;i++)
//	{
//		if(i==0)	continue;
//		if(*pmin>*(p+i))	pmin=p+i;
//	}
//	t=*pmin;*pmin=*(p+4);*(p+4)=t;
//	
//	pmin=p+1;
//	for(i=0;i<n;i++)
//	{
//		if(i==0||i==4)	continue;
//		if(*pmin>*(p+i))	pmin=p+i;
//	}
//	t=*pmin;*pmin=*(p+20);*(p+20)=t;
//	
//	pmin=p+1;
//	for(i=0;i<n;i++)
//	{
//		if(i==0||i==4||i==20)	continue;
//		if(*pmin>*(p+i))	pmin=p+i;
//	}
//	t=*pmin;*pmin=*(p+24);*(p+24)=t;
//	
//}

/*从主函数中输入10个等长的字符串。用另一函数对它们排序。然后在主函数输出这10个
已排好序的字符串*/

//#include <stdio.h>
//#include <string.h>
//#define M 10
//#define N 10
//
//int main()
//{
//	int fun1(char (*p)[10]);
//	char c[M][N];
//	char (*p)[N];
//	p = c;
//    int i;
//
//	printf("请输入这个10个字符串：\n");
//	for(i = 0;i < M;i++)
//	{
//		scanf("%s",c[i]);
//	}
//	
//	fun1(p);
//	
//	printf("输出结果：\n");
//	for(i = 0;i < M;i++)
//	{
//		printf("%s\n",p[i]);
//	 } 
//}
//
//int fun1(char (*p)[10])
//{
//	int i,j;
//	char t[N];
//	
//	for(i = 0;i < M - 1;i++)
//	{
//		for(j = 0;j < M - 1 - i;j++)
//		{
//			if(strcmp(*(p + j),*(p + j + 1)) > 0)
//			{
//			    strcpy(t,*(p + j));
//			    strcpy(*(p + j),*(p + j + 1));
//			    strcpy(*(p + j + 1),t);
//			} 
//		}
//	}
//}

//#include <stdio.h>
//#include <string.h>
//#define M 10
//#define N 10
//int main()
//{
//	void sorts(char (*q)[M]);
//	char a[N][M];
//	char (*p)[M];
//	int i;
//	p=a;
//	printf("请输入十个字符串：\n");
//	for(i=0;i<N;i++)
//	{
//		scanf("%s",a[i]);
//	}
//	sorts(p);
//	printf("处理后的结果是：\n");
//	for(i=0;i<N;i++)
//	{
//		printf("%s\n",*(p+i));
//	}	
//	return 0;
//}
//void sorts(char (*q)[M])
//{
//	int i,j;
//	char t[M];
//	for(i=0;i<N-1;i++)
//	{
//		for(j=0;j<N-1-i;j++)
//		{
//			if(strcmp(*(q+j),*(q+j+1))>0)
//			{
//				strcpy(t,*(q+j));
//				strcpy(*(q+j),*(q+j+1));
//				strcpy(*(q+j+1),t);
//			}
//		}
//	}	
//}
/*
china
passion
resultin
facuson
sensitive
stress
sense
react
complete
solution*/
//#include <stdio.h>
//#include <string.h>
//#define n 10
//#define m 10
//int main()
//{
//	void sorts(char (*p)[m]);
//	char a[n][m];
//	int i;
//	char (*p)[m];
//	printf("请输入十个字符串：\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%s",a[i]);
//	}
//	p=a;
//	sorts(p);
//	printf("处理后的结果是：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%s\n",*(p+i));
//	}
//	return 0;
//}
//void sorts(char (*p)[m])
//{
//	char t[m];
//	int i,j;
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(strcmp(*(p+i),*(p+j))>0)
//			{
//				strcpy(t,*(p+i));
//				strcpy(*(p+i),*(p+j));
//				strcpy(*(p+j),t);
//			}
//		}
//	}	
//}

//#include <stdio.h>
//int main()
//{
//	void reverse(int *p,int x);
//	int n,i,a[100];
//	printf("请输入要输入的个数：\n");
//	scanf("%d",&n);
//	printf("请输入各个元素：\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	reverse(a,n);
//	printf("处理后的结果是：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}
//void reverse(int *p,int x)
//{
//	int mid,i,t;
//	mid=x/2;
//	for(i=0;i<=mid;i++,x--)
//	{
//		t=*(p+i);
//		*(p+i)=*(p+x-1);
//		*(p+x-1)=t;
//	}
//}

#include <stdio.h>
int main()
{
	void average(float (*p)[5]);
	float score[4][5];
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("请输入第%d个学生成绩：",i+1);	
		for(j=0;j<5;j++)
		{
			scanf("%lf",&score[i][j]);
		}
		printf("\n");
	}
	average(score);
	return 0;
}
void average(float (*p)[5])
{
	float sum=0,aver;
	int j,i;
	for(i=0;i<5;i++)
	{
		for(j=0;j<1;j++)
		{
			sum+=*(*(p+i)+j);
		}
	}
	aver=sum/4.0;
	printf("%5.2lf\n",aver);
}








































