////�ṹ���빲����
////����һ���ṹ��һ����ʽΪ��
////struct �ṹ�� 
//// �� 
//// 		��Ա�б� 
////	�� ;
//struct student
//{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//	float score;
//	char addr[30];
//}



//�ṹ���Ƕ�׶��壨������������գ� 
//���ȶ���һ���ṹ date����month��day��year ������Ա���
 
/***********************************
struct date
{
	int month;
	int day;
	int year;
}

struct 
{
	int num;
	char name[20];
	char sex;
	struct date birthday;
	float score;
}boy1,boy2;

*************************************/ 

//#include <stdio.h>
//
//int main()
//{
//	struct date
//	{
//		int month;
//		int day;
//		int year;
//	};
//	
//	struct 
//	{
//		int num;
//		char name[20];
//		char sex;
//		struct date birthday;
//		float score;
//	}boy1,boy2;
//	
//	printf("please input birthday(yy:)");
//	scanf("%d",&boy1.birthday.year);
//	printf("please input birthday(mm:)");
//	scanf("%d",&boy1.birthday.month);
//	printf("please input birthday(dd)");
//	scanf("%d",&boy1.birthday.day);
//	printf("\n");
//	
//	boy2 = boy1;
//	
//	printf("boy1's birthday is %d-%d-%d\n",boy1.birthday.year,boy1.birthday.month,boy1.birthday.day);
//	printf("boy2's birthday is %d-%d-%d\n",boy2.birthday.year,boy2.birthday.month,boy2.birthday.day);
//	
//	return 0;
//}




/****************************************
*	��ȷ���ýṹ������г�Ա�ķ�ʽ��
*		�ṹ�������.��Ա��
*		���磺student1.num = 100�� 
*****************************************/
//#include <stdio.h>
//
//int main()
//{
//	struct student
//	{
//		int num;
//		char *name;
//		char sex;
//		float score;
//	}boy1,boy2;
//	
//	boy1.num = 007;
//	boy1.name = "jane";
//	
//	printf("please input sex and score\n");
//	scanf("%c %f",&boy1.sex,&boy1.score);
//	
//	boy2 = boy1;
//	
//	printf("number = %d\nname = %s\n",boy2.num,boy2.name);
//	printf("sex = %c\nscore = %f\n",boy2.sex,boy2.score);
//	
//	return 0;
//}



/****************************************
*		�Խṹ������ĳ�Ա��������ͨ����һ�����и�������
*		�����������;������Խ��е����㣩
*		���磺
*		student2.score = student1.score;
*		sum = student1.score + student2.score;
*		student1.age++;
*		++student2.age; 
****************************************/



/**********************************************************
�������ýṹ�������Ա�ĵ�ַ��Ҳ�������ýṹ������ĵ�ַ 

����������������������ṹ�������
scanf("%d %s %c %d %f %s ",&student1);

�ṹ������ĵ�ַ��Ҫ�����������������ݽṹ������ĵ�ַ 
*************************************************************/



/********************
	�ṹ�������ʼ�� 
**********************/

//#include <stdio.h>
//int main()
//{
//	struct student
//	{
//		int num;
//		char *name;
//		char sex;
//		float score;
//	}boy1,boy2 = {102,"jane",'M',98.5};
//	
//	boy1 = boy2;
//	
//	printf("number = %d\nname = %s\nscore = %f\n",boy1.num,boy1.name,boy1.score);
//	printf("\n\n");
//	printf("number = %d\nname = %s\nscore = %f\n",boy2.num,boy2.name,boy2.score);
//	
//	return 0;
//}



/*******************************************
	һ���ṹ��������Դ��һ������ 
********************************************/
//
//#include <stdio.h>
//
//#include <stdlib.h>
//
//#define NUM 3
//
//struct person
//{
//	char name[20];
//	char phone[10];
//};
//
//int main()
//{
//	struct person man[NUM];
//	int i;
//	
//	for(i=0;i<NUM;i++)
//	{
//		printf("input name:\n");
//		gets(man[i].name);
//		printf("input phone:\n");
//		gets(man[i].phone);
//	}
//	
//	printf("\t\tname\t\t\t\tphone\n\n");
//	
//	for(i=0;i<NUM;i++)
//	{
//		printf("%20s\t\t\t%20s\n",man[i].name,man[i].phone);
//	}
//	system("pause");
//	return 0;
//}


/***************************************************************************************
����ṹ������
�Ͷ���ṹ������ķ�����£�ֻ��˵����Ϊ���鼴�ɡ����磺
struct student									struct student
{												{
	int num;										int num;
	char name[20];				Ҳ����				char name[20];
	char sex;					������				char sex;
	int age;										int age;
	float score;									float score;
	char addr[30];									char addr[30];
};												}student[3];
	struct student student[3];					

****************************************************************************/

//���⣺�Ժ�ѡ�˵�Ʊ��ͳ�Ƴ�������3����ѡ�ˣ�ÿ������һ����Ʊ�ĺ�ѡ�˵����֣�Ҫ�����������˵�Ʊ���

//#include <stdio.h>
 

	
	
/*********************************************************
�ṹָ�����˵����һ����ʽ��
struct �ṹ�� *�ṹָ������� 

struct stu *pstu;
*******************************************/	

//#include <stdio.h>
//
//struct stu
//{
//	int num;
//	char *name;
//	char  sex;
//	float score;
//}boy1 = {102,"fishc",'M',78.5};
//
//int main()   
//{
//	struct stu *pstu;
//	pstu = &boy1;
//	
//	printf("number = %d\nname = %s\n",boy1.num,boy1.name);
//	printf("sex = %c\nscore = %f\n\n",boy1.sex,boy1.score);
//	
//	printf("number = %d\nname = %s\n",(*pstu).num,(*pstu).name);
//	printf("sex = %c\nscore = %f\n\n",(*pstu).sex,(*pstu).score);
//	
//	printf("number = %d\nname = %s\n",pstu->num,pstu->name);
//	printf("sex = %c\nscore = %f\n\n",pstu->sex,pstu->score);
//	
//	return 0;
//}	

	
	




































 
