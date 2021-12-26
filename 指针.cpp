//#include <stdio.h> 
//int main()
//{
//	void exchange(int *q1,int *q2,int *q3);
//	int a,b,c;
//	int *p1,*p2,*p3;
//	printf("请输入3个数字：\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p1=&a;p2=&b;p3=&c;
//	exchange(p1,p2,p3);
//	printf("排序后的结果是：%d	%d	%d\n",a,b,c);
//	return 0;
//}
//void exchange(int *q1,int *q2,int *q3)
//{
//	void swap(int *qt1,int *qt2);
//	if(*q1<*q2)	swap(q1,q2);
//	if(*q1<*q3)	swap(q1,q3);
//	if(*q2<*q3)	swap(q2,q3);
//}
//void swap(int *qt1,int *qt2)
//{
//	int temp;
//	temp=*qt1;
//	*qt1=*qt2;
//	*qt2=temp;
//}

/**************************
有一个整型数组a，有10个元素，要求输出数组中的全部元素 
1、下标法
2、通过数组名计算数组元素地址，找出元素的值 
3、 用指针变量指向数组元素 
*****************************/ 
//下标法
//#include <stdio.h> 
//int main()
//{
//	int a[10],i;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	 } 
//	printf("输出：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//地址法 
//#include <stdio.h>
//int main()
//{
//	int a[10],i;
//	printf("请输入十个数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("请输出各个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",*(a+i));
//	}
//	printf("\n");
//	return 0;
//}
//指针变量指向数组元素
//#include <stdio.h> 
//int main()
//{
//	int a[10],i,*p;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("请输出：\n");
//	for(p=a;p<(a+10);p++)
//	{
//		printf("%d\t",*p);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	int a[10],i,*p=a;
//	printf("请输入十个数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",p++);
//	}
//	p=a;
//	printf("输出结果为：\n");
////	for(i=0;i<10;i++,p++)
////	{
////		printf("%d\t",*p);
////	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",*p++);
//	}
//	printf("\n");
//	return 0;
//}

//原程序 
//#include <stdio.h>
//int main()
//{
//	int a[5],i,j,t,b;
//	printf("请输入5个数：\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	b=5/2;
//	for(i=0;i<=b;i++)
//	{
//		j=5-1-i;
//		t=a[i];
//		a[i]=a[j];
//		a[j]=t;
//	}
//	printf("反序输出为：\n");	
//	for(i=0;i<5;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//数组函数方法 
//#include <stdio.h>
//int main()
//{
//	void fanxu(int a[],int n);
//	int a[5],i;
//	printf("请输入5个数字：\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	fanxu(a,5);
//	printf("倒序为：\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void fanxu(int a[],int n)
//{
//	int i,t,b,j;
//	b=(n-1)/2;
//	for(i=0;i<=b;i++)
//	{
//		j=n-1-i;
//		t=a[i];
//		a[i]=a[j];
//		a[j]=t;
//	}
//	return ;
//}
//数组名作函数参数（指针） 
//#include <stdio.h>
//int main()
//{
//	void daoxu(int *x,int n);
//	int a[10],i;
//	printf("请输入5个数字：\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	daoxu(a,5);
//	printf("倒序后是：\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}
//void daoxu(int *x,int n)
//{
//	int t,*i,*j,m=(n-1)/2,*p;
//	i=x;j=x+n-1;p=x+m;
//	for(;i<=p;i++,j--)
//	{
//		t=*i;
//		*i=*j;
//		*j=t;
//	}
//	return ;
//}
//指针变量作实参 
//#include <stdio.h>
//int main()
//{
//	void daoxu(int *x,int n);
//	int a[5],*p=a,i;
//	printf("请输入5个数字：\n");
//	for(i=0;i<5;i++,p++)
//	{
//		scanf("%d",p);
//	}
//	p=a;
//	daoxu(p,5);
//	printf("倒序输出为：\n");
//	for(p=a;p<a+5;p++)
//	{
//		printf("%d\t",*p);
//	}
//	printf("\n");
//	return 0;
//}
//void daoxu(int *x,int n)
//{
//	int m=(n-1)/2,*i,*j,t,*p;
//	i=x;j=x+n-1;p=x+m;
//	for(;i<p;i++,j--)
//	{
//		t=*i;
//		*i=*j;
//		*j=t;
//	}
//	return ;
//}

//#include <stdio.h> 
//int main()
//{
//	void daoxu(int *x,int n);
//	int a[5],i,*p=a;
//	printf("请输入5个数：\n");
//	for(i=0;i<5;i++,p++)
//	{
//		scanf("%d",p);
//	}
//	p=a;
//	daoxu(p,5);
//	printf("倒序如下：\n");
//	for(p=a;p<a+5;p++)
//	{
//		printf("%d\t",*p);
//	}
//	return 0;
//}
//void daoxu(int *x,int n)
//{
//	int *p,t,*i,*j,m=(n-1)/2;
//	i=x;j=x+n-1;p=x+m;
//	for(i=x;i<p;i++,j--)
//	{
//		t=*i;
//		*i=*j;
//		*j=t;
//	}
//	return;
//}
//选择法 
//#include <stdio.h>
//int main()
//{
//	int a[10],i,j;
//	printf("请输入要排序的10位数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//			if(a[i]>a[j])
//			{
//				int t;
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}
//	printf("排序如下：\n");	
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10],i,j,t;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
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
//	printf("排序如下：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



























