//#include <stdio.h> 
//int main()
//{
//	void sorts(int *q,int x,int y);
//	int a[100],i,n,m,*p=a;
//	printf("������Ҫ����ĸ�����\n");
//	scanf("%d",&n);
//	printf("���������֣�\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("������Ҫ���Ƶ�λ����\n");
//	scanf("%d",&m);
//	printf("�����������ǣ�\n");
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
//	printf("������һ���м����ˣ�\n");
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
//	printf("������������\n");
//	scanf("%d",&n);
//	printf("ԭʼ������\n");
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
//	int n,i,k = 0,m = 0;//kΪ1��2��3�ļ���������mΪ�˳����� 
//	int a[100];
//	int* p;
//	
//	puts("Please input the number of players:");//�������� 
//	scanf("%d",&n);
//		
//	for (i = 0;i <= n - 1;i++)//��ÿ���˽��б�ţ���������ó���� 
//	{
//		a[i] = i + 1;
//	}
//
////����Ϊ�߼��жϲ��� 
//	p = a;
//	i = 0;
//	while (m < n - 1)
//	{
//		if (*(p + i) != 0)//����ʣ�µ�Ԫ�أ���Ȼ����һ��������Ԫ�أ� 
//		{
//			k++;
//		}
//		if (k == 3)
//		{
//			*(p + i) = 0;//�˳���־
//			m++;
//			k = 0;
//		}
//		i++;
//		if(i ==n)
//		{
//			i = 0;
//		}
//	}
//	while (*p == 0)//�жϳ��ڼ����������δ���0��Ԫ�� 
//	{
//		p++;
//	}
//	printf("The index of the person is %d",*p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[100],i,*p=a,k=0,n,m=0;//k��1,2,3��ѭ��������n����������m���˳������� 
//	printf("��������������\n");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)//�Ը��������б�� 
//	{
//		a[i]=i+1;
//	}
//	
//	i=0;
//	while(m<n-1)
//	{
//		if(*(p+i) != 0)//����ʣ�µ�Ԫ�� 
//		{
//			k++;
//		}
//		if(k==3)
//		{
//			*(p+i)=0;//�Ƴ��ı�־ 
//			m++;
//			k=0;
//		}
//		i++;
//		if(i==n)
//		{
//			i=0;
//		}
//	}
//	while(*p==0)//�жϳ��ڼ����������δ���0���� 
//	{
//		p++;
//	}
//	printf("ʣ�µ����ǣ�%d\n",*p);
//	return 0;
//}

//#include <stdio.h> 
//int main()
//{
//	int a[100],i,n,k=0,m=0,*p=a;//nΪ���ָ�����kΪ123ѭ����mΪ�˳�
//	printf("���������ָ�����\n");
//	scanf("%d",&n);	//������� 
//	for(i=0;i<n;i++)
//	{
//		a[i]=i+1;	//�Ը���Ԫ�ؽ��б�� 
//	}
//	//�����߼�ѭ�� 
//	i=0;
//	while(m<n-1)
//	{
//		if(*(p+i) != 0) 	//����ʣ�µ�Ԫ�� 
//		{
//			k++;
//		}
//		if(k == 3)
//		{
//			*(p+i)=0;	//�˳��ı�־ 
//			m++;
//			k=0; 
//		}
//		i++;
//		if(n==i)
//		{
//			i=0;
//		}
//	}
//	while(*p == 0)	//�жϳ���Ϊ��������ǽ�� 
//	{
//		p++;
//	}
//	printf("ѭ��ʣ�µ������ǣ�%d\n",*p);
//	return 0;
//}

//#include <stdio.h> 
//int main()
//{
//	int calculate(char *p);
//	char a[100];
//	printf("�����������ַ�����\n");
//	scanf("%s",a);
//	printf("�����ǣ�%d",calculate(a));
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
//	printf("���������ָ�����\n");
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
//	printf("ʣ�µ������ǣ�%d",*p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int lenth(char *p);
//	char a[100];
//	printf("�������ַ�����\n");
//	gets(a);
//	printf("��������ַ��������ǣ�%d\n",lenth(a));
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
//	printf("������p���ַ�����");
//	gets(p);
//	printf("������m��ֵ:");
//	scanf("%d",&m);
//	if(strlen(p)<m)  //�ж��ַ���p�ĳ����Ƿ��m��С
//	{
//		printf("error!");
//	}
//	copy(p,q,m);
//	printf("%s\n",q);
//	return 0;
//}
//int copy(char *p1,char *p2,int m)
//{
//	p1=p1+(m-1);//��ֱ�ӽ�ָ��p1�ĵ�ַָ��m��λ��
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
//	printf("�������ַ�����\n");
//	gets(a);
//	printf("�ַ��������ǣ�%d\n",lenth(a));
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
//	printf("�������ַ�����\n");
//	gets(a);
//	printf("�����뿪ʼλ�Ƶ�λ����\n");
//	scanf("%d",&m);
//	if(strlen(a)<m)
//	printf("������������������!!!");
//	deal(a,b,m);
//	printf("�����Ľ���ǣ�%s\n",b);
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
//	printf("���������֣�\n");
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
//	printf("ʣ�µ������ǣ�%d\n",*p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int lenth(char *p);
//	char a[100];
//	gets(a);
//	printf("�����ǣ�%d\n",lenth(a));
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
//	printf("������a���ַ�����\n");
//	gets(a);
//	printf("������ӵڼ����ַ���ʼ���ƣ�\n");
//	scanf("%d",&m);
//	if(strlen(a)<m)
//	printf("�����������������룡��\n");
//	copy(a,b,m);
//	printf("�����Ľ���ǣ�%s\n",b);
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
//	printf("�����������ַ�����\n");
//	gets(a);
//	n=strlen(p);
//	printf("��������ַ�������Ϊ��%d\n",n);
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
//	printf("��д��ĸ�У�%d��\n",big_num);
//	printf("Сд��ĸ��:%d��\n",small_num);
//	printf("�ո��У�%d��\n",space_num);
//	printf("�����У�%d��\n",math_num);
//	printf("�����ַ���:%d��\n",other_num);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100],*p=a;
//	int big_num=0,small_num=0,space_num=0,math_num=0,other_num=0;
//	int i,n;
//	printf("�����������ַ�����\n");
//	gets(a);
//	n=strlen(p);
//	printf("��������ַ�������Ϊ��%d\n",n);
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
//	printf("��д��ĸ�У�%d��\n",big_num);
//	printf("Сд��ĸ��:%d��\n",small_num);
//	printf("�ո��У�%d��\n",space_num);
//	printf("�����У�%d��\n",math_num);
//	printf("�����ַ���:%d��\n",other_num);
//	return 0;
//}




















