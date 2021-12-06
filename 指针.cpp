////调用无参函数 
//请编程输入十个数，并将这十个数由小到大排序
//#include <stdio.h>
//int main()
//{
//	void paixu(int a[],int n);
//	int a[10],i;
//	printf("请输入十个数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	paixu (a,10);
//	printf("排序如下：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void paixu(int a[],int n)
//{
//	int i,j,t;
//	for(j=0;j<n-1;j++)
//	{
//		for(i=0;i<n-1;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t=a[i];
//				a[i]=a[i+1];
//				a[i+1]=t;
//			}
//		}
//	}
//}

///指针变量和普通变量    指针=&变量    *指针=指针指定的变量的值
//int *p,a=5;
//p=&a;//p=5
//int *q,b=10;
//q=&b;//q=10
//int c,d;
//c=*p+1;//c=6
//d=*q+2;// d=12

//输入两个整数，按先大后小的顺序输出这两个数，请用指针来编程
//#include <stdio.h>
//int main()
//{
//	int a,b,*p,*q,*r;
//	printf("请输入两个整数：\n");
//	scanf("%d %d",&a,&b);
//	p=&a;
//	q=&b;
//	if(a<b)
//	{
//		r=p;
//		p=q;
//		q=r;
//	}////地址互换 
//	printf("较大数为:%d\t较小数为：%d\n",*p,*q);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a,b,*p,*q,t;
//	printf("请输入两个数字：\n");
//	scanf("%d %d",&a,&b);
//	p=&a;
//	q=&b;
//	if(a<b)
//	{
//		t=*p;
//		*p=*q;
//		*q=t;
//	}////值互换 
//	printf("较大数为 %d\t较小数为:%d\n",a,b);
//	return 0;
//}


/*************************************
指针变量与一维数组 
指针=&数组名[某数]
*指针=指针指定的变量值
指针+i=&数组名[某数+i] 
*********************************/
//一个整形数组里的5个元素由键盘输入，将每个元素变为原来的两倍后再依次输出
//数组方法
//#include <stdio.h>
//int main()
//{
//	int i,a[5];
//	printf("请输入5个数字：\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//		a[i]=a[i]*2;
//	}
//	printf("两倍后的结果：\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	return 0;;
// } 

//指针数组
//#include <stdio.h>
//int main()
//{
//	int a[5];
//	int i,*p;
//	p=&a[0]; 
//	printf("请输入5个数字:\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",p+i);
//		*(p+i)=*(p+i)*2;
//	}
//	printf("乘积后为：\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d\t",*(p+i));
//	}
//	return 0;
// } 

//指针变量与一维数组相关函数
//函数声明：数组名[]->*p 
//函数解释：数组名[i]->*(p+i) 
//函数使用：函数名->q(使用前需先关联)
///有两个小组，分别有5名和10名学生；请编程输入这些学生的成绩，并调用一个aver函数求两个小组的平均分
////一般做法 
//#include <stdio.h>
//int main()
//{
//	float aver(float a[],int n);
//	int i;
//	float zu1[5],zu2[10];
//	printf("请输入第一组成绩：\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%f",&zu1[i]);
//	}
//	printf("请输入第二组成绩：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%f",&zu2[i]);
//	}	
//	printf("第一组的平均分为：%5.2f\n",aver(zu1,5));
//	printf("第二组的平均分为：%5.2f\n",aver(zu2,10));	
//	return 0;
// } 
//float aver(float a[],int n)
//{
//	int i;
//	float sum = a[0] ,jieguo;
//	for(i=1;i<n;i++)
//	{
//		sum = sum + a[i];
//	}
//	jieguo = sum/n;
//	return (jieguo);	
// } 

//指针
//#include <stdio.h>
//int main()
//{
//	float aver(float *p,int n);
//	float zu1[5],zu2[10],*p,*r;
//	int i;
//	p=&zu1[0];
//	r=&zu2[0];
//	printf("请输入第一组成绩：\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%f",p+i);
//	}
//	printf("请输入第二组成绩：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%f",r+i);
//	}	
//	printf("第一组的平均分为：%5.2f\n",aver(p,5));
//	printf("第二组的平均分为：%5.2f\n",aver(r,10));	
//	return 0;
// } 
//float aver(float *p,int n)
//{
//	int i;
//	float sum = *p ,jieguo;
//	for(i=1;i<n;i++)
//	{
//		sum = sum + *(p+i);
//	}
//	jieguo = sum/n;
//	return (jieguo);	
// } 
 

/*************************************
指针变量与二维数组
指针=&数组名[数a][数b]
*指针=指针指定的变量的值
指针+i=&(数组名[数a][数b]后面第i个元素)

&数组名[数a][数b]--->数组名[数a]+数b------->&a[0][0]=a[0]+0=a[0]
				---->数组名[0]+a*列数+b---->&[2][3]=a[0]+2*4+3=a[0]+11
数组名[数a][数b]---->*(数组名[数a]+数b)---->a[2][3]=2===>*(a[2]+3)=2 
*********************************/
 //已知整形二维数组a[3][4]={1,2,3,4,5,6,6,5,4,3,2,1};
 //请用指针变量输出二维数组各元素的值 
//#include <stdio.h>
//int main()
//{
//	int a[3][4]={1,2,3,4,5,6,6,5,4,3,2,1};
//	int *pn;
//	p = &a[0][0];
//	for(p=&a[0][0];p<&a[3][4];p++)
//	{
//		if(p-&a[0][0] %4 ==0)
//		{
//			printf("\n");
//		}
//		printf("%d\t",*p);
//	}	
//	printf("\n\n");
//	return 0;
// } 

/******************************
指针变量与二维数组相关函数
函数声明：数组名[][某数]-->*p
函数解释：数组名[i][j]---->*(p+i*列数+i) 
函数使用：数组名-->q(使用前要先关联) 
*********************************/
//有3名学生学习4门课，学生一的成绩分别是65,67,70,60；学生二的分别是80,87,90,81；
//学生三的分别是90,99,93,98；将上述成绩输入二维数组中，并通过函数输出三人的总平均分
//一般做法 
//#include <stdio.h> 
//int main()
//{
//	void shuchu(float a[][4],int n);
//	float fenshu[3][4]={65,67,70,60,80,87,90,81,90,99,93,98};
//	shuchu(fenshu,12);
//	return 0;
//}
//void shuchu(float a[][4],int n)
//{
//	float sum = 0;
//	int i,j;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			sum = sum+a[i][j];
//		}
//	}
//	printf("三人的总平均分为%f\n",sum/n);
//}

//指针
//#include <stdio.h>
//int main()
//{
//	void shuchu(float *p,int n);
//	float fenshu[3][4]={65,67,70,60,80,87,90,81,90,99,93,98};
//	float *q;
//	q=&fenshu[0][0];
//	shuchu(q,12);
//	return 0;
// } 
//void shuchu(float *p,int n)
//{
//	float sum=0;
//	int i;
//	for(i=0;i<=11;i++)
//	{
//		sum = sum + *(p+i);
//	}
//	printf("三人平均分为:%f\n",sum/n);
//}


//指针变量指向二维数组的行变量
/**************
定义 (*p)[列数] 
关联 p=二维数组名+某数n 
====>>*(*(p+i)+i)==二维数组名[n+i][j]
int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
*p={1,2,3,4}
*(p+1)={5,6,7,8}
*(*(p+1))=5
*(*(p+1)+1)=6;
**p=1
**************/ 
/*
请用指针变量指向二维数组的行变量的方法，将
1	2	3
4	5	6
7	8	9
 中某行某列的数输出来 
*/
//#include <stdio.h>
//int main()
//{
//	
//	int a[3][3]={1,2,3,4,5,6,7,8,9};
//	int (*p)[3];
//	p=a;
//	int i,j,hang,lie;
//	printf("请输入行和列：\n");
//	scanf("%d %d",&hang,&lie);
//	i=hang-1;
//	j=lie-1;
//	printf("%d行%d列的数为%d",hang,lie,*(*(p+i)+j));
//	
//	return 0;
//}

//用指向二维数组行变量的指针变量做形参
/*********************************
函数声明：数组名[][某数]--->(*p)[某数] 
函数解释：数组名[i][j]-->*(*(p+i)j) 

**************************/
 //有3名学生学习4门课，学生一的成绩分别是65,67,70,60；学生二的分别是80,87,90,81；
//学生三的分别是90,99,93,98；将上述成绩存入二维数组中，并通过函数输出第二个学生的各科成绩
////一般方法
//#include <stdio.h>
//int main()
//{
//	int shuchu(float a[][4],int n);
//	float fenshu[3][4]={65,67,70,60,80,87,90,81,90,99,93,98};
//	shuchu(fenshu,2);
//	return 0;
// } 
//void shuchu(float a[][4],int n)
//{
//	int i;
//	printf("第%d个学生的各科成绩是：\n",n);
//	for(i=0;i<=3;i++)
//	{
//		printf("%f\t",a[n-1][i]);
//	}
//	printf("\n");
//}

//指针变量，形参
//#include <stdio.h>
//int main()
//{
//	void shuchu(float (*p)[4],int n);
//	float fenshu[3][4]={65,67,70,60,80,87,90,81,90,99,93,98};
//	shuchu(fenshu,2);
//	return 0;
// } 
//void shuchu(float (*p)[4],int n)
//{
//	int i;
//	printf("第%d个的学生成绩是：\n");
//	for(i=0;i<=3;i++)
//	{
//		printf("%f\t",*(*(p+n-1)+i));
//	}	
//}





 
