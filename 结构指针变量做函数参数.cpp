/*****************************************
***��һ���ṹ�������ֵ���ݸ�����һ����������3�ַ�����
***1���ýṹ������ĳ�Ա������
***2���ýṹ�������ʵ��
***3����ָ��ṹ������������飩��ָ����ʵ��
******���ṹ������������飩�ĵ�ַ���ݸ��β�
***************************************/
////���⣺��һ���ṹ�����stu���ں�ѧ��ѧ�š�������3�ſγ̵ĳɼ���ͨ�����ú���printf �н��������

//�ṹ���������������
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


//����ָ��ṹ�������ָ����ʵ��
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



 //�������ɣ�ͷָ��+���   ��ʹ�ռ������ӵ��� 
 //ͷָ�룺���һ����ַ���õ�ַָ���һ��Ԫ��
 //��㣺�û���Ҫ��ʵ�����ݺ����ӽڵ��ָ�� 
/***********************************************
���Ը�����ͼ��������:
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


//////����ľ���ʵ�� 
//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//
//#define LEN sizeof(struct student)   // student�ṹ�Ĵ�С
//
//struct student *creat();  			//��������
//void print(struct student *head);   //��ӡ����
//
//struct student
//{
//	int num;
//	float score;
//	struct student *next;
// } ;
// 
// int n; //ȫ�ֱ�����������¼����˶�������
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
//	p1 = p2 = (struct student *)malloc(LEN);  //LEN��student�ṹ�Ĵ�С
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
//			printf("ѧ��Ϊ %d �ĳɼ���: %f\n",p->num,p->score );
//			p = p->next ;
//		}while( p );
//	}
//}





















