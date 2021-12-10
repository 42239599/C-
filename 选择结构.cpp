///选择语句
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a,b,c,disc,x1,x2,p,q;
//	scanf("%lf %lf %lf",&a,&b,&c);
//	disc = b*b-4*a*c;
//	if(disc<0)
//	{
//		printf("此方程无实根\n");
//	}
//	else
//	{
//		p=-b/(2.0*a);
//		q=sqrt(disc)/(2.0*a);
//		x1=p+q;
//		x2=p-q;
//		printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
//	}
//	
//	return 0;
// } 

//交换大小
//#include <stdio.h>
//int main()
//{
//	float a,b,t;
//	scanf("%f %f",&a,&b);
//	if(a>b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	printf("%5.2f\n%55.2f\n",a,b);
//	
//	return 0;
// } 

////输入三个数a,b,c要求由大到小排序；
//#include <stdio.h>
//int main()
//{
//	int a,b,c,t;
//	printf("请输入三个数：\n");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a<b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	if(a<c)
//	{
//		t=a;
//		a=c;
//		c=t;
//	}
//	if(b<c)
//	{
//		t=b;
//		b=c;
//		c=t;
//	}
//	printf("排序后是：\n");
//	printf("%d\t%d\t%d\t",a,b,c);
//	
//	return 0;
// } 

////判别用year表示的某一年是否为闰年，
///1、能被4整除，但不能被100整除  2、能被400整除
//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("请输入年份:\n");
//	scanf("%d",&year);
//	if(year%4==0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	
//	return 0;
// } 

//
//#include <stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c",&ch);
////	if(ch>='A' && ch<='Z')
////	{
////		ch = ch+32;
////	}
////	printf("%c\n",ch);
////	
//	ch=(ch>='A' && ch<='Z')?(ch+32):ch;
//	printf("%c\n",ch);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("请输入您的数字\n");
//	scanf("%d",&a);
//	if(a<0)
//	{
//		printf("y=-1");
//	}
//	else if(a==0)
//	{
//		printf("y=0");
//	}
//	else
//	{
//		printf("y=1");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char ch;
	printf("请输入您的等级:\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':printf("80分以上\n");
		break;
		case 'B':printf("70~84分\n");
		break;
		case 'C':printf("60~69分\n");
		break;
		case 'D':printf("60分以下\n");
		break;
		default:printf("您的输入有误，请从新输入\n");
		break;
	}
	
	
	return 0;
}












