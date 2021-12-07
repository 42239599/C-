////定义结构体 
/*
struct student
{
	int xuehao;
	char name[30];
	char xingbie;
	float chengji;
};
struct student a={001,"houge",'M',99};

a.xuehao=001;
a.name="houge";
a.xingbie='M';
a.chengji=99;
*/ 
////把一个学生的信息（学号：001、姓名：猴哥 、性别M、住址huaguoshan)放在一个结构体变量中，然后输出这个学生的信息
//#include <stdio.h>
//struct student
//{
//	int xuehao;
//	char name[30];
//	char xingbie;
//	char zhuzhi[60];
//}a={001,"houge",'M',"huaguoshan"};
//
//int main()
//{
//	printf("学号：%d\n姓名：%s\n性别：%c\n住址：%s\n",a.xuehao ,a.name ,a.xingbie ,a.zhuzhi );
//	return 0;
// } 

//////输入两个学生的学号、姓名、成绩；输出成绩较高者的学号、姓名和成绩；若二者相等，则输出两个学生的全部信息
//#include <stdio.h>
//struct student
//{
//	int xuehao;
//	char name[30];
//	float chengji;
//}a,b;
//
//int main()
//{
//	printf("请输入第一个学生的学号、姓名和成绩：\n");
//	scanf("%d %s %f",&a.xuehao ,a.name ,&a.chengji );
//	printf("请输入第二个学生的学号、姓名和成绩：\n");
//	scanf("%d %s %f",&a.xuehao ,a.name ,&a.chengji );
//	printf("成绩较高者信息如下：\n");
//	if(a.chengji >b.chengji )
//	{
//		printf("%d\t%s\t%f\t",a.xuehao ,a.name ,a.chengji );
//	 } 
//	else if(a.chengji <b.chengji )
//	{
//		printf("%d\t%s\t%f\t",b.xuehao ,b.name ,b.chengji );
//	}
//	else
//	{
//		printf("%d\t%s\t%f\t",a.xuehao ,a.name ,a.chengji );
//		printf("%d\t%s\t%f\t",b.xuehao ,b.name ,b.chengji );
//	}
//	return 0;
// } 

//////结构体数组
///*
//struct student
//{
//	int xuehao;
//	char name[30];
//	float chengji;
//}xuesheng[3]={{001,"houboshi",99},{002,"shapaozi",90,{003,"shalebaji",98}};
//*/ 
//////有三名学生的三项信息：学号，姓名和成绩；请编程按成绩有高到低输出个学生的信息。
/////////				信息：001，houboshi,99;002,shapaozi,90;003,shalebaji,98;
//#include <stdio.h>
//struct student
//{
//	int xuehao;
//	char name[30];
//	float chengji;
//}xuesheng[3]={{001,"houboshi",99},{002,"shapaozi",90},{003,"shalebaji",98}};
//int main()
//{
//	struct student linshi;
//	int i,j;
//	for(i=0;i<2;i++)
//	{
//		for(j=i+1;j<3;j++)
//		{
//			if(xuesheng[j].chengji >xuesheng[i].chengji )
//			linshi = xuesheng[i];
//			xuesheng[i]=xuesheng[j];
//			xuesheng[j]=linshi;
//		}
//	}
//	printf("排序后的各个学生信息如下：\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%d\n%s\n%f\n",xuesheng[i].xuehao,xuesheng[i].name ,xuesheng[i].chengji );
//	}
//	
//	return 0;
// } 

///////使用结构体变量做函数参数
/////键盘输入五名学生的信息（包括学号，姓名和2门课程的成绩），并输出平均分最高的学生的信息 
//#include <stdio.h>
//struct student
//{
//	int xuehao;
//	char name[30];
//	float fen1;
//	float fen2;
//}sheng[5];
//int main()
//{
//	struct student max(struct student a[]);
//	struct student xueba;	
//	int i;
//	for(i=0;i<5;i++)
//	{
//		printf("请输入第%d学生的学号、姓名和2门成绩:\n",i+1);
//		scanf("%d %s %f %f",&sheng[i].xuehao ,sheng[i].name ,&sheng[i].fen1 ,&sheng[i].fen2 );
//	}
//	xueba=max(sheng);
//	printf("平均分最高的学生的信息如下：\n");
//	printf("学号：%d\t姓名：%s\t2门成绩：%f,%f",xueba.xuehao,xueba.name,xueba.fen1,xueba.fen2);	
//	return 0;
//}
//struct student max(struct student a[])
//{
//	float pingjunfen[5];
//	int i,zuigao;
//	for(i=0;i<5;i++)
//	{
//		pingjunfen[i] = (a[i].fen1+a[i].fen2)/2;
//	}
//	for(zuigao=0,i=1;i<5;i++)
//	{
//		if(pingjunfen[zuigao]<pingjunfen[i])
//		{
//			zuigao = i;
//		}
//	}
//	return (a[zuigao]);
//}

////结构体变量与指针变量
//#include <stdio.h>
//struct student
//{
//	int xuehao;
//	char name[30];
//	char xingbie;
// } a={001,"houge",'M'};
//int main()
//{
//	struct student *p;
//	p=&a;
//	printf("学号：%d\n姓名：%s\n性别：%c\n",p->xuehao ,p->name ,p->xingbie );
//	
//	return 0;
//}










