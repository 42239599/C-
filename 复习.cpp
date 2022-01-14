////解ax^2+bx+c=0方程的根 
//#include <math.h>
//#include <stdio.h> 
//int main()
//{
//	int a,b,c,p,q,x1,x2;
//	printf("请输入系数：\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p=b*b-4*a*c;
//	q=sqrt(p);
//	x1=(-b+q)/(2*a);
//	x2=(-b-q)/(2*a);
//	if(p<0)
//	{
//		printf("无实根\n");
//	}
//	if(p==0)
//	{
//		printf("只有一个实根，是：%d\n",x1);
//	}
//	if(p>0)
//	{
//		printf("有两个实根；分别是：%d\t%d\n",x1,x2);
//	}
//	return 0;
//}


////输入两个实数，由小到大的书序输出：
//#include <stdio.h>
//int main()
//{
//	int a,b,t;
//	printf("请输入两个要比较大小的数：\n");
//	scanf("%d %d",&a,&b);
//	if(a>b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	printf("小到大的顺序是：%d\t%d\n",a,b);
//	return 0;
//}

////输入三个数，按照小到大的顺序输出 
//#include <stdio.h> 
//int main()
//{
//	int a,b,c,t;
//	printf("请输入三个数：\n");
//	scanf("%d %d %d",&a,&b,&c);
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
//	if(b>c)
//	{
//		t=b;
//		b=c;
//		c=t;
//	}
//	printf("按照小到大排序如下：%d\t%d\t%d\n",a,b,c);
//	return 0;
//}

////用switch语句处理菜单命令例如从键盘输入一个'A'或者'a'字符，就会执行A操作
////输入A调用函数相加，输入b就调用函数相减 
//#include <stdio.h>
//int main()
//{
//	void he(int x,int y);
//	void ji(int x,int y);
//	int a,b;
//	char ch;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&a,&b);
//	printf("请输入要执行操作的字母：\n");
//	scanf("%c",&ch);
//	switch(ch=getchar())	//注意这里 
//	{
//		case 'a':
//		case 'A':he(a,b);break;
//		case 'b':
//		case 'B':ji(a,b);break;
//		default:printf("error!!!\n");
//	}
//	return 0;
//}
//void he(int x,int y)
//{
//	int c;
//	c=x+y;
//	printf("操作后的结果是：%d\n",c);
//}
//void ji(int x,int y)
//{
//	int c;
//	c=x*y;
//	printf("操作后的结果是：%d\n",c);
//}




















