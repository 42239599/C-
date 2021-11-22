//格式输入输出
//#include <stdio.h>
//
//int main()
//{
//	int a=15;
//	float b=123.1234567;
//	double c=1234567.1234567;
//	char d='p';
//	printf("%d,%5d,%o,%x\n",a,a,a,a);//15,   15,17,f
//	printf("b=%f,%lf,%5.4lf,%e\n",b,b,b,b);//b=123.123459,123.123459,123.1235,1.231235e+002
//	printf("c=%lf,%f,%6.6lf\n",c,c,c);//c=1234567.123457,1234567.123457,1234567.123457
//	return 0;
// } 


//#include <stdio.h>
//
//int main()
//{
//	int a,b,c;
//	printf("input a,b,c\n");
//	scanf("%d%d%d",&a,&b,&c);//1 2 3
//	printf("a=%d,b=%d,c=%d",a,b,c); //a=1,b=2,c=3
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char a,b;
//	printf("input character a and b :\n");
//	scanf("%c %c",&a,&b);
//	printf("%c%c\n",a,b);
//	return 0;
//}
//input character a and b ://在字符型中，空格也是一种字符，对输入有影响！ 
//a b
//ab

//#include <stdio.h>
//
//int main()
//{
//	int a,b;
//	printf("input character a and b :\n");
//	scanf("%d,%d",&a,&b);
//	printf("%d%d\n",a,b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a ;
//	printf("input a number\n");
//	scanf("%d",&a);
//	printf("%ld",a);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	long a ;
//	printf("input a long integer\n");
//	scanf("%ld",&a);
//	printf("%ld",a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	long b;
//	float f;
//	double d;
//	char c;
//	printf("\nint:%d\nlong:%d\nfloat:%d\ndouble:%d\nchar:%d\n",sizeof(a),sizeof(b),sizeof(f),sizeof(d),sizeof(c));
//	return 0;
//}
//int:4
//long:4
//float:4
//double:8
//char:1
