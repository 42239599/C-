//#include <stdio.h>
//int main()
//{
//	int a,b,c,m,t;
//	printf("��������������\n");
//	scanf("%d %d",&a,&b);
//	if(a<b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	c=a%b;
//	m=a*b;
//	while(c != 0)
//	{
//		a=b;
//		b=c;
//		c=a%b;
//	}
//	printf("��С��������%d\n���Լ����%d\n",m/b,b); 
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int zd(int x,int y);
//	int zx(int x,int y);
//	int a,b;
//	printf("��������������\n");
//	scanf("%d %d",&a,&b);
//	printf("��С������Ϊ��%d\n���Լ��Ϊ��%d\n",zx(a,b),zd(a,b));
//	return 0;
//}
//int zd(int x,int y)
//{
//	int c,t;
//	if(x<y)
//	{
//		t=x;
//		x=y;
//		y=t;
//	}
//	c=x%y;
//	while(c != 0)
//	{
//		x=y;
//		y=c;
//		c=x%y;
//	}
//	return y;
//}//���Լ��
//int zx(int x,int y)
//{
//	int m;
//	m=(x*y)/zd(x,y);
//	return m;
// } //��С������ 

//#include <stdio.h>
//#include <math.h>
//void f1(int a,int b,int c);
//void f2(int a,int b,int c);
//void f3(int a,int b,int c);
//int main()
//{
//	int a,b,c;
//	double t;
//	printf("������3��ϵ����\n");
//	scanf("%d %d %d",&a,&b,&c);
//	printf("ԭ����Ϊ%dx^2+%dx+%d=0\n",a,b,c);
//	t=b*b-4*a*c;
//	if(t>0)
//		f1(a,b,c);
//	if(t==0)
//		f2(a,b,c);
//	if(t<0)
//		f3(a,b,c);		
//	return 0;
//}
//void f1(int a,int b,int c)
//{
//	double t,x1,x2;
//	t=b*b-4*a*c;
//	x1=(-b+sqrt(t))/(2*a);
//	x2=(-b-sqrt(t))/(2*a);
//	printf("���̵�������Ϊ��x1=%5.2f\tx2=%5.2f\n",x1,x2);
//}
//void f2(int a,int b,int c)
//{
//	double t,x1,x2;
//	t=b*b-4*a*c;
//	x1=(-b-sqrt(t))/(2*a);
//	x2=x1;
//	printf("���̵ĸ�Ϊx1=x2=%5.2f\n",x1);
//}
//void f3(int a,int b,int c)
//{
//	printf("��ʵ��\n");
//}


//#include <stdio.h>
//int main()
//{
//	int a,i,b;
//	printf("���������֣�\n");
//	scanf("%d",&a);
//	for(i=2;i<a;i++)
//	{
//		b=a%i;
//		if(b==0)
//		{
//			printf("%d��������\n",a);
//			break;
//		}	
//	}
//	if(b!=0)
//	printf("%d������\n",a);	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a,i,b;
//	printf("���������֣�\n");
//	scanf("%d",&a);
//	for(i=2;i<=a/2;i++)
//	{
//		b=a%i;
//		if(b == 0)
//			break;
//	}
//	if(i<=a/2)
//		printf("%d��������\n",a);
//	else
//		printf("%d������\n",a);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a,i,k,b;
//	printf("���������֣�\n");
//	scanf("%d",&a);
//	k=sqrt(a);
//	for(i=2;i<=k;i++)
//	{
//		b=a%i;
//		if(b == 0)
//			break;
//	}
//	if(i<=k)
//		printf("%d��������\n",a);
//	else
//		printf("%d������\n",a);
//	return 0;
//}

// #include <stdio.h>
//int main()
//{
//	void pd(int n);
//	int n;
//	printf("���������֣�\n");
//	scanf("%d",&n);
//	pd(n);
//	return 0;
//}
//void pd(int n)
//{
//	int a,i;
//	
//	for(i=2;i<=n/2;i++)
//	{
//		a=n%i;
//		if(a==0)
//			break;
//	}
//	if(i<=n/2)
//		printf("%d��������\n",n);
//	else
//		printf("%d������\n",n);
//}

//#include <stdio.h>
//int main()
//{
//	void hh(int a[3][3]);
//	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	hh(a);
//	return 0;
//}
//void hh(int a[3][3])
//{
//	int i,j,t;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			if(i != j)
//			{
//				t=a[i][j];
//				a[i][j]=a[j][i];
//				a[j][i]=t;				
//			}
//		}
//	}
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%d\t",a[i][j]);
//		}
//		printf("\n");
//	}
//}










