//#include <stdio.h>
//void zb(int key,int a[],int n)
//{
//	int i,mid,low,high,count1=0,count=0;
//	low=0;
//	high=n-1;
//	while(high>=low)
//	{
//		count++;
//		mid=(low+high)/2;
//		if(key<a[mid])
//		{
//			high=mid-1;
//		}
//		else if(key>a[mid])
//		{
//			low=mid+1;
//		}
//		if(key==a[mid])
//		{
//		printf("�ҵ��ˣ���������%d�Σ�a[%d]=%d\n",count,mid,key);
//		count1++; 
//		break;	
//		}
//		if(count1==1)
//		{
//			printf("��������\n");
//		}	
//	}
//}
//
//int main()
//{
//	void zb(int key,int a[],int n);
//	int a[100],i,n,key;
//	printf("������Ԫ�ظ�����\n");
//	scanf("%d",&n);
//	printf("���մ�С����˳�����룺\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("������Ҫ���ҵ�Ԫ�أ�\n");
//	scanf("%d",&key);
//	zb(key,a,n);
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int  main()
//{
//	void print_star();
//	void print_message();
//	print_star();
//	print_message();
//	print_star();
//	return 0;
//}
//void print_star()
//{
//	printf("************************\n");
//}
//void print_message()
//{
//	printf("how do you do !\n");
//}

//#include <stdio.h>
//int max(int x,int y)
//{
//	int z;
//	z=x>y?x:y;
//	return(z);
//}
//int main()
//{
//	int max(int x,int y);
//	int a,b,c;
//	printf("����������Ҫ�Ƚϴ�С������\n");
//	scanf("%d %d",&a,&b);
//	c=max(a,b);
//	printf("%d\n",c);
//	return 0;
//}

//#include <stdio.h>
//float add(float x,float y)
//{
//	float z;
//	z=x+y;
//	return z;
//}
//
//int main()
//{
//	float add(float x,float y);
//	float a,b,c;
//	printf("��������������\n");
//	scanf("%f %f",&a,&b);
//	c=add(a,b);
//	printf("���ߵ�ֵΪ��%f\n",c);
//	return 0;
//}

//#include <stdio.h>
//int max4(int a,int b,int c,int d)
//{
//	int max2(int a,int b);
//	int m;
//	m=max2(max2(max2(a,b),c),d);
//	return m;
//}
//int max2(int a,int b)
//{
//	return(a>b?a:b);
//}
//
//int main()
//{
//	int max4(int a,int b,int c,int d);
//	int a,b,c,d,max;
//	printf("������4�����֣�\n");
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	max=max4(a,b,c,d);
//	printf("�ĸ����е������Ϊ��%d\n",max);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int age(int n);
//	printf("�����ѧ���������ǣ�%d\n",age(5));
//	return 0;
//}
//
//int age(int n)
//{
//	int c;
//	if(n==1)
//		c=10;
//	else
//		c=age(n-1)+2;
//	return c;
//}


//#include <stdio.h>
//int jc(int n)
//{
//	int a;
//	if(n==1)
//		a=1;
//	else
//		a=jc(n-1)*n;
//	return a;		
//}
//
//int main()
//{
//	int jc( int n);
//	int n,c;
//	printf("������Ҫ�׳˵�����\n");
//	scanf("%d",&n);
//	c=jc(n);
//	printf("����ǣ�%d\n",c); 
//	
//	return 0;
//}

//#include <stdio.h>
//int jc(int n)
//{
//	int  f;
//	if(n<0)
//		printf("������������\n");
//	else if(n==0 || n==1)	
//		f=1;
//	else
//		f=jc(n-1)*n;	
//	return f;
//}
//int main()
//{
//	int jc(int n);
//	int n,c;
//	printf("������Ҫ�׳˵����֣�\n");
//	scanf("%d",&n);
//	c=jc(n);
//	printf("%d! = %d",n,c);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a=1, n,i;
//	printf("������Ҫ�׳˵�����\n");
//	scanf("%d",&n);
//	if(n==1)
//		a=1;
//	else
//	{
//		for(i=n;i>0;i--)
//		{
//			a=a*i;
//		}		
//	}
//	printf("%d! = %d\n",n,a);
//	return 0;
//}

#include <stdio.h>
#include <string.h> 

void hannuo(int n,char one,char two,char three)
{
	void move(char x,char y);
	if(n==1)
		move(one,three);
	else
	{
		hannuo(n-1,one,three,two);
		move(one,three);
		hannuo(n-1,two,one,three);
	}	
}
void move(char x,char y)
{
	printf("%c---->%c\n",x,y);
}
int main()
{
	int n;
	printf("������������֣�\n");
	scanf("%d",&n);
	hannuo(n,'A','B','C');
	return 0;
}

//#include <stdio.h>
//#include <string.h>
///*
// �㷨˼·��1�� n-1�������ȷŵ�B��λ��
//          2.��A���ϵ�ʣ�µ�һ�����ƶ���C����
//          3����n-1���̴�B���ƶ���C����
//*/
////��������
//void move(char x, char y);
//void hannuo(int n,char one ,char two,char three)
//{
//  if(n==1)move(one, three); //�ݹ��ֹ����
//  else
//{
//  hannuo(n-1,one ,three,two);//�� n-1�������ȷŵ�B��λ��
//  move(one,three);//��A���ϵ�ʣ�µ�һ�����ƶ���C����
//  hannuo(n-1,two,one,three);//��n-1���̴�B���ƶ���C����
// 
//}
//}
//void move(char x,char y)
//{
// printf("%c--->%c\n",x,y);
//}
// 
//int main()
//{
// int n;
// printf("input your number");
// scanf("%d",&n);
// hannuo(n,'A','B','C');
// return 0;
//}














