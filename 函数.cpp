//#include <stdio.h>
//void zb(int key,int a[],int n)
//{
//	int i,mid,low,high,count1=0,count=0;
//	low=0;
//	high=n-1;
//	while(high>=low)
//	{
//		count++;
//		mid=(low+high)/2;
//		if(key<a[mid])
//		{
//			high=mid-1;
//		}
//		else if(key>a[mid])
//		{
//			low=mid+1;
//		}
//		if(key==a[mid])
//		{
//		printf("找到了，共查找了%d次，a[%d]=%d\n",count,mid,key);
//		count1++; 
//		break;	
//		}
//		if(count1==1)
//		{
//			printf("输入有误\n");
//		}	
//	}
//}
//
//int main()
//{
//	void zb(int key,int a[],int n);
//	int a[100],i,n,key;
//	printf("请输入元素个数：\n");
//	scanf("%d",&n);
//	printf("按照从小到大顺序输入：\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("请输入要查找的元素：\n");
//	scanf("%d",&key);
//	zb(key,a,n);
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int  main()
//{
//	void print_star();
//	void print_message();
//	print_star();
//	print_message();
//	print_star();
//	return 0;
//}
//void print_star()
//{
//	printf("************************\n");
//}
//void print_message()
//{
//	printf("how do you do !\n");
//}

//#include <stdio.h>
//int max(int x,int y)
//{
//	int z;
//	z=x>y?x:y;
//	return(z);
//}
//int main()
//{
//	int max(int x,int y);
//	int a,b,c;
//	printf("请输入两个要比较大小的数：\n");
//	scanf("%d %d",&a,&b);
//	c=max(a,b);
//	printf("%d\n",c);
//	return 0;
//}

//#include <stdio.h>
//float add(float x,float y)
//{
//	float z;
//	z=x+y;
//	return z;
//}
//
//int main()
//{
//	float add(float x,float y);
//	float a,b,c;
//	printf("请输入两个数：\n");
//	scanf("%f %f",&a,&b);
//	c=add(a,b);
//	printf("两者的值为：%f\n",c);
//	return 0;
//}

//#include <stdio.h>
//int max4(int a,int b,int c,int d)
//{
//	int max2(int a,int b);
//	int m;
//	m=max2(max2(max2(a,b),c),d);
//	return m;
//}
//int max2(int a,int b)
//{
//	return(a>b?a:b);
//}
//
//int main()
//{
//	int max4(int a,int b,int c,int d);
//	int a,b,c,d,max;
//	printf("请输入4个数字：\n");
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	max=max4(a,b,c,d);
//	printf("四个数中的最大数为：%d\n",max);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int age(int n);
//	printf("第五个学生的年龄是：%d\n",age(5));
//	return 0;
//}
//
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
//int jc(int n)
//{
//	int a;
//	if(n==1)
//		a=1;
//	else
//		a=jc(n-1)*n;
//	return a;		
//}
//
//int main()
//{
//	int jc( int n);
//	int n,c;
//	printf("请输入要阶乘的数：\n");
//	scanf("%d",&n);
//	c=jc(n);
//	printf("结果是：%d\n",c); 
//	
//	return 0;
//}

//#include <stdio.h>
//int jc(int n)
//{
//	int  f;
//	if(n<0)
//		printf("您的输入有误\n");
//	else if(n==0 || n==1)	
//		f=1;
//	else
//		f=jc(n-1)*n;	
//	return f;
//}
//int main()
//{
//	int jc(int n);
//	int n,c;
//	printf("请输入要阶乘的数字：\n");
//	scanf("%d",&n);
//	c=jc(n);
//	printf("%d! = %d",n,c);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a=1, n,i;
//	printf("请输入要阶乘的数：\n");
//	scanf("%d",&n);
//	if(n==1)
//		a=1;
//	else
//	{
//		for(i=n;i>0;i--)
//		{
//			a=a*i;
//		}		
//	}
//	printf("%d! = %d\n",n,a);
//	return 0;
//}

#include <stdio.h>
#include <string.h> 

void hannuo(int n,char one,char two,char three)
{
	void move(char x,char y);
	if(n==1)
		move(one,three);
	else
	{
		hannuo(n-1,one,three,two);
		move(one,three);
		hannuo(n-1,two,one,three);
	}	
}
void move(char x,char y)
{
	printf("%c---->%c\n",x,y);
}
int main()
{
	int n;
	printf("请输入你的数字：\n");
	scanf("%d",&n);
	hannuo(n,'A','B','C');
	return 0;
}

//#include <stdio.h>
//#include <string.h>
///*
// 算法思路：1将 n-1个盘子先放到B座位上
//          2.将A座上地剩下的一个盘移动到C盘上
//          3、将n-1个盘从B座移动到C座上
//*/
////函数声明
//void move(char x, char y);
//void hannuo(int n,char one ,char two,char three)
//{
//  if(n==1)move(one, three); //递归截止条件
//  else
//{
//  hannuo(n-1,one ,three,two);//将 n-1个盘子先放到B座位上
//  move(one,three);//将A座上地剩下的一个盘移动到C盘上
//  hannuo(n-1,two,one,three);//将n-1个盘从B座移动到C座上
// 
//}
//}
//void move(char x,char y)
//{
// printf("%c--->%c\n",x,y);
//}
// 
//int main()
//{
// int n;
// printf("input your number");
// scanf("%d",&n);
// hannuo(n,'A','B','C');
// return 0;
//}














