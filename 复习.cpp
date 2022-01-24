//#include <stdio.h> 
//int main()
//{
//	int a[15],i,j,t,key,mid,left,right;
//	printf("input 15 number:\n");
//	for(i=0;i<15;i++)
//		scanf("%d",&a[i]);
//	
//	for(i=0;i<14;i++)
//	{
//		for(j=i+1;j<15;j++)
//		{
//			if(a[i]<a[j])
//			{
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}
//	
//	printf("input inseart number:\n");
//		scanf("%d",&key);
//	
//	int count=0; 
//	left=0;right=14;
//	while(left<=right)
//	{
//		count++;
//		mid=(right+left)/2;
//		if(a[mid]>key)
//			left=mid+1;
//		if(a[mid]<key)
//			right=mid-1;
//		if(a[mid]==key)
//		{
//			printf("get it!!");
//			printf("在第%d个元素,经过%d次找到。\n",mid+1,count); 
//			break;
//		}
//	}
//	if(a[mid] != key)
//		printf("error!!\n");
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char a[10],ch;
//	printf("原文：");
//	gets(a);
//	
//	int i;
//	
//	for(i=0;a[i]!='\0';i++ )
//	{
//		if(a[i]>='a' && a[i]<='z')
//		{
//			a[i]=27-(a[i]-96)+96;
//		}
//		
//		if(a[i]>'A' && a[i]<='Z')
//		{
//			a[i]=27-(a[i]-64)+64;
//		}
//	}
//	
//	printf("译文：");
//	puts(a);
//	return 0;
//}

//输入两个数，调用函数求较大者
//#include <stdio.h> 
//int main(void)
//{
//	int sorts(int x,int y);
//	int i,j,max;
//	printf("input two number:\n");
//	scanf("%d %d",&i,&j);
//	max=sorts(i,j);
//	printf("%d\n",max);
//	return 0;
//}
//int sorts(int x,int y)
//{
//	int z;
//	z=x>y?x:y;
//	return z;
//}

//#include <stdio.h>
//int main(void)
//{
//	double add(double x,double y);
//	double a,b,c;
//	printf("input two number:\n");
//	scanf("%lf %lf",&a,&b);
//	c=add(a,b);
//	printf("result :%2.2f\n",c);
//	return 0;
//}
//double add(double x,double y)
//{
//	double z;
//	z=x+y;
//	return z;
//}


//输入4个数，找最大数
//#include <stdio.h> 
//int main(void)
//{
//	int search(int a[],int x);
//	int a[4],i,max;
//	printf("input 4 numbers:\n");
//	for(i=0;i<4;i++)
//		scanf("%d",&a[i]);
//	max=search(a,4);
//	printf("max=%d\n",max);
//	return 0;
//}
//int search(int a[],int x)
//{
//	int Max=a[0],i;
//	for(i=0;i<x;i++)
//	{
//		if(a[i]>Max)
//			Max=a[i];
//	}
//	return Max;
//}

//int main(void)
//{
//	int search(int a,int b,int c,int d);
//	int a,b,c,d,max;
//	printf("input 4 number:\n");
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	max=search(a,b,c,d);
//	printf("max=%d\n",max);
//	return 0;
//}
//int search(int a,int b,int c,int d)
//{
//	int find(int x,int y);
//	return (find(find(find(a,b),c),d));
//	
//}
//int find(int x,int y)
//{
//	return(x>y?x:y);
//}


//#include <stdio.h>
//int main(void)
//{
//	int age(int n);
//	printf("NO.5 age:%d\n",age(5));
//	return 0;
//}
//int age(int n)
//{
//	int c;
//	if(n==1)
//		c=10;
//	else
//		c=age(n-1)+2;
//	return c;
//}

//#include <stdio.h>
//int main(void)
//{
//	int operation(int n);
//	int n,result;
//	printf("请输入要的阶乘：\n");
//	scanf("%d",&n);
//	result = operation(n);
//	printf("result is %d\n",result);
//	return 0;
//}
//int operation(int n)
//{
//	int factorial;
//	if(n<0)
//		printf("error!!\n");
//	else if(n==1)
//		factorial=1;
//	else
//		factorial=operation(n-1)*n;
//	return factorial;
//}

//#include <stdio.h>
//int main(void)
//{
//	void hannuo(int n,char one,char two,char three);
//	int m;
//	printf("请输入碟子数：\n");
//	scanf("%d",&m);
//	
//	hannuo(m,'a','b','c');
//	
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
//	 } 
//}
//void move(char x,char y)
//{
//	printf("%c--->%c\n",x,y);
//}



