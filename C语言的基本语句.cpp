
////数学运算 
//给出三角形三遍 a,b,c 的长，利用公式area = s*(s-a)*(s-b)*(s-c)开二次方 
//求该三角形的面积area（公式中的s=(a+b+c)/2）; 
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	double a,b,c;
//	double s;
//	double area;
//	printf("please input 3 numbers:\n");
//	scanf("%lf %lf %lf",&a,&b,&c);
//	
//	s = (a+b+c)/2;
//	area = sqrt (s*(s-a)*(s-b)*(s-c));
//	
//	printf("a=%lf\tb=%lf\tc=%lf\n",a,b,c);
//	printf("area = %lf\n",area);
//	
//	return 0;
//}


//利用x1,x2的求根公式，求ax^2+bx+c=0 的两个根。a b c 由键盘输入，且b^2-4ac>0
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a,b,c;
//	double p,x1,x2;
//	printf("please input 3 numbers:\n");
//	scanf("%lf %lf %lf",&a,&b,&c);
//	p = sqrt(b*b-4.0*a*c);
//	
//	if(p>0)
//	{
//		x1 = (-b+p)/(2.0*a);
//		x2 = (-b-p)/(2.0*a);
//		printf("a=%lf	b=%lf	c=%lf\n",a,b,c);
//		printf("x1 = %5.2f\tx2=%5.2f\n",x1,x2);
//	
//	}
//	else
//	{
//		printf("没有实根");
//	}
//
//	return 0;
// } 


//小明年薪增长率为-10%，请用公式 p=(1+r)^n,计算10年后他的薪资和今年相比增长了多少
//r年增长率，n年数，p为与今年相比的倍数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double p,r,n;
//
//	r = -0.1;
//	n = 10;
//	
//	p = pow(1+r,n);
//	printf("p=%f\n",p);
//	
//	return 0;
// } 

//输入一个大于0小于999的可以带小数的数字，
//并输出其各位，十位，以及百位的数字 
//#include <stdio.h>
//int main()
//{
//	double a;
//	int b,c,d;
//	printf("请输入一个大于零，且小于999的可以带小数的数：\n");
//	scanf("%lf",&a);
//	
//	b =(int)(a/100.0);//百位 
//	c =(int)((a-b*100)/10);//十位
//	d =(int)(a-b*100-c*10);//个位 
//	
//	printf("百位:%d	十位:%d	个位:%d",b,c,d);
//	
//	return 0;
//}


























 
