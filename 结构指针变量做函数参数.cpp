/*****************************************
***将一个结构体变量的值传递给另外一个函数，有3种方法：
***1、用结构体变量的成员做参数
***2、用结构体变量做实参
***3、用指向结构体变量（或数组）的指针做实参
******将结构体变量（或数组）的地址传递给形参
***************************************/
////例题：有一个结构体变量stu，内含学生学号、姓名和3门课程的成绩。通过调用函数printf 中将他们输出

//结构体变量做函数参数
//#include <stdio.h>
//#include <string.h>
//
//struct student
//{
//	int num;
//	char name[20];
//	float score[3];
//};
//
//void print(struct student);
//int main()
//{
//	struct student stu;
//	
//	stu.num = 8;
//	strcpy(stu.name,"jame");
//	stu.score[0] = 98.5;
//	stu.score[1] = 99.0;
//	stu.score[2] = 99.5;
//	
//	print(stu);
//	
//	return 0;
// } 
//void print(struct student stu)
//{
//	printf("\tnum	:%d\n",stu.num);
//	printf("\tname	:%s\n",stu.name);
//	printf("\tscore_1	:%5.2f\n",stu.score[0]);
//	printf("\tscore_2	:%5.2f\n",stu.score[1]);
//	printf("\tscore_3	:%5.2f\n",stu.score[2]);
//	printf("\n\n");
//}


//改用指向结构体变量的指针做实参
//#include <stdio.h>
//#include <string.h>
//
//struct student
//{
//	int num;
//	char name[20];
//	float score[3];
// } ;
// 
// void print(struct student *);
// 
// int main()
// {
// 	struct student stu;
// 	
// 	stu.num = 8;
// 	strcpy(stu.name ,"jame");
// 	stu.score [0] = 98.5;
// 	stu.score [1] = 99.0;
// 	stu.score [2] = 99.5;
// 	
// 	print(&stu);
// 	return 0;
// }
//void print(struct student *p)
//{
//	printf("\tnum	:%d\n",p->num );
//	printf("\tname  :%s\n",p->name );
//	printf("\tscore_1:%5.2f\n",p->score [0]);
//	printf("\tscore_2:%5.2f\n",p->score [1]);
//	printf("\tscore_3:%5.2f\n",p->score [2]);
//	printf("\n\n");
//}



 //链表的组成：头指针+结点   （使空间分配更加的灵活） 
 //头指针：存放一个地址，该地址指向第一个元素
 //结点：用户需要的实际数据和链接节点的指针 
/***********************************************
尝试根据下图建立链表:
num		10101	10103	10107
score	89.5	90		85
next 	
********************************************/ 
//#include <stdio.h>
//struct student
//{
//	long num ;
//	float score;
//	struct student *next;
//};
//
//int main()
//{
//	struct student a , b , c , *head;
//	
//	a.num = 10101;
//	a.score = 89.5;
//	b.num = 10103;
//	b.score = 90;
//	c.num = 10107;
//	c.score = 85;
//	
//	head = &a;
//	a.next = &b;
//	b.next = &c;
//	c.next = NULL;
//	
//	do
//	{
//		printf("%ld %5.1f\n",head->num ,head->score );
//		head = head->next ;
//	}while( head!=NULL );
//	
//	return 0;
//}


//////链表的具体实现 
//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//
//#define LEN sizeof(struct student)   // student结构的大小
//
//struct student *creat();  			//创建链表
//void print(struct student *head);   //打印链表
//
//struct student
//{
//	int num;
//	float score;
//	struct student *next;
// } ;
// 
// int n; //全局变量，用来记录存放了多少数据
// 
// int main ()
// {
// 	struct student *stu;
// 	stu = creat();
// 	print( stu );
// 	
// 	printf("\n\n");
// 	system("pause");
// 	
// 	return 0;
//  } 
//
//struct student *creat()
//{
//	struct student *head;
//	struct student *p1,*p2;
//	
//	p1 = p2 = (struct student *)malloc(LEN);  //LEN是student结构的大小
//	
//	printf("please enter the num :");
//	scanf("%d",&p1->num ) ;
//	printf("please enter the score :");
//	scanf("%f",&p1->score );
//	
//	head = NULL;
//	n = 0;
//	
//	while( 0 != p1->num )
//	{
//		n++;
//		if( 1 == n)
//		{
//			head = p1;
//		}
//		else
//		{
//			p2->next = p1;
//		}
//		
//		p2 = p1;
//		p1 = (struct student *)malloc(LEN);
//		
//		printf("\nplease enter the num :");
//		scanf("%d",&p1->num );
//		printf("please enter the score :");
//		scanf("%f",&p1->score );
//		
//	}
//	p2->next = NULL;
//	
//	return head;	
//}
//
//void print(struct student *head)
//{
//	struct student *p;
//	printf("\nthere are %drecords!\n\n");
//	
//	p = head;
//	if( head )
//	{
//		do
//		{
//			printf("学号为 %d 的成绩是: %f\n",p->num,p->score );
//			p = p->next ;
//		}while( p );
//	}
//}





















