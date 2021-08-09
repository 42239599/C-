/*
数据类型

char    字符数据类型 
shart    短整型 
int      整型 
long     长整型 
long long   更长的整型 
float     单精度浮点型 
double    双精度浮点型 

%d - 打印整型
%c - 打印字符
%f - 打印浮点数字 - 打小数
%p - 以地址的形式打印
%x - 打印16进制数字 

*/

//局部变量的作用域是变量所在的局部范围
//全部变量的作用域是整个工程 
//#include <stdio.h>

//int main()
//{
	//计算两个数的和
//	int num1=0;
//	int num2=0;
//	int sum= 0 ;
	//输入数据- 使用输入函数scanf
//	scanf("%d%d", &num1, &num2); //取地址符号& 
	//int sum=0;;
	//c语言语法规定，变量要定义在当前代码块的最前面 
//	sum=num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0 ;
//}

//#include <stdio.h>

//int  mun 2 =20 ;//全局变量-定义在代码块（｛｝）之外的变量 

//int main()
//{
//	int num 1 =10;//局部变量-定义在代码块（｛｝）之内的变量 
//}


//#include <stdio.h>

//int a =10;

//int main ()
//{
	//int a = 100;
	//局部变量和全局变量的名字建议不要相同-容易误会，产生 bug
	//当局部变量和前全局变量的名字相同时，局部变量优先 
//	printf("%d/n",a);
//	return 0 ;
//}






//int main()
//{
	//char ch = 'A';
	//printf("%c\n",ch) ;//%c - 打印字符格式的数据 
	//short int - 短整型
	//int - 整型 
	//int age = 20 ;
	//printf("%d\n",age); //%d - 打印整型十进制数据
	//long -长整型
	//long num = 100;
	//printf("%d\n",num) ;
	//long f = 5.0;
	//printf("%f\n",f);
	//double d = 3.14;
	//printf("%lf\n",d);
	 
	 //printf("%d\n",sizeof(char));//1
	 //printf("%d\n",sizeof(short));//2
	 //printf("%d\n",sizeof(int));//4
	 //printf("%d\n",sizeof(long));//4
	 //printf("%d\n",sizeof(long long));//8
	 //printf("%d\n",sizeof(float));//4
	 //printf("%d\n",sizeof(double));//8
	 
//	return 0 ;
//} 
