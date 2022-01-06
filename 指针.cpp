//#include <stdio.h> 
//int main()
//{
//	int a[100],i,n,m=0,k=0,*p=a;
//	printf("请输入数字：\n");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		a[i]=i+1;
//	}
//	i=0;
//	while(m<n-1)
//	{
//		if(*(p+i) != 0)
//		{
//			k++;
//		}
//		if(k==3)
//		{
//			*(p+i)=0;
//			k=0;m++;
//		}
//		i++;
//		if(n==i)
//		{
//			i=0;
//		}
//	}
//	while(*p == 0)
//	{
//		p++;
//	}
//	printf("%d\n",*p);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100],*p=a;
//	int n,i,b_n=0,s_n=0,m_n=0,p_n=0,o_n=0;
//	printf("请随便输入字符串：\n");
//	gets(a);
//	n=strlen(a);
//	for(i=0;i<n;i++)
//	{
//		if(*(p+i)>='a' && *(p+i)<='z')
//		{
//			s_n++;
//		}
//		else if(*(p+i)>='A' && *(p+i)<='Z')
//		{
//			b_n++;
//		}
//		else if(*(p+i)>='0' && *(p+i)<='9')
//		{
//			m_n++;
//		}
//		else if(*(p+i) == ' ')
//		{
//			p_n++;
//		}
//		else
//		{
//			o_n++;
//		}
//	}
//	printf("大写：%d\n",b_n);
//	printf("小写：%d\n",s_n);
//	printf("数字：%d\n",m_n);
//	printf("空格：%d\n",p_n);
//	printf("其他：%d\n",o_n);
//	return 0;
//}
//#include <stdio.h>
//void trans(int (*s)[3], int x, int y);        //定义转置函数
//int main()
//{
//    int a[3][3], *p, i, j;
//    for (p=*a, printf("Please enter array: "); p<*a+9; scanf("%d", p++));    //输入矩阵元素
//    trans(a, 3, 3);                                                          //调用转置函数
//    for (i=0; i<3; printf("\n"), i++)                                        //输出矩阵
//        for (j=0; j<3; printf("%d ", *(*(a+i)+j++)));
//    return 0;
//}
////转置函数
//void trans(int (*s)[3], int x, int y)
//{
//    int i, j, t;
//    for (i=0; i<x; i++)
//        for (j=0; j<y; i!=j&&i<j ? t=*(*(s+i)+j), *(*(s+i)+j)=*(*(s+j)+i), *(*(s+j)+i)=t, j++ : j++);
//}

//#include<stdio.h>
//void convert(int (*p)[3])
//{
//	int i,j,temp;
//    for(i=0;i<3;i++)
//	 for(j=0;j<i;j++)
//	 {
// 		temp=*(*(p+i)+j);
// 		*(*(p+i)+j)=*(*(p+j)+i);
// 		*(*(p+j)+i)=temp;
// 	 }
//}
//int main()
//{
//	int a[3][3];
//	int (*p)[3],i,j,temp;
//	p=a;
//	for(i=0;i<3;i++)
//	 for(j=0;j<3;j++)
//	 scanf("%d",&a[i][j]);
//    convert(p);
//    printf("after convert:\n");
//    for(i=0;i<3;i++)
//     {
//     	for(j=0;j<3;j++)
//	    printf("%d ",*(*(p+i)+j));
//     	printf("\n");
//     } 
//	 return 0; 
//}

//#include <stdio.h>
//int main()
//{
//	void trans(int (*p)[3]);
//	int a[3][3],i,j;
//	int (*q)[3];
//	printf("请输入数组：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("输入的原数组如下：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%-5d",a[i][j]);
//			if(j == 2)
//			printf("\n");
//		}
//	}
//	q=a;
//	trans(q); 
//	printf("整理后的结果是：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%-5d",a[i][j]);
//			if(j == 2)
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//void trans(int (*p)[3])
//{
//	int i,j,t;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<i;j++)
//		{
//				t=*(*(p+i)+j);
//				*(*(p+i)+j)=*(*(p+j)+i);
//				*(*(p+j)+i)=t;
//		}
//	}
//}

//#include <stdio.h>
//int main()
//{
//	void trans(int (*q)[3]);
//	int a[3][3],i,j;
//	int (*p)[3];	//定义二维指针数组
//	p=a;			//指针指向二维数组首元素地址 
//	printf("请输入矩阵：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&*(*(p+i)+j));
//		}
//	}
//	//输出原矩阵
//	printf("愿矩阵为：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%-5d",*(*(p+i)+j));
//		}
//		printf("\n");
//	 } 
//	trans(p);		//设计函数
//	printf("调整后的结果是：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%-5d",a[i][j]);
//		}
//		printf("\n");
//	 } 
//	return 0;
//}
// 
//void trans(int (*q)[3])
//{
//	int t,i,j;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<i;j++)
//		{
//			t=*(*(q+i)+j);
//			*(*(q+i)+j)=*(*(q+j)+i);
//			*(*(q+j)+i)=t;
//		}
//	}
// } 

//10 20 30 40 50 60 70 80 90 1 2 3 4 5 6 7 8 9 11 22 33 44 55 66 77
//#include <stdio.h>
//int main()
//{
//	void trans(int (*p)[5]);
//	int a[5][5],i,j;
//	int (*q)[5];
//	q=a;
//	printf("请输入一个5*5的整型矩阵：\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("原矩阵是：\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%-5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	trans(q);
//	printf("整理后是：\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%-5d",*(*(q+i)+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//void trans(int (*p)[5])
//{
//	int max,min[4],i,j,ti,tj;
//	void swap(int *,int *);	//定义交换函数 
////找出最大数 
//	max=*(*(p+2)+2);
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(*(*(p+i)+j)>max)
//			{
//				max=*(*(p+i)+j);
//				ti=i;tj=j;
//			}
//		}
//	}
//	if(!(ti==2 && tj==2))
//	swap(*(p+2)+2,*(p+ti)+tj);
////找出第一个最小数 
//	min[0]=**p;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(*(*(p+i)+j)<min[0])
//			{
//					min[0]=*(*(p+i)+j);
//					ti=i;tj=j;
//			}
//		}
//	}
//	if(**p != min[0])
//	swap(*p,*(p+ti)+tj);
////找出第二个最小数	
//	min[1]=*(*(p)+4);
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(!(i==0 && j==0))
//			{
//				if(*(*(p+i)+j)<min[1])
//				{
//					min[1]=*(*(p+i)+j);
//					ti=i;tj=j;
//				}
//			}
//		}
//	}
//	if(*(*(p)+4) != min[1])
//	swap(*(p)+4,*(p+ti)+tj);
////找出第三个最小数 
//	min[2]=*(*(p+4));
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(!(i==0 && j==0) && !(i==0 && j==4))
//			{
//				if(*(*(p+i)+j)<min[2])
//				{
//					min[2]=*(*(p+i)+j);
//					ti=i;tj=j;
//				}
//			}
//		}
//	}
//	if(*(*(p+4)) != min[2])
//	swap(*(p+4),*(p+ti)+tj);
////找出第四个最小数	
//	min[3]=*(*(p+4)+4);
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(!(i==0 && j==0)&& !(i==0 && j==4) && !(i==4 && j==0))
//			{
//				if(*(*(p+i)+j)<min[3])
//				{
//					min[3]=*(*(p+i)+j);
//					ti=i;tj=j;
//				}
//			}
//		}
//	}
//	if(*(*(p+4)+4) != min[3])
//	swap(*(p+4)+4,*(p+ti)+tj);
//}
////交换函数 
//void swap(int *a,int *b)
//{
//	int t;
//	t=*a;
//	*a=*b;
//	*b=t;
//}
//10 20 30 40 50 60 70 80 90 1 2 3 4 5 6 7 8 9 11 22 33 44 55 66 77
//#include <stdio.h> 
//int main()
//{
//	void sorts(int *p,int x,int y);
//	int a[5][5],i,j;
//	printf("请输入5*5的矩阵：\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("矩阵如下：\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%-5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	sorts(*a,5,5);
//	printf("整理后如下：\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%-5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void sorts(int *p,int x,int y)
//{
//	int i,t,*pmax,*pmin;
//	pmax=p;
//	pmin=p;
//	for(i=0;i<x*y;i++)
//	{
//		if(*(p+i)>*pmax)	pmax=p+i;
//		if(*(p+i)<*pmin)	pmin=p+i;
//	}
//	t=*pmax;*pmax=*(p+12);*(p+12)=t;
//	t=*pmin;*pmin=*p;*p=t;
//	
//	pmin=p+1;
//	for(i=0;i<x*y;i++)
//	{
//		if(i==0)	continue;
//		if(*(p+i)<*pmin)
//		pmin=p+i;
//	}
//	t=*pmin;*pmin=*(p+4);*(p+4)=t;
//	
//	pmin=p+1;
//	for(i=0;i<x*y;i++)
//	{
//		if(i==0 ||i==4)	continue;
//		if(*pmin>*(p+i))
//		pmin=p+i;
//	}
//	t=*pmin;*pmin=*(p+20);*(p+20)=t;
//	
//	pmin=p+1;
//	for(i=0;i<x*y;i++)
//	{
//		if(i==0||i==4||i==20)	continue;
//		if(*pmin>*(p+i))
//		pmin=p+i;
//	}
//	t=*(p+24);*(p+24)=*pmin;*pmin=t;
//}

//
//
//#include <stdio.h>
//int i, j;
//void seek(int* s, int a,int b)
//{
//	int tmp;
//	int* pmax = s;
//	int* pmin = s;
//	for (i = 0; i < a * b; i++)
//	{
//		if (*pmax < *(s + i))pmax = s + i;//找到数组中最大数
//		if (*pmin > *(s + i))pmin = s + i;//找到数组中最小数
//	}
//	tmp = *(s + 12); *(s + 12) = *pmax; *pmax = tmp;//最大的元素放在中心
//	tmp = *s; *s = *pmin; *pmin = tmp;//最小元素放左上角
//	pmin = s + 1;
//	for (i = 0; i < a * b; i++)
//	{
//		if (i == 0)continue;//再次遍历时排除已找到的最小元素
//		if (*pmin > *(s + i))pmin = s + i;//找到数组中最小数
//	}
//	tmp = *(s+4); *(s + 4) = *pmin; *pmin = tmp;//第二小元素放右上角
//	pmin = s + 1;
//	for (i = 0; i < a * b; i++)
//	{
//		if (i == 0||i==4)continue;//再次遍历时排除已找到的最小元素
//		if (*pmin > *(s + i))pmin = s + i;//找到数组中最小数
//	}
//	tmp = *(s + 20); *(s + 20) = *pmin; *pmin = tmp;//第三小元素放右下角
//	pmin = s + 1;
//	for (i = 0; i < a * b; i++)
//	{
//		if (i == 0 || i == 4||i==20)continue;//再次遍历时排除已找到的最小元素
//		if (*pmin > *(s + i))pmin = s + i;//找到数组中最小数
//	}
//	tmp = *(s + 24); *(s + 24) = *pmin; *pmin = tmp;//第四小元素放左下角
//}
//int main()
//{
//	int s[5][5];
//	printf("请输入一个5行5列的数组：\n");
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			scanf("%d", &s[i][j]);
//	seek((int*)s, 5, 5);//转换为一维数组，方便运算
//	printf("转换后的数组为：\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%2d ", s[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
#include <stdio.h>
int main()
{
	void sorts(int *p,int x);
	int a[5][5],i,j;
	printf("请输入矩阵：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sorts(*a,25);
	printf("处理后的结果是：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%-3d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void sorts(int *p,int x)
{
	int i,t,*pmax=p,*pmin=p;
	for(i=0;i<x;i++)
	{
		if(*(p+i)>*pmax)	pmax=p+i;
		if(*(p+i)<*pmin)	pmin=p+i;
	}
	t=*(p+12);*(p+12)=*pmax;*pmax=t;
	t=*p;*p=*pmin;*pmin=t;
	
	pmin=p+1;
	for(i=0;i<25;i++)
	{
		if(i==0)	continue;
		if(*(p+i)<*pmin)
		pmin=p+i;
	}
	t=*(p+4);*(p+4)=*pmin;*pmin=t;
	
	pmin=p+1;
	for(i=0;i<x;i++)
	{
		if(i==0||i==4)	continue;
		if(*(p+i)<*pmin)
		pmin=p+i;
	}
	t=*pmin;*pmin=*(p+20);*(p+20)=t;
	
	pmin=p+1;
	for(i=0;i<x;i++)
	{
		if(i==0||i==4||i==20)	continue;
		if(*pmin>*(p+i))
		pmin=p+i;
	}
	t=*pmin;*pmin=*(p+24);*(p+24)=t;
	
}


























