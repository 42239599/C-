//#include <stdio.h> 
//int main()
//{	
//	void sorts(int *q1,int *q2,int *q3);
//	int a,b,c,*p1,*p2,*p3;
//	printf("�������������֣�\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p1=&a;p2=&b;p3=&c;
//	sorts(p1,p2,p3);
//	printf("С�����������£�\n");
//	printf("%d\t%d\t%d\t",a,b,c);
//	return 0;
//}
//void sorts(int *q1,int *q2,int *q3)
//{
//	void swap(int *qt1,int *qt2);
//	if(*q1>*q2)	swap(q1,q2);
//	if(*q1>*q3)	swap(q1,q3);
//	if(*q2>*q3)	swap(q2,q3);
//}
//void swap(int *qt1,int *qt2)
//{
//	int t;
//	t=*qt1;
//	*qt1=*qt2;
//	*qt2=t;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100],b[100],c[100],t[100];
//	printf("������3���ַ�����\n");
//	while(gets(a) != NULL)
//	{
//		gets(b);
//		gets(c);
//		if(strcmp(a,b)>0)
//		{
//			strcpy(t,a);
//			strcpy(a,b);
//			strcpy(b,t);
//		}
//		if(strcmp(a,c)>0)
//		{
//			strcpy(t,a);
//			strcpy(a,c);
//			strcpy(c,t);
//		}
//		if(strcmp(b,c)>0)
//		{
//			strcpy(t,b);
//			strcpy(b,c);
//			strcpy(c,t);
//		}
//	printf("��С�����˳�������ǣ�\n");
//	puts(a);
//	puts(b);
//	puts(c);				
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	void sorts(char *p11,char *p22);
//	char a[100],b[100],c[100],*p1,*p2,*p3;
//	printf("�������ַ���1��\n");
//	scanf("%s",a);
//	printf("�������ַ���2��\n");
//	scanf("%s",b);
//	printf("�������ַ���3:\n");
//	scanf("%s",c);
//	p1=a;p2=b;p3=c;
//	sorts(p1,p2);
//	sorts(p1,p3);
//	sorts(p2,p3);
//	printf("��С���������ǣ�\n");
//	printf("%s\n%s\n%s\n",p1,p2,p3);
//	return 0;
//}
//void sorts(char *p11,char *p22)
//{
//	char t[100];
//	if(strcmp(p11,p22)>0)	//�ȽϺ��� 
//	{
//		strcpy(t,p11);		//���ƺ��� 
//		strcpy(p11,p22);
//		strcpy(p22,t);
//	}
//}

//#include <stdio.h> 
//#include <string.h>
//int main()
//{
//	void sorts(char *q1,char *q2);
//	char *p1,*p2,*p3;
//	char a[20]="china";
//	char b[20]="canada";
//	char c[20]="janpan";
//	p1=a;p2=b;p3=c;
//	sorts(p1,p2);
//	sorts(p1,p3);
//	sorts(p2,p3);
//	printf("С����������ǣ�\n");
//	printf("%s\n%s\n%s\n",p1,p2,p3);
//	return 0;
//}
//void sorts(char *q1,char *q2)
//{
//	char t[20];
//	if(strcmp(q1,q2)>0)
//	{
//		strcpy(t,q1);
//		strcpy(q1,q2);
//		strcpy(q2,t);
//	}
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	void sorts(char *q1,char *q2);
//	char *p1,*p2,*p3;
//	char a[100],b[100],c[100];
////	printf("�������ַ���1��\n");
////	gets(a);
////	printf("�������ַ���2��\n");
////	gets(b);
////	printf("�������ַ���3��\n");
////	gets(c);
//	printf("�������ַ�����\n");
//	scanf("%s %s %s",a,b,c);
//	p1=a;p2=b;p3=c;
//	sorts(p1,p2);
//	sorts(p1,p3);
//	sorts(p2,p3);
//	printf("С�����������£�\n");
//	printf("%s\n%s\n%s\n",p1,p2,p3);
//	return 0;
//}
//void sorts(char *q1,char *q2)
//{
//	char t[100];
//	if(strcmp(q1,q2)>0)
//	{
//		strcpy(t,q1);
//		strcpy(q1,q2);
//		strcpy(q2,t);
//	}
//}
 
//#include <stdio.h>
//int main()
//{
//	void sorts(int *q1,int *q2,int *q3);
//	int a,b,c,*p1,*p2,*p3;
//	printf("��������������\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p1=&a;p2=&b;p3=&c;
//	sorts(p1,p2,p3);
//	printf("С����������ǣ�\n");
//	printf("%d\t%d\t%d\t",*p1,*p2,*p3);
//	return 0;
//}
//void sorts(int *q1,int *q2,int *q3)
//{
//	void swap(int *qt1,int *qt2);
//	if(*q1>*q2)	swap(q1,q2);
//	if(*q1>*q3)	swap(q1,q3);
//	if(*q2>*q3)	swap(q2,q3);
//}
//void swap(int *qt1,int *qt2)
//{
//	int t;
//	t=*qt1;
//	*qt1=*qt2;
//	*qt2=t;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	void sorts(char *q1,char *q2,char *q3);
//	char a[20],b[20],c[20],*p1,*p2,*p3;
//	printf("�����������ַ�����\n");
//	scanf("%s %s %s",a,b,c);
//	p1=a;p2=b;p3=c;
//	sorts(p1,p2,p3);
//	return 0;
//}
//void sorts(char *q1,char *q2,char *q3)
//{
//	void swap(char *qt1,char *qt2);
//	if(strcmp(q1,q2)>0)	swap(q1,q2);
//	if(strcmp(q1,q3)>0)	swap(q1,q3);
//	if(strcmp(q2,q3)>0)	swap(q2,q3);
//	printf("С����������ǣ�\n%s\n%s\n%s\n",q1,q2,q3);
//}
//void swap(char *qt1,char *qt2)
//{
//	char t[20];
//	strcpy(t,qt1);
//	strcpy(qt1,qt2);
//	strcpy(qt2,t);
//}

//#include <stdio.h>
//int main()
//{
//	void enter(int *q,int n);//���뺯�� 
//	void swap(int *q,int n);//������ 
//	void print(int *q,int n);//��ӡ���� 
//	int a[10],*p=a;
//	enter(p,10);
//	swap(p,10);
//	print(p,10);
//	return 0;
//}
////���뺯�� 
//void enter(int *q,int n)
//{
//	int i;
//	printf("������ʮ������\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&*(q+i));
//	}
//}
////������ 
//void swap(int *q,int n)
//{
//	int max,min,i,t1,t2,MIN,MAX;
//	max=*q;
//	//�ҳ����ֵ��λ�� 
//	for(i=0;i<n;i++)
//	{
//		if(*(q+i)>=max)
//		{
//			max=*(q+i);
//			MAX=i;
//		}	
//	}
//	//�ҳ���Сֵ��λ��
//	min=*q;	 
//	for(i=0;i<n;i++)
//	{
//		if(*(q+i)<=min)
//		{
//			min=*(q+i);
//			MIN=i;
//		}
//	}
//	//���� 
//	t1=*(q+MAX);*(q+MAX)=*(q+n-1);*(q+n-1)=t1;//��ֵ����λ�� 
//	t2=*(q+MIN);*(q+MIN)=*q;*q=t2;			  //Сֵ����λ�� 
//}
////��ӡ���� 
//void print(int *q,int n)
//{
//	int i;
//	printf("�����Ľ���ǣ�\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(q+i));
//	}
//}
#include <stdio.h> 
int main()
{
	void input(int *q);
	void swap(int *q);
	void print(int *q);
	int a[10],*p=a;
	input(p);
	swap(p);
	print(p);
	return 0;
}
void input(int *q)
{
	int i;
	printf("������ʮ��Ԫ�أ�\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&*(q+i));
	}
}
void swap(int *q)
{
	int i,max,min,MAX,MIN,t1,t2;
	max=*q;
	for(i=0;i<10;i++)
	{
		if(*(q+i)>=max)
		{
			max=*(q+i);
			MAX=i;
		}
	}
	
	min=*q;
	for(i=0;i<10;i++)
	{
		if(*(q+i)<=min)
		{
			min=*(q+i);
			MIN=i;
		}
	}
	
	t1=*(q+MAX);*(q+MAX)=*(q+9);*(q+9)=t1;
	t2=*(q+MIN);*(q+MIN)=*q;*q=t2;
}
void print(int *q)
{
	int i;
	printf("�����Ľ���ǣ�\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",*(q+i));
	}
	
 } 












