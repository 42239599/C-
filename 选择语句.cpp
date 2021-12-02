//if语句 
//有一函数y=-1(x<0),0(x=0),1(x>0)
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("please input a number:\n");
//	scanf("%d",&a);
//	if(a>0)
//	{
//		printf("y=1");
//	}
//	else if(a == 0)
//	{
//		printf("y=0");
//	}
//	else
//	{
//		printf("y=-1");
//	}
//
//	return 0;
// } 

//输入两个实数a,b ，按数值从小到大的顺序输出这两个数
//#include <stdio.h>
//int main()
//{
//	double a,b,t;
//	scanf("%lf %lf",&a,&b);
//	if(a>b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	printf("%f,%f",a,b);
//	return 0;
// } 

//输入三个实数a,b,c;按数值从小到大排序
//#include <stdio.h>
//int main()
//{
//	int a,b,c,t;
//	scanf("%d %d %d",&a,&b,&c);
//	
//	if(a>b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if(a>c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if(b>c)
//	{
//		t =b;
//		b =c;
//		c =t;
//	}
//	printf("%d	%d	%d",a,b,c);
//	return 0;
//}
 
//判断某一年是否为闰年（当年份不是100的倍数且是4的倍数时；当年份是100的倍数且是400的倍数时是闰年） 
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("请输入年份：\n");
//	scanf("%d",&a);
//	
//	if((a%100 != 0 && a%4 ==0) || (a%100 == 0 && a%400 == 0) )
//	printf("是闰年");
//	else
//	printf("不是闰年"); 
//	
//	return 0;
// } 

//输入一个字符，判断是否为大写字母，若是将其转换成小写字母；若不是则不转换，然后判断最后得到的字符
//#include <stdio.h>
//int main()
//{
//	char a;
//	printf("请输入一个字符：\n");
//	scanf("%c",&a);
//	
//	if(a>='A' && a<='Z')
//	{
//		a+= 32;
//		printf("%c\n",a); 
//	}
//	else
//	printf("%c\n",a);
//	return 0;
// } 


















