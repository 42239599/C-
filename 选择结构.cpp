//////选择结构
//#include <stdio.h>
//int main()
//{
//	int year,leap;
//	printf("请输入年份：\n");
//	scanf("%d",&year);
//	if(year%4==0)
//	{
//		if(year%100==0)
//		{
//			if(year%400==0)
//			{
//				leap=1;
//			}
//			else
//			{
//				leap=0;
//			}
//		}
//		else
//		{
//			leap = 1;
//		}
//	} 
//	else
//	{
//		leap=0; 
//	}
//	if(leap=1)
//	{
//		printf("%d年是闰年\n",year);
//	}
//	else
//	{
//		printf("%d年不是闰年\n",year);
//	}
//	return 0;
// } 

//#include <stdio.h>
//int main()
//{
//	int a,b,c,max;
//	printf("请输入三个整数：\n");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a>b)
//	{
//		max=a;
//	}
//	else
//	{
//		max=b;
//	}
//	if(c>max)
//	{
//		max=c;
//	}
//	printf("最大值是：%d\n",max);
//	return 0;
// } 
 
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a;
//	int b;
//	printf("请输入一个小于1000的正数：\n");
//	scanf("%f",&a);
//	if(a<=0 || a>=1000)
//	{
//		printf("您的输入有误，请重新输入：\n");
//	}
//	else
//	{
//		b=(int)(sqrt(a));
//		printf("平方根后的整数部分为：%d\n",b);		
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double x;
//	printf("请输入x的值：\n");
//	scanf("%lf",&x);
//	if(x<1)
//	{
//		printf("对应y的值为：%f\n",x);
//	}
//	else if(x>=1 && x<10)
//	{
//		printf("对应y的值为：%f\n",(2*x-1));
//	}
//	else
//	{
//		printf("对应y的值为：%f\n",(3*x-11));
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x,y;
//	printf("enter x");
//	scanf("%d",&x);
//	y=-1;
//	if(x!=0)
//	{
//		if(x>0)
//		{
//			y=1;
//		}
//	}
//	else
//	{
//		y=0;
//	}
//	printf("x=%d,y=%d\n",x,y);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int b;
//	float a;
//	printf("请输入成绩：\n");
//	scanf("%f",&a);
//	b=(int)(a/10.0);
//	switch(b)
//	{
//		case 10:
//		case 9:printf("A");
//			break;
//		case 8:printf("B");
//			break;		
//		case 7:printf("C");
//			break;		
//		case 6:printf("D");
//			break;		
//		case 5:
//		case 4:
//		case 3:
//		case 2:
//		case 1:
//		case 0:printf("E");
//			break;
//		default :printf("您的输入有误\n");	
//	}	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float p;
//	int g,s,b,q,n;
//	printf("请输入一个不多于5 位的正整数：\n");
//	scanf("%f",&p);
//	if(p>0 && p<10000 && (int)(p) == p)
//	{
//		if(p>0 && p<10)
//		{
//			printf("这是一个一位数\n");
//			g=p;
//			printf("每一个数字是：%d\n",g);
//			printf("逆序是：%d\n",g);	
//		}
//		if(p>=10 && p<100)
//		{
//			printf("这是一个两位数\n");
//			s=(int)(p/10);
//			g=p-s*10;
//			printf("每一个数字分别是：%d %d\n",s,g);
//			n=10*g+s;
//			printf("逆序是：%d\n",n);
//		}
//		if(p>=100 && p<1000)
//		{
//			printf("这是一个三位数\n");
//			b=(int)(p/100);
//			s=(int)((p-100*b)/10);
//			g=p-10*s-100*b;
//			printf("每一个数字分别是：%d %d %d\n",b,s,g);
//			n=g*100+s*10+b;
//			printf("逆序为：%d\n",n);
//		}
//		if(p>=1000 && p<10000)
//		{
//			printf("这是一个四位数\n");
//			q=(int)(p/1000);
//			b=(int)((p-q*1000)/100);
//			s=(int)((p-q*1000-b*100)/10);
//			g=p-q*1000-b*100-s*10;
//			printf("每一位数分别是：%d %d %d %d\n",q,b,s,g);
//			n=g*1000+s*100+b*10+q;
//			printf("逆序为：%d\n",n);
//		}	
//	}
//	else
//	{
//		printf("输入有误，请重新输入\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	float i,j;
//	printf("请输入利润：\n");
//	scanf("%f",&i);
//	if(i<=100000)
//	{
//		j=i*(10.0/100);
//	}
//	if(i>100000 && i<=200000)
//	{
//		j=100000*(10.0/100)+(i-100000)*(7.5/100.0);
//	}
//	if(i>200000 && i<=400000)
//	{
//		j=100000*(10.0/100)+100000*(7.5/100.0)+(i-200000)*(5.0/100.0);
//	}
//	if(i>400000 && i<=600000)
//	{
//		j = 100000*(10.0/100)+100000*(7.5/100.0)+200000*(5.0/100.0)+(i-200000)*(3.0/100.0);
//	}
//	if(i>600000 && i<=1000000)
//	{
//		j = 100000*(10.0/100)+100000*(7.5/100.0)+200000*(5.0/100.0)+200000*(3.0/100.0)+(i-600000)*(1.5/100.0);
//	}
//	if(i>1000000)
//	{
//		j = 100000*(10.0/100)+100000*(7.5/100.0)+200000*(5.0/100.0)+200000*(3.0/100.0)+400000*(1.5/100.0)+(i-1000000)*(1.0/100.0);	
//	}
//	printf("应发奖金是：%f\n",j);
//}


//#include <stdio.h>
//int main()
//{
//	int a,b,c,d,t;
//	printf("请输入四个整数：\n");
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	if(a>b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	if(a>c)
//	{
//		t=a;
//		a=c;
//		c=t;
//	}
//	if(a>d)
//	{
//		t=a;
//		a=d;
//		d=t;
//	}
//	if(b>c)
//	{
//		t=b;
//		b=c;
//		c=t;
//	}
//	if(b>d)
//	{
//		t=b;
//		b=d;
//		d=t;
//	}
//	if(c>d)
//	{
//		t=c;
//		c=d;
//		d=t;
//	}
//	printf("小到大的排序结果是：%d\t%d\t%d\t%d\n",a,b,c,d);
//	return 0;
//}




























