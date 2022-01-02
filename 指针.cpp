//#include <stdio.h>
//int main()
//{
//	int max(int,int);
//	int min(int,int);
//	int add(int,int);
//	int fun(int x,int y,int (*p)(int,int));
//	int a,b,n;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&a,&b);
//	printf("请输入选择1,2，或3：\n");
//	scanf("%d",&n);
//	if(n==1)	fun(a,b,max);
//	else if(n==2)	fun(a,b,min);
//	else if(n==3)	fun(a,b,add);
//	else	printf("输入有误！！");
//	return 0;
//}
//int fun(int x,int y,int(*p)(int,int))
//{
//	int result;
//	result=(*p)(x,y);
//	printf("result=%d\t",result);
//}
//int max(int x,int y)
//{
//	int z;
//	if(x>y)	z=x;
//	else	z=y;
//	return z;
//}
//int min(int x,int y)
//{
//	int z;
//	if(x<y)	z=x;
//	else	z=y;
//	return z;
//}
//int add(int x,int y)
//{
//	int z;
//	z=x+y;
//	return z;
//}


//#include <stdio.h>
//int main()
//{
//	void sorts(int x,int y,int z);
//	int a,b,c;
//	printf("请输入三个数字：\n");
//	scanf("%d %d %d",&a,&b,&c);
//	printf("按小到大排序后的顺序是：\n");
//	sorts(a,b,c);
//	return 0;
//}
//void sorts(int x,int y,int z)
//{
//	int t;
//	if(x>y)
//	{
//		t=x;
//		x=y;
//		y=t;
//	}
//	else if(x>z)
//	{
//		t=x;
//		x=z;
//		z=t;
//	}
//	else if(y>z)
//	{
//		t=y;
//		y=z;
//		z=t;
//	}
//	printf("%d %d %d",x,y,z);
//}
//
//#include <stdio.h>
//int main()
//{
//	void sorts(int a[],int n);
//	int a[3],i;
//	printf("请输入三个数字：\n");
//	for(i=0;i<3;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//
//	sorts(a,3);
//	return 0;
//}
//void sorts(int a[],int n)
//{
//	int i,j,t;
//选择法 
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(a[i]>a[j])
//			{
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}
//冒泡法	
//	for(j=0;j<n-1;j++)
//	{
//		for(i=0;i<n-1-j;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t=a[i];
//				a[i]=a[i+1];
//				a[i+1]=t;
//			}
//		}
//	 } 
//	printf("小到大排序如下：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");	
//}
//
//#include <stdio.h>
//int main()
//{
//	void sorts(int *x,int n);
//	int a[3],i,*p=a;
//	printf("请输入3个数：\n");
//	for(i=0;i<3;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	sorts(p,3);
//	printf("小到大排序如下：\n");
//	for(p=a,i=0;i<3;i++)
//	{
//		printf("%d\t",*p);
//		p++;
//	}
//	return 0;
//}
//void sorts(int *x,int n)
//{
//	int i,j,t;
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(*(x+i)>*(x+j))
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
//	void sorts(int *p,int n);
//	int a[3],i,*p=a;
//	printf("请输入3个数字：\n");
//	for(i=0;i<3;i++)
//	{
//		scanf("%d",&a[i]);
//	 } 
//	sorts(p,3);
//	printf("排序如下：\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%d\t",*(p+i));
//	}
//	return 0;
//}
//void sorts(int *p,int n)
//{
//	int i,j,t;
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(*(p+i)>*(p+j))
//			{
//				t=*(p+i);
//				*(p+i)=*(p+j);
//				*(p+j)=t; 
//			}
//		}
//	}
//}

//#include <stdio.h>
//int main()
//{
//	void sorts(int *q1,int *q2,int *q3);
//	int a,b,c;
//	int *p1,*p2,*p3;
//	printf("请输入三个数字：\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p1=&a;p2=&b;p3=&c;
//	sorts(p1,p2,p3);
//	printf("小到大排序后是：\n");
//	printf("%d %d %d",a,b,c);	
//	return 0;
//}
//void sorts(int *q1,int *q2,int *q3)
//{
//	void swap(int *pt1,int *pt2);
//	if(*q1>*q2)	swap(q1,q2);
//	if(*q1>*q3)	swap(q1,q3);
//	if(*q2>*q3)	swap(q2,q3);
//}
//void swap(int *qt1,int *qt2)
//{
//	int t;
//	t=*qt1;
//	*qt1=*qt2;
//	*qt2=t;
//}

//#include <stdio.h>
//int main()
//{
//	void sorts(int *q1,int *q2,int *q3);
//	int a,b,c,*p1,*p2,*p3;
//	printf("请输入三个数字：\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p1=&a;p2=&b;p3=&c;
//	sorts(p1,p2,p3);
//	printf("小到大排序后是：%d %d %d",a,b,c);
//	return 0;
//}
//void sorts(int *q1,int *q2,int *q3)
//{
//	void swap(int *pt1,int *pt2);
//	if(*q1>*q2)	swap(q1,q2);
//	if(*q1>*q3)	swap(q1,q3);
//	if(*q2>*q3)	swap(q2,q3);
//}
//void swap(int *pt1,int *pt2)
//{
//	int t;
//	t=*pt1;
//	*pt1=*pt2;
//	*pt2=t;
// } 

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100],b[100],c[100],t[100];
//	printf("请输入三组字符串：\n");
//	while(gets(a) != NULL)
//	{
//		gets(b);
//		gets(c);
//		if(strcmp(a,b)>0)
//		{
//			strcpy(t,a);
//			strcpy(a,b);
//			strcpy(b,t);
//		}
//		if(strcmp(a,c)>0)
//		{
//			strcpy(t,a);
//			strcpy(a,c);
//			strcpy(c,t);
//		}
//		if(strcmp(b,c)>0)
//		{
//			strcpy(t,b);
//			strcpy(b,c);
//			strcpy(c,t);
//		}
//		printf("按小到大排序后是：\n");
//		puts(a);
//		puts(b);
//		puts(c);
//	}
//	return 0;
//}



























