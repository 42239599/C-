//#include <stdio.h>
//#include <math.h>
//#include <string.h> 
//int main(void)
//{
//	void conver(char arr[]);
//	char arr[10];
//	printf("请输入十六进制的数：\n");
//	gets(arr);
//	conver(arr);
//	return 0;
//}
//void conver(char arr[])
//{
//	int i,j=0,n=strlen(arr),sum=0;
//	int num[100];
//	for(i=0;i<n;i++)
//	{
//		switch(arr[i])
//		{
//			case 'A':num[j++]=10;break;
//			case 'B':num[j++]=11;break;
//			case 'C':num[j++]=12;break;
//			case 'D':num[j++]=13;break;
//			case 'E':num[j++]=14;break;
//			case 'F':num[j++]=15;break;
//			default:num[j++]=(arr[i]-'0');break;
//		}
//	}
//	for(i=n-1;i>=0;i--)
//	{
//		sum+=num[i]*pow(16,n-1-i);
//	}
//	printf("result:%d\n",sum);
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	void input(char na[][10],int nu[] );
//	void sorts(char na[][10],int nu[] );
//	void search(char na[][10],int nu[],int key);
//	char name[10][10];
//	int num[10],n;
//	input(name,num);
//	sorts(name,num);
//	printf("请输入要查找的工号：\n");
//	scanf("%d",&n);
//	search(name,num,n);
//	return 0;
//}
//void input(char na[][10],int nu[] )
//{
//	
//	int i;
//	for(i=0;i<10;i++)
//	{
//		printf("请输入第%d位职工的姓名和工号：\n",i+1);
//		scanf("%s %d",na[i],&nu[i]);
//	}
//}
//void sorts(char na[][10],int nu[] )
//{
//	int i,j,t;
//	char tm[10];
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//			if(nu[i]>nu[j])
//			{
//				t=nu[i] ;
//				nu[i] =nu[j] ;
//				nu[j] =t;
//				strcpy(tm,na[i]);
//				strcpy(na[i],na[j] );
//				strcpy(na[j],tm);
//			}
//		}
//	}
//	
//	printf("排序如下：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t%s\n",nu[i],na[i]);
//		
//	}
//}
//
//void search(char na[][10],int nu[],int key)
//{
//	int i,left,right,mid;
//	left=0;right=9;
//	while(left<=right)
//	{
//		mid=(left+right)/2;
//		if(nu[mid]>key)
//			right=mid-1;
//		if(nu[mid]<key)
//			left=mid+1;
//		if(nu[mid]==key)
//		{
//			printf("找到了，职工名是%s\n",na[mid]);	
//			break;
//		}
//		
//	}
//	if(nu[mid] != key)
//		printf("输入有误！！\n");
//}

//#include <stdio.h>
//int main(void)
//{
//	int a,b,*p1,*p2;
//
//	printf("请输入两个需要比较的数：\n");
//	scanf("%d %d",&a,&b);
//	p1=&a;p2=&b;	
//	if(a<b)
//	{
//		p1=&b;
//		p2=&a;
//	}
//	printf("大到小的结果是：\n%d\n%d\n",*p1,*p2);
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	void opa(int *q1,int *q2);
//	int a,b,*p1,*p2;
//	printf("请输入两个数字：\n");
//	scanf("%d %d",&a,&b);
//	p1=&a;p2=&b;
//	opa(p1,p2);
//	printf("结果是：%d\t%d\n",*p1,*p2);
//	return 0;
//}
//void opa(int *q1,int *q2)
//{
//	int t;
//	if(*q1<*q2)
//	{
//		t=*q1;
//		*q1=*q2;
//		*q2=t;
//	}
//}


//#include <stdio.h>
//int main(void)
//{
//	void sorts(int *q1,int *q2,int *q3);
//	int a,b,c,*p1,*p2,*p3;
//	printf("请输入3个数：\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p1=&a;p2=&b;p3=&c;
//	sorts(p1,p2,p3);
//	printf("结果是：\n%d\t%d\t%d\t",*p1,*p2,*p3);
//	return 0;
//}
////void sorts(int *q1,int *q2,int *q3)
////{
////	int t;
////	if(*q1<*q2)
////	{
////		t=*q1;
////		*q1=*q2;
////		*q2=t;
////	}
////	if(*q1<*q3)
////	{
////		t=*q1;
////		*q1=*q3;
////		*q3=t;
////	}
////	if(*q2<*q3)
////	{
////		t=*q2;
////		*q2=*q3;
////		*q3=t;
////	}
////}
//void sorts(int *q1,int *q2,int *q3)
//{
//	void swap(int *qt1,int *qt2);
//	if(*q1<*q2)	swap(q1,q2);
//	if(*q1<*q3)	swap(q1,q3);
//	if(*q2<*q3)	swap(q2,q3);
//}
//void swap(int *qt1,int *qt2)
//{
//	int t;
//	t=*qt1;
//	*qt1=*qt2;
//	*qt2=t;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a[10],i,*p;
//	printf("请输入十个数：\n");
////	for(i=0;i<10;i++)
////		scanf("%d",&a[i]);
//	for(p=a;p<(a+10);p++)
//		scanf("%d",p);
//	p=a;
//	printf("输出：\n");
//	for(;p<(a+10);p++)
//		printf("%d\t",*p);
//	
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	void reverse(int *q,int x);
//	int n,a[100],i,*p;
//	printf("请输入输入的数字个数：\n");
//		scanf("%d",&n);
//	printf("请输入数字：\n");
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
//	p=a;
//	reverse(p,n);
//	printf("结果是：\n");
//	for(p=a;p<a+n;p++)
//		printf("%d\t",*p);
////	int mid,j,t;
////	mid=n/2;
////	for(i=0,j=n-1;i<=mid;i++,j--)
////	{
////		t=a[i];
////		a[i]=a[j];
////		a[j]=t;
////	}
////	printf("倒序如下：\n");
////	for(i=0;i<n;i++)
////	{
////		printf("%d\t",a[i]);
////	}
//	return 0;
//}
//void reverse(int *q,int x)
//{
//	int mid,i,j=x-1,t;
//	mid=x/2;
//	for(i=0;i<=mid;i++,j--)
//	{
//		t=*(q+i);
//		*(q+i)=*(q+j);
//		*(q+j)=t;
//	}
//}

//#include <stdio.h>
//int main(void)
//{
//	void sorts(int x[],int n);
//	int a[10],i,*p;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	p=a;
//	sorts(p,10);
//	printf("排序结果如下：\n");
//	for(p=a;p<a+10;p++)
//		printf("%d\t",*p);
//	return 0;
//}
//void sorts(int x[],int n)
//{
//	int i,j,t,k;
//	for(i=0;i<n-1;i++)
//	{
//		k=i;
//		for(j=i+1;j<n;j++)
//		{
//			if(x[k]<x[j])
//			k=j;
//			if(k != i)
//			{
//				t=x[i];
//				x[i]=x[k];
//				x[k]=t;
//			}
//		}
//	}
//}













