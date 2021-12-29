//#include <stdio.h> 
//int main()
//{
//	char a[]="i love China!",b[20],*p1,*p2;
//	p1=a;p2=b;
//	for(;*p1 != '\0';p1++,p2++)
//	{
//		*p2=*p1;
//	}
//	*p2='\0';
//	printf("string a is:%s\n",a);
//	printf("string b is:%s\n",b);
//	return 0;
//}
//
//#include <stdio.h> 
//int main()
//{
//	void copy_string(char from[],char to[]);
//	char a[]="i am a student.",b[]="i love china!!";
//	printf("string a is:%s\n",a);
//	printf("string b is:%s\n",b);
//	printf("copy a to b is:\n");
//	copy_string(a,b);
//	printf("a is:%s\nb is:%s\n",a,b);
//	return 0;
//}
//void copy_string(char from[],char to[])
//{
//	int i;
//	while(from [i] != '\0')
//	{
//		to[i]=from[i];
//		i++;
//	}
//	to[i]='\0';
//}

//字符数组名做函数参数 
//#include <stdio.h>
//int main()
//{
//	void copy_string(char from[],char to[]);
//	char a[]="i am a student.",b[]="i love china!";
//	printf("string a is:%s\nstring b is:%s\n",a,b);
//	printf("copy string a to b is:\n");
//	copy_string(a,b);
//	printf("string a=%s\nstring b=%s\n",a,b);
//	return 0;
//}
//void copy_string(char from[],char to[])
//{
//	int i;
//	while(from[i] != '\0')
//	{
//		to[i]=from[i];
//		i++;
//	}
//	to[i]='\0';
//}
// 
//字符型指针做实参
//#include <stdio.h> 
//int main()
//{
//	void copy_string(char from[],char to[]);
//	char a[]="i love china!",b[]="i am a student.";
//	char *from,*to;				//from指向a数组首元素，to指向b书数组首元素 
//	from=a;to=b;
//	printf("string a is:%s\nstring b is:%s\n",a,b);
//	printf("copy a to b is:\n");
//	copy_string(from,to);		//实参为字符指针变量 
//	printf("a is:%s\nb is:%s\n",a,b);
//	return 0;
//}
//void copy_string(char from[],char to[])//形参为字符数组 
//{
//	int i;
//	while(from [i] != '\0')
//	{
//		to[i]=from[i];
//		i++;
//	}
//	to[i]='\0';
//}
//
//字符指针变量做形参和实参 
//#include <stdio.h>
//int main()
//{
//	void copy_string(char *from,char *to);
//	char *a="i am a student.";		//a是char*型指针变量 
//	char b[]="i am a teacher.";		//b是字符数组 
//	char *p=b;						//使指针变量p指向b数组首元素 
//	printf("string a is:%s\nstring b is:%s\n",a,b);
//	printf("copy a to b is:\n");
//	copy_string(a,p);				//调用函数，实参为指针变量 
//	printf("string a=%s\nstring b=%s\n",a,b);
//	return 0;
//}
//void copy_string(char *from,char *to)//定义函数，形参为字符指针变量 
//{
//	for(;*from != '\0';from++,to++)
//	{
//		*to=*from;
//	}
//	*to='\0';
//}

//#include <stdio.h> 
//int main()
//{
//	void copy_string(char from[],char to[]);
//	char a[]="i am a student.", b[]="i love china!!";
//	char *from,*to;
//	from=a;to=b;
//	printf("string a is:%s\nstring b is:%s\n",a,b);
//	printf("copy a to b is:\n");
//	copy_string(from,to);
//	printf("a is:%s\nb is:%s\n",a,b);
//	return 0;
//}
//void copy_string(char from[],char to[])
//{
//	int i;
//	while(from [i] != '\0')
//	{
//		to[i]=from[i];
//		i++;
//	}
//	to[i]='\0';
//}

//#include <stdio.h>
//int main()
//{
//	void copy_string(char *from,char *to);
//	char *a="i am a student.";
//	char b[]="i am a teacher.";
//	char *p=b;
//	printf("string a=%s\nstring b=%s\n",a,b);
//	printf("copy a to b:\n");
//	copy_string(a,p);
//	printf("string a=%s\nstring b=%s\n",a,b);
//	return 0;
//}
////void copy_string(char *from,char *to)
////{
////	for(;(*from) != '\0';from++,to++)
////	{
////		*to=*from;
////	}
////	*to='\0';
//// } 
//void copy_string(char *from,char *to)
//{
//	while((*to = *from) != '\0')
//	from++,to++;
//}

//#include <stdio.h>
//int main()
//{
//	char *p,str[20];
//	p=str;
//	scanf("%s",str);
//	printf("%s\n",p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char *a="i love china!";
//	a=a+7;
//	printf("%s",a);
//	return 0;
//}

//通过函数名调用函数 
//#include <stdio.h>
//int main()
//{
//	int max(int,int);
//	int a,b,c;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&a,&b);
//	c=max(a,b); 			//通过函数名调用max函数 
//	printf("最大数为：%d\n",c);
//	return 0;
//}
//int max(int x,int y)		//定义max函数 
//{
//	int  z;
//	if(x>y)	z=x;
//	else	z=y;
//	return z;
//}
//通过指针变量访问他所指向的函数
//#include <stdio.h> 
//int main()
//{
//	int max(int,int);
//	int (*p)(int,int);
//	p=max;
//	int a,b,c;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&a,&b);
//	c=(*p)(a,b);
//	printf("最大数为：%d\n",c);
//	return 0;
//}
//int max(int x,int y)
//{
//	int z;
//	if(x>y)	z=x;
//	else	z=y;
//	return z;
//}

//#include <stdio.h>
//int main()
//{
//	int max(int,int);			//函数声明 
//	int min(int,int);			//函数声明  
//	int (*p)(int x,int y);		//定义指向函数的指针变量 
//	int a,b,c,n;
//	printf("请输入两个数字：\n");
//	scanf("%d %d",&a,&b);
//	printf("请选择1 或者 2 ：\n");
//	scanf("%d",&n);				//输入1或2 
//	if(n==1)	p=max;			//若输入1，使p指向max函数 
//	else if(n==2)	p=min;		//如输入2，使p指向min函数 
//	c=(*p)(a,b);				//调用p指向的函数 
//	printf("a=%d\nb=%d\n",a,b);
//	if(n==1)
//		printf("max=%d\n",c);
//	if(n==2)
//		printf("min=%d\n",c);
//	return 0;
//}
//int max(int x,int y)
//{
//	int z;
//	if(x>y)	z=x;
//	else	z=y;
//	return z;
//}
//int min(int x,int y)
//{
//	int z;
//	if(x<y)	z=x;
//	else	z=y;
//	return z;
//}

//#include <stdio.h> 
//int main()
//{
//	int max(int,int);
//	int min(int,int);
//	int (*p)(int x,int y);
//	int a,b,n,c;
//	printf("请输入两个数字：\n");
//	scanf("%d %d",&a,&b);
//	printf("请输入1或者2：\n");
//	scanf("%d",&n);
//	if(n==1)	p=max;
//	else if(n==2)	p=min; 
//	c=p(a,b);
//	printf("%d\n",c);
//	return 0;
//}
//int max(int x,int y)
//{
//	int z;
//	if(x>y)	z=x;
//	else	z=y;
//	return z;
//}
//int min(int x,int y)
//{
//	int z;
//	if(x<y)	z=x;
//	else	z=y;;
//	return z;
//}

//#include <stdio.h>
//int main()
//{
//	int fun(int x,int y,int (*p) (int,int));//fun函数声明 
//	int min(int,int);						//min函数声明 
//	int max(int,int);						//max函数声明 
//	int add(int,int);						//add函数声明 
//	int a,b,n;
//	printf("请输入两个数字：\n");
//	scanf("%d %d",&a,&b);
//	printf("请输入1,2或者3\n");
//	scanf("%d",&n);
//	if(n==1)	fun(a,b,min);				//输入1时调用min函数 
//	else if(n==2)	fun(a,b,max);			//输入2时调用max函数 
//	else if(n==3)	fun(a,b,add);			//输入3时调用add函数 
//	return 0;
//}
//int fun(int x,int y,int (*p)(int,int))		//定义fun函数 
//{
//	int result;
//	result=(*p)(x,y);
//	printf("%d\n",result);					//输出结果 
//}
//int min(int x,int y)
//{
//	int z;
//	if(x<y)	z=x;
//	else	z=y;
//	return z;
//}
//int max(int x,int y)
//{
//	int z;
//	if(x>y)	z=x;
//	else	z=y;
//	return z;
//}
//int add(int x,int y)
//{
//	int z;
//	z=x+y;
//	return z;
//}

















