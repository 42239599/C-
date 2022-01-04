//#include <stdio.h> 
//int main()
//{
//	void enter(int *q,int n);
//	void sorts(int *q,int n);
//	void print(int *q,int n);
//	int a[10],*p=a;
//	enter(p,10);
//	sorts(p,10);
//	print(p,10);
//	return 0;
//}
//void enter(int *q,int n)
//{
//	int i;
//	printf("请输入十个数字：\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&*(q+i));
//	}
//}
//void sorts(int *q,int n)
//{
//	int i,t,max,min,MIN,MAX;
//	max=*q;
//	for(i=0;i<n;i++)
//	{
//		if(*(q+i)>=max)
//		{
//			max=*(q+i);
//			MAX=i;	
//		}
//	}
//	
//	min=*q;
//	for(i=0;i<n;i++)
//	{
//		if(*(q+i)<=min)
//		{
//			min=*(q+i);
//			MIN=i;	
//		}
//	}
//	
//	t=*(q+MAX);*(q+MAX)=*(q+n-1);*(q+n-1)=t;
//	t=*(q+MIN);*(q+MIN)=*q;*q=t; 
//}
//void print(int *q,int n)
//{
//	int i;
//	printf("整理后的排序是：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%d ",*(q+i));
//	}
//	printf("\n");
//}

#include <stdio.h>
int main()
{
	void sorts(int *q,int x,int y);
	int a[100],i,n,m,*p=a;
	printf("请输入数字个数：\n");
	scanf("%d",&n);
	printf("请输入各个数字：\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("请输入要后移的位数：\n");
	scanf("%d",&m);
	sorts(p,n,m);
	printf("整理后的数字排序如下：\n");
	for(i=n-m;i<n+m;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void sorts(int *q,int x,int y)
{
	int i,j=x;
	for(i=0;i<(x-y);i++)
	{
		*(q+j)=*(q+i);
		j++;
	}
	x=j;
}

//#include<stdio.h>
//
//int main()
//{
//	int a[100];
//
//	int i,j,n, m;
//
//	printf("输入数字个数以及你想移动的数字个数：");
//	scanf("%d%d", &n, &m);
//	j = n;
//	for (i = 0; i < n; i++)
//	{
//		printf("第%d个数：", i + 1);
//		scanf("%d", &a[i]);
//	}
//	printf("数组为：");
//	for (i = 0; i < n; i++)
//		printf(" %d ", a[i]);
//	printf("变动后的数组为：");
//	for (i = 0; i < n - m; i++)
//	{
//		
//		a[j] = a[i];
//		j++;
//
//	}
//	for (i = n - m; i < j; i++)
//		printf(" %d ", a[i]);
//	getchar();
//	getchar();
//
//}









































