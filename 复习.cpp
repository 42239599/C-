//#include <stdio.h> 
//int main(void)
//{
//	int a,b,*p1,*p2;
//	printf("�������������֣�\n");
//	scanf("%d %d",&a,&b);
//	p1=&a;p2=&b;
//	if(*p1<*p2)
//	{
//		p1=&b;
//		p2=&a;
//	}
//	printf("��С������Ϊ��%d\t%d\n",*p1,*p2);
//	return 0; 
//}

//ָ���������������
//���������������������С��������ú�������������ָ�����͵�������Ϊ��������
//#include <stdio.h>
//int main(void)
//{
//	void swap(int *q1,int *q2);
//	int a,b,*p1,*p2;
//	printf("�������������֣�\n");
//	scanf("%d %d",&a,&b);
//	p1=&a;p2=&b;
//	swap(p1,p2);
//	return 0;
//}
//void swap(int *q1,int *q2)
//{
//	int *t;
//	if(*q1>*q2)
//	{
//		t=q1;
//		q1=q2;
//		q2=t;
//	}
//	printf("С���������Ϊ��%d\t%d",*q1,*q2);
//}


//ָ�������Ϊ��������������3����
//С���� 
//#include <stdio.h> 
//int main(void)
//{
//	void sorts(int *q1,int *q2,int *q3);
//	int a,b,c,*p1,*p2,*p3;
//	printf("please input three numbers:\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p1=&a;p2=&b;p3=&c; 
//	sorts(p1,p2,p3);
//	return 0;
//}
//void sorts(int *q1,int *q2,int *q3)
//{
//	int *t;
//	if(*q1>*q2)
//	{
//		t=q1;
//		q1=q2;
//		q2=t; 
//	}
//	if(*q1>*q3)
//	{
//		t=q1;
//		q1=q3;
//		q3=t;
//	}
//	if(*q2>*q3)
//	{
//		t=q2;
//		q2=q3;
//		q3=t;
//	}
//	printf("С���������Ϊ��%d\t%d\t%d\n",*q1,*q2,*q3);
//}


/**************************
��һ����������a����10��Ԫ�أ�Ҫ����������е�ȫ��Ԫ�� 
1���±귨
2��ͨ����������������Ԫ�ص�ַ���ҳ�Ԫ�ص�ֵ 
3�� ��ָ�����ָ������Ԫ�� 
*****************************/

//#include <stdio.h> 
//int main(void)
//{
//	int a[10],i;
//	printf("������ʮ�����֣�\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("�������ǣ�\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}

//#include <stdio.h> 
//int main(void)
//{
//	int a[10],i;
//	printf("������ʮ�����֣�\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("�����\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",*(a+i));
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a[10],i,*p;
//	printf("������ʮ������\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	p=a;
//	printf("�����\n");
//	for(;p<(a+10);p++)
//	{
//		printf("%d\t",*p);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a[5],i,mid,t,j;
//	printf("������������֣�\n");
//	for(i=0;i<5;i++)
//		scanf("%d",&a[i]);
//	mid=5/2;
//	
//	for(i=0,j=4;i<=mid;i++,j--)
//	{
//		t=a[i];
//		a[i]=a[j];
//		a[j]=t;
//	}
//	
//	printf("�����������£�\n");
//	for(i=0;i<5;i++)
//		printf("%d\t",a[i]);
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	void swap(int *q,int x);
//	int a[5],i,*p=a;
//	printf("�������������\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	swap(p,5);
//	return 0;
//}
//void swap(int *q,int x)
//{
//	int j=x-1,i,t,mid=x/2;
//	for(i=0;i<mid;i++,j--)
//	{
//		t=*(q+i);
//		*(q+i)=*(q+j);
//		*(q+j)=t;
//	}
//	printf("�������£�\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d\t",*(q+i));
//	}
//}









