//#include <stdio.h>
//int main(void)
//{
//	int max(int x,int y);
//	int min(int x,int y);
//	int add(int x,int y);
//	int a,b,n,c;
//	printf("请输入两个数：\n");
//	scanf("%d%d",&a,&b);
//	printf("请输入您的选择<1、2或者3>：\n");
//	scanf("%d",&n);
//	if(n==1 || n==2 || n==3)
//	{
//		if(n==1)
//		{
//			c=max(a,b);
//			printf("max=%d\n",c);
//		}
//		if(n==2)
//		{
//			c=min(a,b);
//			printf("min=%d\n",c);
//		}
//		if(n==3)
//		{
//			c=add(a,b);
//			printf("add=%d\n",c);
//		}
//	}
//	else 
//	    printf("error!!\n");
//	
//	return 0;
//}
//int max(int x,int y)
//{
//	return (x>y?x:y);
//}
//int min(int x,int y)
//{
//	return (x<y?x:y);
//}
//int add(int x,int y)
//{
//	return x+y;
//}

//#include <stdio.h>
//int main()
//{
//	int fun(int x,int y,int (*p)(int x,int y));
//	int max(int x,int y);
//	int min(int x,int y);
//	int add(int x,int y);
//	int a,b,n;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&a,&b);
//	printf("请输入您的选择<1、2或3>:\n");
//	scanf("%d",&n);
//	if(n==1 || n==2 || n==3)
//	{
//		if(n==1)
//		{
//			fun(a,b,max);
//		}
//		if(n==2)
//		{
//			fun(a,b,min);
//		}
//		if(n==3)
//		{
//			fun(a,b,add);
//		}
//	}
//	else
//		printf("选择有误！！\n");
//	return 0;
//}
//int fun(int x,int y,int (*p)(int x,int y))
//{
//	int result;
//	result = (*p)(x,y);
//	printf("result = %d\n",result);
//}
//int max(int x,int y)
//{
//	return (x>y?x:y);
//}
//int min(int x,int y)
//{
//	return (x<y?x:y);
//}
//int add(int x,int y)
//{
//	return (x+y);
//}


//#include <stdio.h>
//int main(void)
//{
//	float *search(float (*pointer)[4],int n);
//	float score[][4]={{85,64,52,96},{56,87,85,89},{36,99,98,95}};
//	float *p;
//	int i,k;
//	printf("enter the number of student:\n");
//	scanf("%d",&k);
//	printf("the score of NO.%d are:\n",k);
//	p=search(score,k);
//	for(i=0;i<4;i++)
//	{
//		printf("%5.2f\t",*(p+i));
//	}
//	printf("\n");
//	return 0;
//}
//float *search(float (*pointer)[4],int n)
//{
//	float *pt;
//	pt=*(pointer+n);
//	return pt;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	void sort(char *name[],int n);
//	void print(char *name[],int n);
//	char *name[]={"floow me","basic","great wall","fortran","computer design"};
//	int n=5;
//	sort(name,n);
//	print(name,n);
//	return 0;
//	
//}
//void sort(char *name[],int n)
//{
//	char *temp;
//	int i,j,k;
//	for(i=0;i<n-1;i++)
//	{
//		k=i;
//		for(j=i+1;j<n;j++)
//		{
//			if(strcmp(name[k],name[j])>0)
//			k=j;
//			if(k!=i)
//			{
//				temp=name[i];
//				name[i]=name[k];
//				name[k]=temp;
//			}
//		}
//	}
//}
//void print(char *name[],int n)
//{
//	int i;
//	for(i=0;i<n;i++)
//		printf("%s\n",name[i]);
//}

//大到小 
//#include <stdio.h>
//int main(void)
//{
//	int a[10],i,j,k,t;
//	printf("请输入10个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	for(i=0;i<9;i++)
//	{
//		k=i;
//		for(j=i+1;j<10;j++)
//		{
//			if(a[k]<a[j])	k=j;
//			if(k!=i)
//			{
//				t=a[i];
//				a[i]=a[k];
//				a[k]=t;
//			}
//		}
//	}
//	printf("排序如下：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	void sort(char *name[],int n);
//	void print(char *name[],int n);
//	char *name[]={"china","japan","follow","computer","basic"};
//	int n=5;
//	sort(name,5);
//	print(name,5);
//	return 0;
//}
//void sort(char *name[],int n)
//{
//	int i,j,k;
//	char *temp;
//	for(i=0;i<n-1;i++)
//	{
//		k=i;
//		for(j=i+1;j<n;j++)
//		{
//			if(strcmp(name[k],name[j])>0)
//			k=j;
//			if(k!=i)
//			{
//				temp=name[i];
//				name[i]=name[k];
//				name[k]=temp;
//			}
//		}
//	}
//}
//
//void print(char *name[],int n)
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		printf("%s\n",name[i]);
//	}
//}


//#include <stdio.h>
//int main(void)
//{
//	void sorts(int a,int b,int c);
//	int a,b,c;
//	printf("请输入3个数：\n");
//	scanf("%d %d %d",&a,&b,&c);
//	
//	sorts(a,b,c);
//	printf("排序如下：\n%d\t%d\t%d\n",a,b,c);	
//	return 0;
//}
//void sorts(int a,int b,int c)
//{
//	void sort(int x,int y);
//	if(a>b)	sort(a,b);
//	if(a>c)	sort(a,c);
//	if(b>c)	sort(b,c);
//
////	int t;
////	if(a>b)
////	{
////		t=a;
////		a=b;
////		b=t;
////	}
////	if(a>c)
////	{
////		t=a;
////		a=c;
////		c=t;
////	}
////	if(b>c)
////	{
////		t=b;
////		b=c;
////		c=t;	
////	}
////	printf("排序如下：\n%d\t%d\t%d\n",a,b,c);	
//}
//void sort(int x,int y)
//{
//	int t;
//	t=x;
//	x=y;
//	y=t;
//}

//#include <stdio.h>
//int main(void)
//{
//	void sorts(int *q1,int *q2,int *q3);
//	int a,b,c,*p1,*p2,*p3;
//	p1=&a;p2=&b;p3=&c;
//	printf("请输入3个数：\n");
//	scanf("%d %d %d",p1,p2,p3);
//	sorts(p1,p2,p3);
//	printf("排序如下：\n%d\t%d\t%d\n",a,b,c);
//	return 0;
//}
//void sorts(int *q1,int *q2,int *q3)
//{
//	void sort(int *x,int *y);
//	if(*q1>*q2)	sort(q1,q2);
//	if(*q1>*q3)	sort(q1,q3);
//	if(*q2>*q3)	sort(q2,q3);
//}
//void sort(int *x,int *y)
//{
//	int t;
//	t=*x;
//	*x=*y;
//	*y=t;
//}


#include <stdio.h>
int main(void)
{
	int a,b,c;
	int *p1,*p2,*p3;
	printf("请输入3个数：\n");
	scanf("%d %d %d",&a,&b,&c);
	
	
	
	return 0;
}

































