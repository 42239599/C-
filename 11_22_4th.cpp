//顺序结构程序设计举例

//输入三角形的三边长，求三角形面积 
//已知三角形的三边长a,b,c，则该三角形的面积公式为： area=s*(s-a)*(s-b)*(s-c)后开根号
//其中s=(a+b+c)/2
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	double a,b,c,s,area;
//	scanf("%lf,%lf,%lf",&a,&b,&c);
//	s=(a+b+c)/2.0;
//	area=sqrt(s*(s-a)*(s-b)*(s-c));
//	printf("a=%7.2f,b=%7.2f,c=%7.2f,s=%7.2f",a,b,c,s);
//	printf("area=%7.2f",area);
//	return 0;
// } 
// 3.0,4.0,5.0
//a=   3.00,b=   4.00,c=   5.00,s=   6.00area=   6.00


//求ax^2+bx+c=0方程的根，a,b,c由键盘输入，设b^2-4ac>0.
//#include <stdio.h>
//#include <math.h>
// 
// int main()
// {
// 	double a,b,c,q,p,x1,x2,disc;
// 	scanf("%lf %lf %lf",&a,&b,&c);
// 	disc = b*b-4.0*a*c;
// 	p=(-b)/(2.0*a);
// 	q=sqrt(disc)/(2.0*a);
//	x1 = p+q;
//	x2 = p-q;
//	printf("\nx1=%5.2f\nx2=%5.2f",x1,x2);
// 	return 0;
// }
