//#include <stdio.h> 
//int main()
//{
//	int a=100,b=10;//�������ͱ���a,b���Ҹ���ֵ 
//	int *pointer_1, *pointer_2;//����ָ���������ݵ�ָ�����pointer_1,pointer_2 
//	pointer_1=&a;//�ѱ���a�ĵ�ַ����ָ�����pointer_1
//	pointer_2=&b;//�ѱ���b�ĵ�ַ����ָ�����pointer_2 
//	printf("a=%d,b=%d\n",a,b); 
//	printf("*pointer_1=%d,*pointer_2=%d\n",*pointer_1,*pointer_2); 
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int *p1,*p2,*p,a,b;
//	printf("��������������\n");
//	scanf("%d %d",&a,&b);
//	p1=&a;
//	p2=&b;
//	if(a<b)
//	{
//		p=p1;
//		p1=p2;
//		p2=p;
//	}
//	printf("a=%d\tb=%d\n",a,b);
//	printf("max=%d\tmin=%d\n",*p1,*p2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int *p1,*p2,a,b,*p;
//	printf("�������������֣�\n");
//	scanf("%d %d",&a,&b);
//	p1=&a;
//	p2=&b;
//	if(a<b)
//	{
//		p1=&b;
//		p2=&a; 
//	}
//	printf("a=%d\tb=%d\n",a,b);
//	printf("max=%d\tmin=%d\n",*p1,*p2);
//	return 0; 
//}

//#include <stdio.h>
//int main()
//{
//	void swap(int *p1,int *p2);	//��swap������������ 
//	int a,b;
//	int *pointer_1,*pointer_2;	//��������ָ����� 
//	printf("�������������֣�\n");
//	scanf("%d %d",&a,&b);
//	pointer_1=&a;
//	pointer_2=&b;
//	if(a<b)
//	swap(pointer_1,pointer_2);
//	printf("max=%d\tmin=%d\n",a,b);
//	return 0;
//}
//void swap(int *p1,int *p2)
//{
//	int  temp;
//	temp=*p1;
//	*p1=*p2;
//	*p2=temp;
//}

//#include <stdio.h> 
//int main()
//{
//	void exchange(int *q1,int *q2,int *q3);
//	int a,b,c;
//	int *p1,*p2,*p3;
//	printf("��������������\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p1=&a;p2=&b;p3=&c;
//	exchange(p1,p2,p3);
//	printf("�ɴ�С����Ϊ��%d %d %d",a,b,c);
//	return 0;
//}
//void exchange(int *q1,int *q2,int *q3)
//{
//	void swap(int *pt1,int *pt2);
//	if(*q1<*q2)	swap(q1,q2);
//	if(*q1<*q3)	swap(q1,q3);
//	if(*q2<*q3)	swap(q2,q3);
//}
//void swap(int *pt1,int *pt2)
//{
//	int temp;
//	temp=*pt1;
//	*pt1=*pt2;
//	*pt2=temp;
//}



















