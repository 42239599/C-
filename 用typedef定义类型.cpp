////用 typedef 定义类型

////声明 INTEGER为整形
//#include <stdio.h>
//
//typedef int INTEGER;
//
//int main()
//{
//	INTEGER i = 1;
//	int j = 2;
//	
//	printf("%d  %d",i,j);
//	
//	return 0;
// } 




////声明结构类型
//Typedef struct
//{
//	int month;
//	int day;
//	int year;
// } DATE;

//#include <stdio.h>
//
//typedef struct
//{
//	int month;
//	int  day;
//	int year;
//}DATE;
//
//int main()
//{
//	DATE date_one;
//	date_one.month = 12;
//	date_one.day = 31;
//	date_one.year = 2021;
//	
//	printf("%d - %d - %d",date_one.year ,date_one.month ,date_one.day );
//	return 0;
//}




//////声明NUM为整型数组类型
////typedef int NUM[100]
//
//#include <stdio.h>
//
//typedef int NUM[100];
//
//int main()
//{
//	NUM num;
//	printf("%d\n\n",sizeof(num));//400
//	return 0;
// } 



/////声明STRING为字符指针类型
////typedef char* STRING

//#include <stdio.h>
//
//typedef char* P;
//
//int main()
//{
//	P p1;
//	p1 = "i love myself";
//	printf("%s\n\n",p1);
//	
//	return 0;
// } 



///////声明 POINTER 为指向函数的指针类型，该函数返回整型值
//////typedef int  (*POINTER)()
//
//#include <stdio.h>
//
//typedef void (*P)();
//
//
//void fun();
//
//int main()
//{
//	P p1; // void (*p1)();
//	
//	p1 = fun;
//	(p1)();
//	
//	return 0;
// } 
//void fun()
//{
//	printf("i love meself\n\n");
//}






 
