////�� typedef ��������

////���� INTEGERΪ����
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




////�����ṹ����
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




//////����NUMΪ������������
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



/////����STRINGΪ�ַ�ָ������
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



///////���� POINTER Ϊָ������ָ�����ͣ��ú�����������ֵ
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






 
