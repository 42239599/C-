//#include <stdio.h> 
//int main(void)
//{
//	void sorts(int *q1,int *q2,int *q3);
//	int a,b,c,*p1,*p2,*p3;
//	printf("请输入3个数字：\n");
//	scanf("%d%d%d",&a,&b,&c);
//	p1=&a;p2=&b;p3=&c;
//	sorts(p1,p2,p3);
//	printf("排序如下：\n%d\t%d\t%d\n",*p1,*p2,*p3);
//	return 0;
//}
//void sorts(int *q1,int *q2,int *q3)
//{
//	void sort(int *qt1,int *qt2);
//	if(*q1>*q2)	sort(q1,q2);
//	if(*q1>*q3)	sort(q1,q3);
//	if(*q2>*q3)	sort(q2,q3);
//}
//void sort(int *qt1,int *qt2)
//{
//	int t;
//	t=*qt1;
//	*qt1=*qt2;
//	*qt2=t;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	void sorts(char (*p),int n);
//	char a[3][20];
//	int i;
//	for(i=0;i<3;i++)
//	{
//		printf("请输入%d个句子：\n",i+1);
//		scanf("%s",a[i]);
//	}
//	
//	sorts(a,3);
//	
//	printf("输出：\n");
//	for(i=0;i<3;i++)
//		printf("%s\n",a[i]);
//	return 0;
//}
//void sorts(char (*p),int n)
//{
//	int i,j;
//	char t[100];
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(strcmp((p+i),(p+j))>0)	
//			{
//				strcpy(t,p+i);
//				strcpy(p+i,p+j);
//				strcpy(p+j,t);
//			}	
//			
//		}
//
//	}
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	void sort(char *q1,char *q2);
//	char a[100],b[100],c[100],*p1,*p2,*p3;
//	printf("请输入第一个句子：\n");
//	gets(a);
//	printf("请输入第二个句子：\n");
//	gets(b); 
//	printf("请输入第三个句子：\n");
//	gets(c);
//	p1=a;p2=b;p3=c;
//	sort(p1,p2);
//	sort(p1,p3);
//	sort(p2,p3);
//	printf("排序后：\n%s\n%s\n%s\n",a,b,c);
//	return 0;
//}
//void sort(char *q1,char *q2)
//{
//	char t[100];
//	if(strcmp(q1,q2)>0)
//	{
//		strcpy(t,q1);
//		strcpy(q1,q2);
//		strcpy(q2,t);
//	}
//}


//#include <stdio.h>
////#include <string.h>
////int main(void)
////{
////	void sort(char a[][100]);
////	char a[3][100];
////	int i;
////	for(i=0;i<3;i++)
////	{
////		printf("请输入第%d个句子：\n",i+1);
////		scanf("%s",a[i]);
////	}
////	sort(a[]);
////	printf("输出如下：\n");
////	for(i=0;i<3;i++)
////	{
////		printf("%s\n",a[i]);
////	}
////	return 0;
////}
////void sort(char a[])
////{
////	int i;	
////}
//
//#include <stdio.h>
//int main(void)
//{
//	void enter(int *q,int n);
//	void opa(int *q,int n);
//	void print(int *q,int n);
//	int a[10],*p=a;
//	enter(p,10);
//	opa(p,10);
//	print(p,10);
//	return 0;
//}
//void enter(int *q,int n)
//{
//	int i;
//	printf("请输入十个数：\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",(q+i));
//	}
//	printf("原数组排序为：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%d\t",*(q+i));
//	}
//}
//void opa(int *q,int n)
//{
//	int i,j,maxi,mini,fir_i=0,las_i=n-1,t1,t2;
////	int max=*q;
////	for(i=0;i<n;i++)
////	{
////		if(max<=*(q+i))
////		{
////			max=*(q+i);
////			maxi=i;
////		}
////	}
////	int min=*q;	
////	for(i=0;i<n;i++)
////	{
////		if(min>=*(q+i))
////		{
////			min=*(q+i);
////			mini=i;
////		}
////	}
//	
//	int max=*q;
//	int min=*q;
//	for(i=0;i<n;i++)
//	{
//		if(*(q+i)>=max)
//		{
//			max=*(q+i);
//			maxi=i;
//		}
//		
//		if(*(q+i)<=min)
//		{
//			min=*(q+i);
//			mini=i;
//		}
//		
//	}
//	t1=*(q+fir_i);*(q+fir_i)=*(q+mini);*(q+mini)=t1;
//	t2=*(q+las_i);*(q+las_i)=*(q+maxi);*(q+maxi)=t2;
//	
//}
//void print(int *q,int n)
//{
//	int i;
//	printf("\n输出如下：\n");
//	for(i=0;i<n;i++)
//		printf("%d\t",*(q+i));
//}


////18、
////输入10个整数,将其中最小的数与第一个数对换,把最大的数与最后一个对换，写三个函数：①输入10个数；②进行处理；③输出10个数。
//#include <stdio.h>
//int main()
//{
//	void enter(int *q,int n);//输入函数 
//	void swap(int *q,int n);//处理函数 
//	void print(int *q,int n);//打印函数 
//	int a[10],*p=a;
//	enter(p,10);
//	swap(p,10);
//	print(p,10);
//	return 0;
//}
////输入函数 
//void enter(int *q,int n)
//{
//	int i;
//	printf("请输入十个数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&*(q+i));
//	}
//}
////处理函数 
//void swap(int *q,int n)
//{
//	int max,min,i,t1,t2,MIN,MAX;
//	max=*q;
//	//找出最大值的位置 
//	for(i=0;i<n;i++)
//	{
//		if(*(q+i)>=max)
//		{
//			max=*(q+i);
//			MAX=i;
//		}	
//	}
//	//找出最小值的位置
//	min=*q;	 
//	for(i=0;i<n;i++)
//	{
//		if(*(q+i)<=min)
//		{
//			min=*(q+i);
//			MIN=i;
//		}
//	}
//	//交换 
//	t1=*(q+MAX);*(q+MAX)=*(q+n-1);*(q+n-1)=t1;//大值交换位置 
//	t2=*(q+MIN);*(q+MIN)=*q;*q=t2;			  //小值交换位置 
//}
////打印函数 
//void print(int *q,int n)
//{
//	int i;
//	printf("处理后的结果是：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(q+i));
//	}
//}
//
//#include <stdio.h>
//int main(void)
//{
//	void enter(int a[],int n);
//	void sorts(int a[],int n);
//	void print(int a[],int n);
//	
//	int a[10];
//	enter(a,10);
//	sorts(a,10);
//	print(a,10);
//	return 0;
//}
//void enter(int a[],int n)
//{
//	int i;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	printf("原数组为：\n");
//	for(i=0;i<n;i++)
//		printf("%d\t",a[i]);
//}
//void sorts(int a[],int n)
//{
//	int last=n-1,first=0,i,t1,t2,maxi,mini;
//	int max=a[0];
//	int min=a[0];
//	for(i=0;i<n;i++)
//	{
//		if(max<=a[i])
//		{
//			max=a[i];
//			maxi=i;
//		}
//		if(min>=a[i])
//		{
//			min=a[i];
//			mini=i;
//		}
//	}
//	
//	t1=a[first];a[first]=a[mini];a[mini]=t1;
//	t2=a[last];a[last]=a[maxi];a[maxi]=t2;
//	
//}
//void print(int a[],int n)
//{
//	int i;
//	printf("\n整理后：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//}

//#include <stdio.h>
//int main(void)
//{
//	void sorts(int a[],int n,int m);
//	int a[100],i,n,m;
//	printf("请输入的数字个数：\n");
//	scanf("%d",&n);
//	printf("请输入每个数字：\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("请输入要后移的位置：\n");
//	scanf("%d",&m);
//	sorts(a,n,m);
//	printf("整理后的结果如下：\n");
//	for(i=m;i<m+n;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}
//void sorts(int a[],int n,int m)
//{
//	int i;
//	for(i=0;i<m;i++,n++)
//	{
//		a[n]=a[i];
//	}
//}

//#include <stdio.h>
//int main(void)
//{
//	void sort(int a[],int n,int m);
//	int a[100],n,m,i;
//	printf("请输入数字个数：\n");
//		scanf("%d",&n);
//	printf("请输入各个数字：\n");
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
//	printf("请输入要后移的位数：\n");
//		scanf("%d",&m);
//	
//	sort(a,n,m);
//	
//	printf("\n输出的结果是：\n");
//	for(i=n-m;i<m+n;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}
//void sort(int a[],int n,int m)
//{
//	int i;
//	for(i=0;i<n-m;i++,n++)
//	{
//		a[n]=a[i];
//	}
//}
























