///求三角形面积
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a,b,c,s,area;
//	printf("请输入三角形的三边：\n");
//	scanf("%f %f %f",&a,&b,&c);
//	s=(a+b+c)/2.0;
//	area=sqrt(s*(s-a)*(s-b)*(s-c));
//	printf("面积为 ：%5.2f\n",area);
//	return 0;
// } 

///求a*x^2+bx+c=0方程的根，a,b,c由键盘输入，设b^2-4ac>0
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float x1,x2,p,q,r;
	printf("请输入三个数：\n");
	scanf("%d %d %d",&a,&b,&c);
	r=b*b-4.0*a*c;
	p=-b/2.0*a;
	q=sqrt(r) / 2.0*a;
	if(r>0)
	{
		x1=p+q;
		x2=p-q;
		printf("两个实根分别是:\nx1=%5.2f\nx2=%5.2f\n",x1,x2);		
	}
	else
	{
		printf("没有实根。\n");
	}

	return 0;
 } 











