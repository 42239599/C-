//#include <stdio.h> 
//int main(void)
//{
//	int a,b,*p1,*p2;
//	printf("请输入两个数字：\n");
//	scanf("%d %d",&a,&b);
//	p1=&a;p2=&b;
//	if(*p1<*p2)
//	{
//		p1=&b;
//		p2=&a;
//	}
//	printf("大到小的排序为：%d\t%d\n",*p1,*p2);
//	return 0; 
//}

//指针变量做函数参数
//对输入的两个整数整数大小输出。现用函数处理，而且用指针类型的数据作为函数参数
//#include <stdio.h>
//int main(void)
//{
//	void swap(int *q1,int *q2);
//	int a,b,*p1,*p2;
//	printf("请输入两个数字：\n");
//	scanf("%d %d",&a,&b);
//	p1=&a;p2=&b;
//	swap(p1,p2);
//	return 0;
//}
//void swap(int *q1,int *q2)
//{
//	int *t;
//	if(*q1>*q2)
//	{
//		t=q1;
//		q1=q2;
//		q2=t;
//	}
//	printf("小到大的排序为：%d\t%d",*q1,*q2);
//}


//指针变量作为函数参数，排序3个数
//小到大 
//#include <stdio.h> 
//int main(void)
//{
//	void sorts(int *q1,int *q2,int *q3);
//	int a,b,c,*p1,*p2,*p3;
//	printf("please input three numbers:\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p1=&a;p2=&b;p3=&c; 
//	sorts(p1,p2,p3);
//	return 0;
//}
//void sorts(int *q1,int *q2,int *q3)
//{
//	int *t;
//	if(*q1>*q2)
//	{
//		t=q1;
//		q1=q2;
//		q2=t; 
//	}
//	if(*q1>*q3)
//	{
//		t=q1;
//		q1=q3;
//		q3=t;
//	}
//	if(*q2>*q3)
//	{
//		t=q2;
//		q2=q3;
//		q3=t;
//	}
//	printf("小到大的排序为：%d\t%d\t%d\n",*q1,*q2,*q3);
//}


/**************************
有一个整型数组a，有10个元素，要求输出数组中的全部元素 
1、下标法
2、通过数组名计算数组元素地址，找出元素的值 
3、 用指针变量指向数组元素 
*****************************/

//#include <stdio.h> 
//int main(void)
//{
//	int a[10],i;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("输出结果是：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}

//#include <stdio.h> 
//int main(void)
//{
//	int a[10],i;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("输出：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",*(a+i));
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a[10],i,*p;
//	printf("请输入十个数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	p=a;
//	printf("输出：\n");
//	for(;p<(a+10);p++)
//	{
//		printf("%d\t",*p);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a[5],i,mid,t,j;
//	printf("请输入五个数字：\n");
//	for(i=0;i<5;i++)
//		scanf("%d",&a[i]);
//	mid=5/2;
//	
//	for(i=0,j=4;i<=mid;i++,j--)
//	{
//		t=a[i];
//		a[i]=a[j];
//		a[j]=t;
//	}
//	
//	printf("倒序排序如下：\n");
//	for(i=0;i<5;i++)
//		printf("%d\t",a[i]);
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	void swap(int *q,int x);
//	int a[5],i,*p=a;
//	printf("请输入五个数：\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	swap(p,5);
//	return 0;
//}
//void swap(int *q,int x)
//{
//	int j=x-1,i,t,mid=x/2;
//	for(i=0;i<mid;i++,j--)
//	{
//		t=*(q+i);
//		*(q+i)=*(q+j);
//		*(q+j)=t;
//	}
//	printf("倒序如下：\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d\t",*(q+i));
//	}
//}









