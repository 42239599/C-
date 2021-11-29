////结构体与共用体
////定义一个结构的一般形式为：
////struct 结构名 
//// ｛ 
//// 		成员列表 
////	｝ ;
//struct student
//{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//	float score;
//	char addr[30];
//}



//结构体的嵌套定义（生日里的年月日） 
//首先定义一个结构 date，由month、day、year 三个成员组成
 
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
*	正确引用结构体变量中成员的方式：
*		结构体变量名.成员名
*		例如：student1.num = 100； 
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
*		对结构体变量的成员可以像普通变量一样进行各种运算
*		（根据其类型决定可以进行的运算）
*		例如：
*		student2.score = student1.score;
*		sum = student1.score + student2.score;
*		student1.age++;
*		++student2.age; 
****************************************/



/**********************************************************
可以引用结构体变量成员的地址，也可以引用结构体变量的地址 

但不能用以下语句整体读入结构体变量：
scanf("%d %s %c %d %f %s ",&student1);

结构体变量的地址主要用作函数参数，传递结构体变量的地址 
*************************************************************/



/********************
	结构体变量初始化 
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
	一个结构体数组可以存放一组数据 
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
定义结构体数组
和定义结构体变量的方法相仿，只需说明其为数组即可。例如：
struct student									struct student
{												{
	int num;										int num;
	char name[20];				也可以				char name[20];
	char sex;					这样：				char sex;
	int age;										int age;
	float score;									float score;
	char addr[30];									char addr[30];
};												}student[3];
	struct student student[3];					

****************************************************************************/

//例题：对候选人得票的统计程序。设有3个候选人，每次输入一个得票的候选人的名字，要求最后输出各人得票情况

//#include <stdio.h>
 

	
	
/*********************************************************
结构指针变量说明的一般形式：
struct 结构名 *结构指针变量名 

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

	
	




































 
