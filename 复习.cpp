//#include <stdio.h> 
//int main(void)
//{
//	int fac(int n);
//	int i;
//	for(i=1;i<=5;i++)
//		printf("%d != %d\n",i,fac(i));
//	return 0;
//}
//int fac(int n)
//{
//	static int f=1;
//	f=f*n;
//	return f;
//	
//}


//#include <stdio.h>
//int main(void)
//{
//	int opa1(int a,int b);
//	int opa2(int a,int b);
//	int a,b,greatest,least;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&a,&b);
//	greatest = opa1(a,b);
//	least = opa2(a,b);
//	printf("最小公倍数是：%d\n最大公约数是：%d\n",least,greatest);
//	return 0;
//}
////最大公约数 
//int opa1(int a,int b)
//{
//	int t,c;
//	 if(a<b)
//	 {
//	 	t=a;
//	 	a=b;
//	 	b=t;
//	 }
//	 c=a%b;
//	 while(c != 0)
//	 {
//	 	a=b;
//	 	b=c;
//	 	c=a%b;
//	 }
//	return b; 
//}
////最小公倍数
//int opa2(int a,int b)
//{
//	int m;
//	m=(a*b)/opa1(a,b);
//	return m;
//}

//#include <math.h>
//#include <stdio.h>
//int main(void)
//{
//	void root1(int a,int b,float p);
//	void root2(int a,int b,float p);
//	void root3(int a,int b,int c);
//	int a,b,c;
//	float p;
//	printf("请输入系数a,b,c\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p=b*b-4*a*c;
//	if(p>0)
//		root1(a,b,p);
//	else if(p==0)
//		root2(a,b,p);
//	else
//		root3(a,b,c);
//	return 0;
//}
//void root1(int a,int b,float p)
//{
//	float x1,x2;
//	x1=(-b+sqrt(p))/2.0*a;
//	x2=(-b-sqrt(p))/2.0*a;
//	printf("x1 = %5.2f\nx2 = %5.2f\n",x1,x2);
//}
//
//void root2(int a,int b,float p)
//{
//	float x1;
//	x1=(-b+sqrt(p))/2.0*a;
//	printf("x1 = x2 = %5.2f\n",x1);
//}
//
//void root3(int a,int b,int c)
//{
//	float x1,x2,p;
//	float x,y;
//	p=4*a*c-b*b;
//	x=(-b)/2.0*a;
//	y=(sqrt(p))/2.0*a;
//	printf("x1 = %5.2f + %5.2fi\nx2 = %5.2f - %5.2fi\n",x,y,x,y);
//}

//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	void Judge(int x);
//	int n;
//	printf("请输入数字：\n");
//	scanf("%d",&n);
//	Judge(n);
//	return 0;
//}
//void Judge(int x)
//{
//	int k,i;
//	k=sqrt(x);
//	for(i=2;i<=k;i++)
//	{
//		if(x%i==0)
//			break;
//	}
//	if(i<=k)
//		printf("不是素数\n");
//	else
//		printf("是素数\n");
//	
//}


//#include <stdio.h>
//int main(void)
//{
//	void sorts(int a[][3]);
//	int i,j;
//	int a[3][3]={1,2,3,4,5,6,7,8,9};
//	printf("原来的排序是：\n"); 
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%4d",a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("整理后是：\n");
//	sorts(a);
//	return 0;
//}
//void sorts(int a[][3])
//{
//	int i,j,t;
//	for(i=0;i<=3;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			if(i!=j)
//			{
//				t=a[i][j];
//				a[i][j]=a[j][i];
//				a[j][i]=t;
//			}
//		}
//	}
//	
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%4d",a[i][j]);
//		}
//		printf("\n");
//	}
//}

































