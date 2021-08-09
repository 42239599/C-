#include <stdio.h>

int main()
{
	int input = 0 ;  
	printf("进入大学\n");
	printf("要努力学习吗?(1/0):>");
	scanf("%d",&input);
	if (input == 1)
		printf("拿到好的office");
	else
		printf("回家");
	return 0 ; 
	 
}

/*
int main()
{
	char arr1[]="abc";
	char arr2[]={'a','b','c'};
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));
	return 0 ;
}
*/
//int main()
//{
//	char arr1[]="abc";//数组
//	//"abc"--'a''b' 'c' '\0' --'\0'字符串的结束标志 
//	char arr2[]={'a','b','c','\o'};
//	printf("%s\n",arr1) ;
//	printf("%s\n",arr2);
//	return 0 ;
//}

//int flioat
//char 
//字符串类型
//int main ()
//{
//"abcd";
//""; 空字符串
//return 0 ;
//} 

//4.枚举常量
//枚举——一一列举
//性别：男。女
//三原色： 红、 黄、绿
//星期：1 2 3 4 5 6 7

//枚举关键字--enum

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color b =BLUE;
//	return  0 ;
//}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//} ;
//MALE,FEMALE,SECRET - 枚举常量 
//int main()
//{
//	enum Sex s FEMALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n",SECRET);//2
//	return 0;
//} 



//3.#define 定义的标识符常量
//#define MAX 10 
//int main()
//{
//	int arr[MAX]={0};
//	printf ("%d\n",MAX);
//	return 0 ;
//}

//int main()
//{
	//2.const - 常属性
	//const 修饰的常变量 
//	const int num =4 ; 
	//1.字面常量
//	 printf("%d",num);
//	return 0 ;
//} 



