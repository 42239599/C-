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

//�ַ����������������� 
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
//�ַ���ָ����ʵ��
//#include <stdio.h> 
//int main()
//{
//	void copy_string(char from[],char to[]);
//	char a[]="i love china!",b[]="i am a student.";
//	char *from,*to;				//fromָ��a������Ԫ�أ�toָ��b��������Ԫ�� 
//	from=a;to=b;
//	printf("string a is:%s\nstring b is:%s\n",a,b);
//	printf("copy a to b is:\n");
//	copy_string(from,to);		//ʵ��Ϊ�ַ�ָ����� 
//	printf("a is:%s\nb is:%s\n",a,b);
//	return 0;
//}
//void copy_string(char from[],char to[])//�β�Ϊ�ַ����� 
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
//�ַ�ָ��������βκ�ʵ�� 
//#include <stdio.h>
//int main()
//{
//	void copy_string(char *from,char *to);
//	char *a="i am a student.";		//a��char*��ָ����� 
//	char b[]="i am a teacher.";		//b���ַ����� 
//	char *p=b;						//ʹָ�����pָ��b������Ԫ�� 
//	printf("string a is:%s\nstring b is:%s\n",a,b);
//	printf("copy a to b is:\n");
//	copy_string(a,p);				//���ú�����ʵ��Ϊָ����� 
//	printf("string a=%s\nstring b=%s\n",a,b);
//	return 0;
//}
//void copy_string(char *from,char *to)//���庯�����β�Ϊ�ַ�ָ����� 
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

//ͨ�����������ú��� 
//#include <stdio.h>
//int main()
//{
//	int max(int,int);
//	int a,b,c;
//	printf("��������������\n");
//	scanf("%d %d",&a,&b);
//	c=max(a,b); 			//ͨ������������max���� 
//	printf("�����Ϊ��%d\n",c);
//	return 0;
//}
//int max(int x,int y)		//����max���� 
//{
//	int  z;
//	if(x>y)	z=x;
//	else	z=y;
//	return z;
//}
//ͨ��ָ�������������ָ��ĺ���
//#include <stdio.h> 
//int main()
//{
//	int max(int,int);
//	int (*p)(int,int);
//	p=max;
//	int a,b,c;
//	printf("��������������\n");
//	scanf("%d %d",&a,&b);
//	c=(*p)(a,b);
//	printf("�����Ϊ��%d\n",c);
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
//	int max(int,int);			//�������� 
//	int min(int,int);			//��������  
//	int (*p)(int x,int y);		//����ָ������ָ����� 
//	int a,b,c,n;
//	printf("�������������֣�\n");
//	scanf("%d %d",&a,&b);
//	printf("��ѡ��1 ���� 2 ��\n");
//	scanf("%d",&n);				//����1��2 
//	if(n==1)	p=max;			//������1��ʹpָ��max���� 
//	else if(n==2)	p=min;		//������2��ʹpָ��min���� 
//	c=(*p)(a,b);				//����pָ��ĺ��� 
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
//	printf("�������������֣�\n");
//	scanf("%d %d",&a,&b);
//	printf("������1����2��\n");
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
//	int fun(int x,int y,int (*p) (int,int));//fun�������� 
//	int min(int,int);						//min�������� 
//	int max(int,int);						//max�������� 
//	int add(int,int);						//add�������� 
//	int a,b,n;
//	printf("�������������֣�\n");
//	scanf("%d %d",&a,&b);
//	printf("������1,2����3\n");
//	scanf("%d",&n);
//	if(n==1)	fun(a,b,min);				//����1ʱ����min���� 
//	else if(n==2)	fun(a,b,max);			//����2ʱ����max���� 
//	else if(n==3)	fun(a,b,add);			//����3ʱ����add���� 
//	return 0;
//}
//int fun(int x,int y,int (*p)(int,int))		//����fun���� 
//{
//	int result;
//	result=(*p)(x,y);
//	printf("%d\n",result);					//������ 
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

















