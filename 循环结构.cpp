/////循环结构程序设计
//#include <stdio.h>
//int main()
//{
//	int a=1,sum;
//	while(a<=100)
//	{
//		sum = sum+a;
//		a++;
//	}
//	printf("sum is :%d\n",sum);
//	return 0;
// } 

//#include  <stdio.h>
//int main()
//{
//	int i=1,sum=0;
//	do
//	{
//		sum = sum+i;
//		i++;
//	}
//	while( i<=100);
//	printf("sum is :%d\n",sum);
//	return 0;
// } 

//#include <stdio.h>
//int main()
//{
//	int i=1;
//	float sum,a,aver;
//	for(i=1;i<=1000;i++)
//	{
//		printf("请输入第%d位同学的捐款：\n",i);
//		scanf("%f",&a);
//		sum = sum+a;
//		if(sum>=100000)
//		break;
//	}
//	aver = sum /i;
//	printf("此次捐款人数为：%d\n人均捐款为：%10.2f\n",i,aver);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i=100;
//	for(i=100;i<=200;i++)
//	{
//		if(i%3 == 0)
//			continue;
//		printf("%d\n",i);	
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for(i=1;i<=20;i++)
//	{
//		
//		if(i%5==0)
//		{
//			printf("%d",i);	
//			printf("\n");
//			continue;
//		}
//		printf("%d",i);	
//		printf("\t");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i , p , j;
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			p=i*j;
//			printf("%d\t",p);	
//		}
//		printf("\n");
//	}	
//	return 0;
//}

#include <stdio.h>
#include <math.h>
int main()
{
	int sign = 1;///sign用来表示数值的符号 
	double pi = 0.0,n=1.0,term=1.0;//pi开始代表多项式的值，最后代表π的值，n代表分母 
								   //term代表当前的值 
	while(fabs(term)>=1e-6) //检查当前项term的绝对值是否大于或等于10的-6次方 
	{
		pi = pi + term;//把当前项term累加在pi中 
		n=n+2;//n+2是下一项的分母 
		sign=-sign;//sign代表符号，下一项的符号与上一项的符号相反 
		term=sign/n;//求出下一项的值term 
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	return 0;
}









