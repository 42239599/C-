////预处理 

//#define pi 3.1415926
// 他的作用是指定标识符 pi 来代替数 3.1415926 
//#include <stdio.h>
//
//#define pi 3.1415926
//int main()
//{
//	double s ;
//	int r;
//	
//	printf("please enter the radius :");
//	scanf("%d",&r);
//	
//	s = pi * r * r;
//	
//	printf("%lf\n\n",s);
//	return 0 ;
//}
//

//带参宏定义
//#define m(y)y*y+3*y    定义宏 
//...........
//k = m(5)               宏调用 
//.........
//表达意思：k=5*5+3*5
//带参宏定义中 ，宏名和形参表之间不能有空格出现
//例如： #define max(a,b) (a>b)?a:b
//       #define max (a,b) (a>b)?a:b  //会出现编译错误  

//#include <stdio.h>
//
//#define max(a,b) (a>b)?a:b 
//
//int  main()
//{
//	int x , y , Max ;
//	printf("please input two numbers:");
//	
//	scanf("%d %d",&x,&y);
//	Max = max(x,y);
//	
//	printf("the max is %d\n\n",Max);
//	
//	return 0 ;
//}


//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int SQ (int y);
//	
//	while (i <= 5)
//	{
//		printf("%d\n",SQ(i++));
//	}
//	return 0;
//}
//int SQ(int y)
//{
//	return ( (y) * (y));
//}


////用宏定义替换
//#include <stdio.h>
//
//#define SQ(y) (y)*(y)
//
//int main()
//{
//	int  i = 1 ;
//	
//	while (i<=5)
//	{
//		printf("%d\n",SQ(i++));
//	}
//	return 0;
// } 
//

//#include <stdio.h>
//
//#define ROUND 0
//#define pi 3.1415926
//
//int main()
//{
//	int r ;
//	double s;
//	
//	printf("input a number: ");
//	scanf("%d",&r);
//	
//#if ROUND
//	s = r * r * pi ;
//	printf("area of around is:%6.5f\n\n",s);
//	
//#else
//	s = r * r ;
//	printf("area of square is:%6.5f\n\n",s);
//	return 0;
//	
//#endif
//}




























 
