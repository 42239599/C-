//# include <stdio.h>
//int main()
//{
//	void sorts(int a[],int n);
//	int a[10],i;
//	printf("请输入十个数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("排序后如下：\n");
//	sorts(a,10);
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}
//void sorts(int a[],int n)
//{
//	int i,j,t;
//	for(j=0;j<9;j++)
//	{
//		for(i=0;i<9-j;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t=a[i];
//				a[i]=a[i+1];
//				a[i+1]=t;
//			}
//		}
//	}
//	return;
//}

//#include <stdio.h>
//int main()
//{
//	void sorts(int *x,int n);
//	int a[10],*p=a;
//	printf("请输入十个数：\n");
//	for(p=a;p<a+10;p++)
//	{
//		scanf("%d",p);
//	}
//	p=a;
//	sorts(a,10);
//	printf("排序后如下：\n");
//	for(p=a;p<a+10;p++)
//	{
//		printf("%d\t",*p);
//	}
//	return 0;
//}
//void sorts(int *x,int n)
//{
//	int *i,*j,t;
//	i=x,j=x;
//	for(i=x;i<x+n-1;i++)
//	{
//		for(j=i+1;j<x+n;j++)
//		{
//			if(*i<*j)
//			{
//				t=*i;
//				*i=*j;
//				*j=t;
//			}
//		}
//	}
//	return;
//}

//#include <stdio.h>
//int main()
//{
//	void sort(int a[],int n);
//	int a[10],i,*p=a;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",p);
//		p++;
//	}
//	p=a;
//	sort(p,10);
//	printf("排序后是：\n");
//	for(p=a,i=0;i<10;i++)
//	{
//		printf("%d\t",*p);
//		p++;
//	}
//	printf("\n");
//	return 0;
//}
//void sort(int a[],int n)
//{
//	int i,j,t;
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(a[i]<a[j])
//			{
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}	
//}

//#include <stdio.h>
//int main()
//{
//	void sort(int *x,int n);
//	int a[10],i,*p=a;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",p);
//		p++;
//	}
//	p=a;
//	sort(p,10);
//	printf("排序后是：\n");
//	for(p=a,i=0;i<10;i++)
//	{
//		printf("%d\t",*p);
//		p++;
//	}
//	return 0;
//}
//void sort(int *x,int n)
//{
//	int i,j,t;
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(*(x+i)<*(x+j))
//			{
//				t=*(x+i);
//				*(x+i)=*(x+j);
//				*(x+j)=t;
//			}
//		}
//	}	
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][4]={{10,22,33,54},{9,5,6,7},{12,10,20,30}}	;
//	printf("%d",*a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
//	int *p;
//	for(p=a[0];p<a[0]+12;p++)
//	{
//		if((p-a[0])%4==0)	printf("\n");
//		printf("%4d",*p);
//	}
//	int (*p)[4],i,j;
//	p=a;
//	printf("请输入要查找的行和列：\n");
//	scanf("%d %d",&i,&j);
//	printf("a[%d][%d]的值是：%d",i,j,*(*(p+i)+j));
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	void average(float *p,int n);
//	void search(float (*p)[4],int n);
//	float score[3][4]={{74,78,87,90},{98,68,74,88},{99,56,98,70}};
//	average(*score ,12);
//	search(score,2);
//	return 0;
//}
//void average(float *p,int n)
//{
//	float *p_end;
//	float sum=0,aver;
//	p_end=p+n-1;
//	for(;p<=p_end;p++)
//	{
//		sum=sum+(*p);
//	}
//	aver=sum/n;
//	printf("平均分为：%5.2f\n",aver);
//}
//void search(float (*p)[4],int n)
//{
//	int i;
//	printf("the score of NO.%d are:\n",n);
//	for(i=0;i<4;i++)
//	{
//		printf("%10.2f",*(*(p+n)+i));
//	}
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{
//	void average(float *q,int n);
//	float score[3][4]={{75,84,74,96},{87,98,75,84},{74,99,85,76}};
//	float *p;
//	p=&score[0][0];
//	printf("总平均分为：\n");
//	average(p,12);
//	return 0;
//}
//void average(float *q,int n)
//{
//	float sum=0,aver;
//	int i;
//	for(i=0;i<n;i++)
//	{
//		sum+=*(q+i);
//	}
//	aver=sum/n;
//	printf("%5.2f\n",aver);
//}

//#include <stdio.h>
//int main()
//{
//	void average(float *x,int n);
//	float a[3][4]={{75,84,74,96},{87,98,75,84},{74,99,85,76}};
//	float *p;
//	p=&a[0][0];
//	average(p,12);
//	return 0;
//}
//void average(float *x,int n)
//{
//	float sum=0,aver;
//	int i;
//	for(i=0;i<n;i++)
//	{
//		sum+=*(x+i);
//	}
//	aver=sum/n;
//	printf("%5.2f\n",aver);
//}

#include <stdio.h>
int main()
{
	void average(float *p,int n);
	float a[3][4]={{75,84,74,96},{87,98,75,84},{74,99,85,76}};
	average(*a,12);
	return 0;
}
void average(float *p,int n)
{
	float sum=0,aver;
	float *p_end;
	p_end=p+n-1;
	for(;p<=p_end;p++)
	{
		sum+=*(p);
	}
	aver=sum/n;
	printf("%5.2f\n",aver);
}



























