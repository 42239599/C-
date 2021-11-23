//switch语句

//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("input integer number:  ");
//	scanf("%d",&a);
//	switch(a)
//	{
//		case 1:printf("monday\n");break;
//		case 2:printf("tuesday\n");break;
//		case 3:printf("wednesday\n");break;
//		case 4:printf("thursday\n");break;
//		case 5:printf("friday\n");break;
//		case 6:printf("saturday\n");break;
//		case 7:printf("sunday\n");break;
//		default :printf("error\n");
//	}
//	return 0;
// } 


//计算器
//#include <stdio.h>
//int main()
//{
//	double a,b;
//	char c;
//	printf("please input numder: a+(-,*,/) b\n ");
//	scanf("%lf%c%lf",&a,&c,&b);
//	
//	switch(c)
//	{
//		case '+':printf("%lf\n",a+b);
//		break;
//		case '-':printf("%lf\n",a-b);
//		break;
//		case '*':printf("%lf\n",a*b);
//		break;
//		case '/':printf("%lf\n",a/b);
//		break;
//		default :printf("error");
//		
//	}
//	
//	return 0;
// } 



//输入三个数，输出最大和最小
//#include <stdio.h>
//int main()
//{
//	int a,b,c,max,min;
//	printf("please input three numbers: ");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//	{
//		max = a ,min = b;
//	}
//	else
//	{
//		max = b , min = a;
//	}
//	if(max < c)
//	{
//		max = c;
//	}
//	else
//	if(min > c)
//	{
//		min = c;
//	}
//	printf("max=%d	min=%d",max,min);
//	return 0;
// } 



//输入年份，判断是否为闰年
//能被4整除，不能被100整除,能被400整除，

//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("please input a year: \n");
//	scanf("%d",&year);
//	if(year % 4 == 0)
//	{
//		if(year % 100 == 0)
//		{
//			if(year % 400 == 0)
//			{
//				printf("世纪闰年");
//			}
//			else
//			{
//				printf("不是闰年");
//			}
//		}
//		else
//		{
//			printf("是闰年");
//		}
//	
//	}
//	else
//	{
//		printf("不是闰年");	
//	}
//	
//
//	return 0;
//}



//#include <stdio.h>
//int main()
// {
// 	int a;
// 	printf
//	 ("please input a year: \n");
// 	scanf("%d",&a);
// 	if(a%4 == 0 && a%400 == 0)
//	{
//		printf("是闰年");
//	}
//	
// 	else 
//	if(a%100==0)
// 	{
// 		printf("不是闰年\n");
//	 }
//
// 	return 0;
// }
// 


//运输公司对用户计算运费
//基本运费P，货物重W，距离为S，折扣为D，总运费计算公式 f=p*w*s*(1-d)
//#include <stdio.h>
//int main()
//{
//	double p,w,s,f;
//	printf("请输入： \n");
//	scanf("%lf%lf%lf",&p,&w,&s);
//	
//		if(s<250)
//			{
//			printf("f=%lf",p*w*s*(1-0));	
//			}
//			
//		else if((s>250 || s==250) && s<500 )
//			{	
//			printf("f=%lf",p*w*s*(1-0.02));
//			}
//			
//		else if((s>500 || s==500) && s<1000 )
//			{
//			printf("f=%lf",p*w*s*(1-0.05));
//			}
//			
//		else if((s>1000 || s==1000) && s<2000 )
//			{
//			printf("f=%lf",p*w*s*(1-0.08));
//			}
//			
//		else if((s>2000 || s==2000) && s<3000 )
//			{
//			printf("f=%lf",p*w*s*(1-0.1));
//			}
//			
//		else if(s>3000 || s==3000)
//			{
//			printf("f=%lf",p*w*s*(1-0.15));
//			}
//
//	return 0;
// } 



