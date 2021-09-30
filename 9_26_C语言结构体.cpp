//#include <stdio.h>
////描述一个学生 - 名字 - 年龄- 电话 -性别 
////struct  结构体关键字    stu 结构体标签     struct stu - 结构体类型
// 
//typedef struct stu//定于一个结构体类型 (相当于创建一个类型int)
//{
//	//成员变量 
//	char name[20];
//	short age ;
//	char tele[12] ;
//	char sex[5] ;
//	
//}stu;
//
//int main()
//{
//	stu s1 = {"张三",20,"19924378944","男"};//局部变量 
//	struct stu s2 = {"旺财",30,"19924378943","保密"};//创建结构体变量 
//	
//	return 0;
//}
//#include <stdio.h>
//typedef struct stu//定于一个结构体类型 (相当于创建一个类型int)
//{
//	//成员变量 
//	char name[20];
//	short age ;
//	char tele[12] ;
//	char sex[5] ;	
//}stu;
//void print1(stu tmp)
//{
//	printf("name:  %s\n",tmp.name);
//	printf("age:   %d\n",tmp.age);
//	printf("tele:  %s\n",tmp.tele);
//	printf("sex:   %s\n",tmp.sex);
//}
//void print2(stu* ps)
//{
//	printf("name:  %s\n",ps->name);
//	printf("age :  %d\n",ps->age);
//	printf("tele:  %s\n",ps->tele);
//	printf("sex :  %s\n",ps->sex);
//}
// int main()
// {
// 	stu s = {"李四",40,"1381818888","男"};
// 	//打印结构体数据
//	 
// 	print1(s);//传结构体 
// 	print2(&s);//传地址 
// 	return 0;
// }

