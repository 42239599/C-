////��ax^2+bx+c=0���̵ĸ� 
//#include <math.h>
//#include <stdio.h> 
//int main()
//{
//	int a,b,c,p,q,x1,x2;
//	printf("������ϵ����\n");
//	scanf("%d %d %d",&a,&b,&c);
//	p=b*b-4*a*c;
//	q=sqrt(p);
//	x1=(-b+q)/(2*a);
//	x2=(-b-q)/(2*a);
//	if(p<0)
//	{
//		printf("��ʵ��\n");
//	}
//	if(p==0)
//	{
//		printf("ֻ��һ��ʵ�����ǣ�%d\n",x1);
//	}
//	if(p>0)
//	{
//		printf("������ʵ�����ֱ��ǣ�%d\t%d\n",x1,x2);
//	}
//	return 0;
//}


////��������ʵ������С��������������
//#include <stdio.h>
//int main()
//{
//	int a,b,t;
//	printf("����������Ҫ�Ƚϴ�С������\n");
//	scanf("%d %d",&a,&b);
//	if(a>b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	printf("С�����˳���ǣ�%d\t%d\n",a,b);
//	return 0;
//}

////����������������С�����˳����� 
//#include <stdio.h> 
//int main()
//{
//	int a,b,c,t;
//	printf("��������������\n");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a>b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	if(a>c)
//	{
//		t=a;
//		a=c;
//		c=t;
//	}
//	if(b>c)
//	{
//		t=b;
//		b=c;
//		c=t;
//	}
//	printf("����С�����������£�%d\t%d\t%d\n",a,b,c);
//	return 0;
//}

////��switch��䴦��˵���������Ӽ�������һ��'A'����'a'�ַ����ͻ�ִ��A����
////����A���ú�����ӣ�����b�͵��ú������ 
//#include <stdio.h>
//int main()
//{
//	void he(int x,int y);
//	void ji(int x,int y);
//	int a,b;
//	char ch;
//	printf("��������������\n");
//	scanf("%d %d",&a,&b);
//	printf("������Ҫִ�в�������ĸ��\n");
//	scanf("%c",&ch);
//	switch(ch=getchar())	//ע������ 
//	{
//		case 'a':
//		case 'A':he(a,b);break;
//		case 'b':
//		case 'B':ji(a,b);break;
//		default:printf("error!!!\n");
//	}
//	return 0;
//}
//void he(int x,int y)
//{
//	int c;
//	c=x+y;
//	printf("������Ľ���ǣ�%d\n",c);
//}
//void ji(int x,int y)
//{
//	int c;
//	c=x*y;
//	printf("������Ľ���ǣ�%d\n",c);
//}




















