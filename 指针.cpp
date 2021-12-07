//////指针变量与字符串
//定义字符串a为“i am shuaibi!”，将其复制到zifuchuanb里，并输出字符串b
//#include <stdio.h>
//int main()
//{
//	int i;
//	char a[100];
//	char b[10086];
//	a[100]={'i',' ','a','m',' ','s','h','u','a','i','b','o','y'};
//	for(i=0;a[i] !='\0';i++)
//	{
//		b[i]=a[i];
//	}
//	b[i+1]='\0';
//	printf("字符串是：\n");
//	for(i=0;b[i] != '\0';i++)
//	{
//		printf("%c",b[i]);
//	}
//	printf("\n");
//	return 0;
// } 

////指针变量与函数
///输入两个整数，用max函数求二者中的较大数
//#include <stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int a,b;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&a,&b);
//	printf("较大数为：%d\n",max(a,b));
//	return 0;
// } 
//int max(int x,int y)
//{
//return(x>y?x:y);	
//}

//指针
//#include <stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int a,b,jiaodashu;
//	int (*p)(int ,int );
//	p=max;
//	printf("请输入两个整数：\n");
//	scanf("%d %d",&a,&b);
//	printf("较大数为：%d\n",(*p)(a,b));
//	return 0;
// } 
//int max(int x,int y)
//{
//	return (x>y?x:y);
//}

/////输入两个整数，然后让用户选择1或2；选1时调用函数max，选2调用min函数
//常规做法 
//#include <stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int min(int x,int y);
//	int a,b,xuanze;
//	printf("请输入两个整数：\n");
//	scanf("%d %d",&a,&b);
//	printf("请输入1或2：\n");
//	scanf("%d",&xuanze);
//	if(xuanze == 1)
//	{
//		printf("结果为%d\n",max(a,b));
//	}
//	else if(xuanze == 2)
//	{
//		printf("结果为：%d\n",min(a,b));
//	}
//	else
//	{
//		printf("输入有误\n");
//	}
//	return 0;
// } 
//int max(int x,int y)
//{
//	return(x>y?x:y);
//}
//int min(int x,int y)
//{
//	return(x<y?x:y);
//}

//指针
//#include <stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int min(int x,int y);
//	int (*p)(int,int);
//	int a,b,xuanze;
//	printf("请输入两个整数：\n");
//	scanf("%d %d",&a,&b);
//	printf("请输入1或2：\n");
//	scanf("%d",&xuanze);
//	if(xuanze == 1)
//	{
//		p=max;
//	}
//	else if(xuanze ==2)
//	{
//		p=min;
//	}
//	else
//	{
//		printf("输入有误\n");
//	}
//	printf("结果为:%d",(*p)(a,b));
//	return 0;
// } 
//int max(int x,int y)
//{
//	return (x>y?x:y);
//}
//int min(int x,int y)
//{
//	return (x<y?x:y);
//}


//////返回指针值的函数 
////有3名学生学习4门课，学生一的成绩分别是65,67,70,60；学生二是80,87,90,81；学生三是90,99,93,98；
////用指针函数来编程，要求在用户输入学生编号序号后，能输出该学生的各科成绩
//#include <stdio.h>
//int main()
//{
//	float *chazhao(float (*hang)[4],int n);
//	float a[3][4]={65,67,70,60,80,87,90,81,90,99,93,98};
//	float *p;
//	int xuhao,i;
//	printf("请输入学生序号：\n");
//	scanf("%d",&xuhao);
//	printf("第%d名学生的成绩:\n",xuhao);
//	p = chazhao(a,xuhao-1);
//	for(i=0;i<=3;i++)
//	{
//		printf("%f\t",*(p+1));
//	}
//	printf("\n");
//	return 0;
// } 
//float *chazhao(float (*hang)[4],int n)
//{
//	int *q;
//	q=(hang+n)[0]
//	return (q);
//}

//指针与一维二维数组的数值关系
/********************************
指针=&值
一维数组		二维数组
p=&a[0]			p=&a[0][0]
q=&c[1]			q=&c[1][2]
p=a+0=a			p=a[0]+0=a[0]=*(a+0)=*a
q=c+1			q=c[1]+2=*(c+1)+2

值=*指针
一维数组		二维数组
a[0]=*p			a[0][0]=*p
c[1]=*q			c[1][2]=*q 
*a = *p			*a[0]=*p=>*a=*p
*(c+1)=*q		*(c[1]+2)=*q=>*(*(c+1)+2)

**********************************/ 
















 
