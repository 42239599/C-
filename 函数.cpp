///函数
//调用有参函数 
////编写一程序，要求用户输入四个数字，输出前两个数中最大数，后两个数中最大数，以及四个数中最大数
//#include <stdio.h>
//int main()
//{
//	float max(float x,float y);
//	float a[4];
//	int i;
//	float t,u,v;
//	for(i=0;i<4;i++)
//	{
//		printf("请输入第%d个数字；",i+1);
//		scanf("%f",&a[i]);
//	}
//	t=max(a[0],a[1]);
//	u=max(a[2],a[3]);
//	v=max(t,u);
//	
//	printf("前两个最大值为：%5.2f\n",t);
//	printf("后两个最大值为：%5.2f\n",u);	
//	printf("四数中最大值为：%5.2f\n",v);	
//	return 0;
// } 
//float max(float x,float y)
//{
//	float zuidazhi;
//	if(x>y)
//	{
//		zuidazhi = x;
//	}
//	else
//	{
//		zuidazhi = y ;
//	}
//	return(zuidazhi);
//}

////有两个小组，分别有5名学生和10名学生，请编程输入这些学生的成绩，并调用一个aver函数求这两个小组的平均分
//#include <stdio.h>
//int main()
//{
//	float aver(float a[],int n);
//	float zu1[5],zu2[10];
//	int i;
//	printf("请输入1组的成绩:\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%f",&zu1[i]);
//	}
//	printf("请输入2组的成绩:\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%f",&zu2[i]);
//	}	
//	
//	
//	printf("1组平均分为：%f",aver(zu1,5));
//	printf("2组平均分为：%f",aver(zu2,10));	
//	return 0;
//}
//
//float aver(float a[],int n)
//{
//	int i;
//	float sum=a[0],pingjunfen;
//	for(i=1;i<n;i++)
//	{
//		sum = sum + a[1];
//	}
//	pingjunfen =sum/n;
//	return (pingjunfen);
//	
//}

////调用无参函数 
//请编程输入十个数，并将这十个数由小到大排序
//#include <stdio.h>
//int main()
//{
//	void paixu(int a[],int n);
//	int i,a[10];
//	printf("请输入十个数:\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	paixu(a,10);
//	printf("排序如下：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	return 0;
// } 
//void paixu(int a[],int n)
//{
//	int i,j,t;
//	for(j=0;j<n-1;j++)
//	{
//		for(i=0;i<n-1;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t=a[i];
//				a[i]=a[i+1];
//				a[i+1]=t;
//			}
//		}
//	}//冒泡排序 
//	
//}

//////函数的嵌套
////请输入4个整数，并找出其中最大数 
//#include <stdio.h>
//int main()
//{
//	int max4(int a,int b,int c,int d);
//	int a,b,c,d,zuidashu;
//	printf("请输入四个数字:\n");
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	
//	zuidashu = max4(a,b,c,d);
//	
//	printf("最大值：%d\n",zuidashu);
//	
//	return 0;
//}
//int max4(int a,int b,int c,int d)
//{
//	int max2(int x,int y);
//	return(max2(max2(max2(a,b),c),d));
//}
//int max2(int x,int y)
//{
//	return(x>y?x:y);
//}


////函数的递归
//有5个学生，第五个比第四个大2岁，第四比第三大2岁，第三比第二大2岁，第二比第一大2岁，假设第一个10岁，请编程计算第五个为学生年龄
//
//#include <stdio.h>
//int main()
//{
//	int age(int n);
//	printf("第五个学生年龄为%d\n",age(5));	
//	return 0;
// } 
//int age(int n)
//{
//	int nianling;
//	if(n==1)
//	{
//		nianling =10;
//	}
//	else
//	{
//		nianling = age(n-1)+2;
//		return (nianling);
//	}
//	
//}

////用递归的方法求阶乘 n!
#include <stdio.h>
int main()
{
	int jiecheng(int n);
	int n;
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	
	printf("%d 的阶乘是：%d\n",n,jiecheng(n));
	
	return 0;
 } 
int jiecheng(int n)
{
	int jieguo;
	if(n<0)
	{
		printf("输入的数字不对\n");
	}
	if(n==0 || n==1)
	{
		jieguo = 1;
	}
	else
	{
		jieguo = jiecheng(n-1)*n;
	}
	return (jieguo);
}



 
