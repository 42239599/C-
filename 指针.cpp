//#include <stdio.h> 
//int main()
//{
//	void sorts(int *q,int x,int y);
//	int a[100],i,n,m,*p=a;
//	printf("请输入要输入的个数：\n");
//	scanf("%d",&n);
//	printf("请输入数字：\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("请输入要后移的位数：\n");
//	scanf("%d",&m);
//	printf("整理后的排序是：\n");
//	sorts(p,n,m);	
//	return 0;
//}
//void sorts(int *q,int x,int y)
//{
//	int i,z=x;
//	for(i=0;i<x-y;i++)
//	{
//		*(q+z)=*(q+i);
//		z++;
//	}
//	
//	for(i=x-y;i<z;i++)
//	{
//		printf("%d ",*(q+i));
//	}	
//}

//#include <stdio.h>
//int main()
//{
//	void deal(int x);
//	int n;
//	printf("请输入一共有几个人：\n");
//	scanf("%d",&n);
//	deal(n);
//	return 0;
//}
//void deal(int x)
//{
//	int i;
//	for(i=1;i<=x;i++)
//	{
//		if(i%3==0)
//		{
//			i--;
//		}
//		continue;
//	}
//	printf("%d\n",i);
//}

//#include <stdio.h>
//int main()
//{
//	int a[100],i,*p=a,n;
//	printf("请输入人数：\n");
//	scanf("%d",&n);
//	printf("原始报数：\n");
//	for(i=0;i<n;i++)
//	{
//		a[i]=i+1;
//		printf("%-4d",a[i]);
//	}
//	
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n,i,k = 0,m = 0;//k为1，2，3的计数变量，m为退出人数 
//	int a[100];
//	int* p;
//	
//	puts("Please input the number of players:");//输入人数 
//	scanf("%d",&n);
//		
//	for (i = 0;i <= n - 1;i++)//对每个人进行编号，方便后续得出结果 
//	{
//		a[i] = i + 1;
//	}
//
////以下为逻辑判断部分 
//	p = a;
//	i = 0;
//	while (m < n - 1)
//	{
//		if (*(p + i) != 0)//遍历剩下的元素（当然，第一遍是所有元素） 
//		{
//			k++;
//		}
//		if (k == 3)
//		{
//			*(p + i) = 0;//退出标志
//			m++;
//			k = 0;
//		}
//		i++;
//		if(i ==n)
//		{
//			i = 0;
//		}
//	}
//	while (*p == 0)//判断出第几个，即最后未变成0的元素 
//	{
//		p++;
//	}
//	printf("The index of the person is %d",*p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[100],i,*p=a,k=0,n,m=0;//k是1,2,3的循环报数；n是总人数；m是退出的人数 
//	printf("请输入总人数：\n");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)//对各个数进行编号 
//	{
//		a[i]=i+1;
//	}
//	
//	i=0;
//	while(m<n-1)
//	{
//		if(*(p+i) != 0)//遍历剩下的元素 
//		{
//			k++;
//		}
//		if(k==3)
//		{
//			*(p+i)=0;//推出的标志 
//			m++;
//			k=0;
//		}
//		i++;
//		if(i==n)
//		{
//			i=0;
//		}
//	}
//	while(*p==0)//判断出第几个，即最后未变成0的数 
//	{
//		p++;
//	}
//	printf("剩下的数是：%d\n",*p);
//	return 0;
//}

//#include <stdio.h> 
//int main()
//{
//	int a[100],i,n,k=0,m=0,*p=a;//n为数字个数，k为123循环，m为退出
//	printf("请输入数字个数：\n");
//	scanf("%d",&n);	//输如个数 
//	for(i=0;i<n;i++)
//	{
//		a[i]=i+1;	//对各个元素进行编号 
//	}
//	//进行逻辑循环 
//	i=0;
//	while(m<n-1)
//	{
//		if(*(p+i) != 0) 	//遍历剩下的元素 
//		{
//			k++;
//		}
//		if(k == 3)
//		{
//			*(p+i)=0;	//退出的标志 
//			m++;
//			k=0; 
//		}
//		i++;
//		if(n==i)
//		{
//			i=0;
//		}
//	}
//	while(*p == 0)	//判断出不为零的数就是结果 
//	{
//		p++;
//	}
//	printf("循环剩下的数字是：%d\n",*p);
//	return 0;
//}

//#include <stdio.h> 
//int main()
//{
//	int calculate(char *p);
//	char a[100];
//	printf("请输入您的字符串：\n");
//	scanf("%s",a);
//	printf("长度是：%d",calculate(a));
//	return 0;
//}
//int calculate(char *p)
//{
//	int c=0;
//	while(*p != '\0')
//	{
//		c++;
//		p++;
//	}
//	return c;
//}

//#include <stdio.h>
//int main()
//{
//	int a[100],i,n,m=0,k=0,*p=a;
//	printf("请输入数字个数：\n");
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
//			k=0;
//			m++;
//		}
//		i++;
//		if(i==n)
//		{
//			i=0;
//		}
//	}
//	while(*p == 0 )
//	{
//		p++;
//	}
//	printf("剩下的数字是：%d",*p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int lenth(char *p);
//	char a[100];
//	printf("请输入字符串：\n");
//	gets(a);
//	printf("所输入的字符串长度是：%d\n",lenth(a));
//	return 0;
//}
//int lenth(char *p)
//{
//	int c;
//	while(*p != '\0')
//	{
//		c++;
//		p++;
//	}
//	return  c;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int copy(char *p1,char *p2,int m);
//	char p[20],q[20];
//	int m,i;
//	printf("请输入p的字符串：");
//	gets(p);
//	printf("请输入m的值:");
//	scanf("%d",&m);
//	if(strlen(p)<m)  //判断字符串p的长度是否比m的小
//	{
//		printf("error!");
//	}
//	copy(p,q,m);
//	printf("%s\n",q);
//	return 0;
//}
//int copy(char *p1,char *p2,int m)
//{
//	p1=p1+(m-1);//或直接将指针p1的地址指向m的位置
//	while(*p1!='\0')
//	{
//		*p2=*p1;
//		p1++;
//		p2++;
//	}
//	*p2='\0';
//}

//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	int lenth(char *p);
//	char a[100];
//	printf("请输入字符串：\n");
//	gets(a);
//	printf("字符串长度是：%d\n",lenth(a));
//	return 0;
//}
//int lenth(char *p)
//{
//	int c;
//	c=strlen(p);
//	return c;
//}

//#include <stdio.h> 
//#include <string.h>
//int main()
//{
//	void deal(char *p1,char *p2,int n);
//	char a[100],b[100];
//	int m;
//	printf("请输入字符串：\n");
//	gets(a);
//	printf("请输入开始位移的位数：\n");
//	scanf("%d",&m);
//	if(strlen(a)<m)
//	printf("输入有误，请重新输入!!!");
//	deal(a,b,m);
//	printf("处理后的结果是：%s\n",b);
//	return 0;
//}
//void deal(char *p1,char *p2,int n)
//{
//	p1=p1+(n-1);
//	while(*p1 != '\0')
//	{
//		*p2=*p1;
//		p1++;
//		p2++;
//	}
//	*p2='\0';
//}
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
//		if(k == 3)
//		{
//			*(p+i)=0;
//			k=0;
//			m++;
//		}
//		i++;
//		if(n == i)
//		{
//			i=0;
//		}
//	}
//	while(*p==0)
//	{
//		p++;
//	}
//	printf("剩下的数字是：%d\n",*p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int lenth(char *p);
//	char a[100];
//	gets(a);
//	printf("长度是：%d\n",lenth(a));
//	return 0;
//}
//int lenth(char *p)
//{
//	int c;
//	while(*p != '\0')
//	{
//		c++;
//		p++;
//	}
//	return c;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	void copy(char *p1,char *p2,int m);
//	char a[100],b[100],m;
//	printf("请输入a的字符串：\n");
//	gets(a);
//	printf("请输入从第几个字符开始复制：\n");
//	scanf("%d",&m);
//	if(strlen(a)<m)
//	printf("输入有误，请重新输入！！\n");
//	copy(a,b,m);
//	printf("整理后的结果是：%s\n",b);
//	return 0;
//}
//void copy(char *p1,char *p2,int m)
//{
//	
//	while(*p1 != '\0')
//	{
//		*p2=*(p1+m-1);
//		p1++;
//		p2++;
//	}
//	*p2='\0';
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100],*p=a;
//	int big_num=0,small_num=0,space_num=0,math_num=0,other_num=0;
//	int i,n;
//	printf("请输入您的字符串：\n");
//	gets(a);
//	n=strlen(p);
//	printf("所输入的字符串长度为：%d\n",n);
//	for(i=0;i<n;i++)
//	{
//		if(*(p+i)>='a' && *(p+i)<='z')
//		{
//			small_num++;
//		}
//		else if(*(p+i)>='A' && *(p+i)<='Z')
//		{
//			big_num++;
//		}
//		else if(*(p+i)==' ')
//		{
//			space_num++;
//		}
//		else if(*(p+i)>='0' && *(p+i)<='9')
//		{
//			math_num++;
//		}
//		else
//		{
//			other_num++;
//		}
//	}
//	printf("大写字母有：%d个\n",big_num);
//	printf("小写字母有:%d个\n",small_num);
//	printf("空格有：%d个\n",space_num);
//	printf("数字有：%d个\n",math_num);
//	printf("其他字符有:%d个\n",other_num);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100],*p=a;
//	int big_num=0,small_num=0,space_num=0,math_num=0,other_num=0;
//	int i,n;
//	printf("请输入您的字符串：\n");
//	gets(a);
//	n=strlen(p);
//	printf("所输入的字符串长度为：%d\n",n);
//	for(i=0;i<n;i++)
//	{
//		if(*(p+i)>='a' && *(p+i)<='z')
//		{
//			small_num++;
//		}
//		else if(*(p+i)>='A' && *(p+i)<='Z')
//		{
//			big_num++;
//		}
//		else if(*(p+i)==' ')
//		{
//			space_num++;
//		}
//		else if(*(p+i)>='0' && *(p+i)<='9')
//		{
//			math_num++;
//		}
//		else
//		{
//			other_num++;
//		}
//	}
//	printf("大写字母有：%d个\n",big_num);
//	printf("小写字母有:%d个\n",small_num);
//	printf("空格有：%d个\n",space_num);
//	printf("数字有：%d个\n",math_num);
//	printf("其他字符有:%d个\n",other_num);
//	return 0;
//}




















