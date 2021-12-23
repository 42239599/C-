//#include <stdio.h> 
//int main()
//{
//	float p(int n,float x);
//	int n;
//	float x;
//	printf("请输入n：\n");
//	scanf("%d",&n);
//	printf("请输入x:\n");
//	scanf("%f",&x);
//	printf("\n%d阶相对应的值为：%f\n",n,p(n,x));	
//	return 0;
//}
//float p(int n,float x)
//{
//	if(n==0)
//		return 1;
//	else if(n==1)
//		return x;
//	else
//		return ((2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x))/n;
//}

//C程序设计第五版（谭浩强）
//章节：第七章 用函数实现模块化程序设计 
//练习7.13 用递归方法求n阶勒让德多项式的值。 
//#include <stdio.h>
// 
//int main()
//{
//	double legendre_polynomial_expansion(int n, double x);
//	int n;
//	double x;
//	printf("请输入n：");
//	scanf("%d", &n);
//	printf("请输入x：");
//	scanf("%lf", &x);
//	printf("\n%d阶勒让德多项式的值为：%lf", n, legendre_polynomial_expansion(n, x));
//	return 0;
//}
// 
//double legendre_polynomial_expansion(int n, double x)
//{ 
//	if(n==0){
//		return 1;
//	}
//	else if(n==1){
//		return x;
//	}
//	else{
//		return ((2*n-1)*x-legendre_polynomial_expansion(n-1, x)-(n-1)*legendre_polynomial_expansion(n-2, x))/n;
//	}
//}


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	void aver_stu(float a[3][4]);
//	void aver_class(float a[3][4]);
//	void Max(float a[3][4]);
//	void fc(float a[3][4]);
//	float a[3][4];
//	int i,j;
//	for(i=0;i<3;i++)
//	{
//		printf("请输入第%d个学生的成绩。\n",i+1);
//		for(j=0;j<4;j++)
//		{
//			scanf("%f",&a[i][j]);
//		}
//	}
//	aver_stu(a);
//	aver_class(a); 
//	Max(a); 
//	fc(a);
//	return 0;
//}
//
////求每位学生平均分 ，每计算完一次，数据要清零 
//void aver_stu(float a[3][4])
//{
//	int i,j;
//
//	for(i=0;i<3;i++)
//	{
//		float sum=0,pj;	
//		for(j=0;j<4;j++)
//		{
//			sum=sum+a[i][j];
//		}
//		pj=sum/4;
//		printf("第%d位学生平均分为%5.2f\n",i+1,pj);
//	}
//}
////求每门课平均分  ，每计算完一次，数据要清零 
//void aver_class(float a[3][4])
//{
//	int i,j;
//	for(j=0;j<4;j++)
//	{
//		float sum=0,pj=0;
//		for(i=0;i<3;i++)
//		{
//			sum=sum+a[i][j];
//		}
//		pj=sum/3;
//		printf("第%d门课的平均分为：%5.2f\n",j+1,pj);
//	}	
//}
////找最大元素以及所在的行和列 
//void Max(float a[3][4])
//{
//	int i,j,h,l;
//	float max=a[0][0];
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			if(a[i][j]>max)
//			{
//				max=a[i][j];
//				h=i+1;
//				l=j+1;
//			}
//		}
//	}
//	printf("是第%d位的第%d门的成绩最高：%f\n",h,l,max);
//}
//void fc(float a[3][4])
//{
//	int i,j;
//	float sum=0,pj[3],x1,x2,fc_1;
//	for(i=0;i<3;i++)
//	{
//		sum=0,pj[i]=0;
//		for(j=0;j<4;j++)
//		{
//			sum=sum+a[i][j];
//		}
//		pj[i]=sum/4;
//	}
//	for(i=0,x1=x2=0;i<3;i++)
//	{
//		x1+=pow(pj[i],2);
//		x2+=pj[i];
//	}
//	
//	fc_1=x1/3-pow(x2/3,2);
//	printf("平均分方差为：%f\n",fc_1);
//}


#include <stdio.h>
int main()
{
	void input(char na[10][20],int nu[10]);
	void sorts(char na[][20],int nu[10]);
	char name[10][20];
	int num[10];
	input(name,num);
	sorts(name,num); 
	
	return 0;
}
//输入 
void input(char na[10][20],int nu[10])
{
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("请输入第%d名职工姓名：\n",i+1);
		scanf("%s",&na[i]);
		printf("请输入第%d名的职工号：\n",i+1);
		scanf("%d",&nu[i]);
	}
}
//排序
void sorts(char na[][20],int nu[10])
{
	int i,j,temp;
	for(j=0;j<9;j++)
	{
		for(i=0;i<9-j;j++)
		{
			
		}
	}
	
 } 











































