////ѭ������
//Fibonacci���� 
//#include <stdio.h>
//int main()
//{
//	int f1=1,f2=1,f3;
//	int i;
//	printf("%12d\n%12d\n",f1,f2);
//	for(i=1;i<=38;i++)
//	{
//		f3=f1+f2;
//		printf("%12d\n",f3);
//		f1=f2;
//		f2=f3;
//	}
//	return 0;
// } 

//#include <stdio.h>
//int main()
//{
//	int f1=1,f2=1;
//	int i;
//	for(i=1;i<=20;i++)
//	{
//		printf("%12d%12d",f1,f2);
//		if(i%2 == 0)
//		printf("\n");
//		f1=f1+f2;
//		f2=f2+f1;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int sign = 1;
//	double pi=0.0,n=1.0,term=1.0;
//	while(fabs(term)>=1e-6)
//	{
//		pi=pi+term;
//		n=n+2;
//		sign=-sign;
//		term=sign/n;
//	}
//	pi=pi*4;
//	printf("pi=%10.8f\n",pi);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n,i;
//	printf("�������������֣�\n");
//	scanf("%d",&n);
//	for(i=2;i<=n-1;i++)
//	{
//		if(n%i == 0)
//		break;
//	}
//		if(i<n)
//		printf("%d��������\n",n);
//		else
//		printf("%d������\n",n);	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n,i;
//	printf("���������3������\n");
//	scanf("%d",&n);
//	for(i=2;i<=n-1;i++)
//	{
//		if(n%i == 0)
//		break;
//
//	}
//	if(i<n)
//	{
//		printf("��������\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n,i;
//	printf("���������3�����֣�\n");
//	scanf("%d",&n);
//	for(i=2;i<=n/2;i++)
//	{
//		if(n%i == 0);
//		break;
//	}
//	if(i<n/2)
//	printf("��������\n");
//	else
//	printf("������\n");
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n ,i,k;
//	printf("���������֣�\n");
//	scanf("%d",&n);
//	k=(int)sqrt(n);
//	for(i=1;i<=k;i++)
//	{
//		if(n%i == 0)
//		break;
//	}
//	if(i<=k)
//	printf("��������\n");
//	else
//	printf("������\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,n,m;
//	printf("������������\n");
//	for(n=100;n<=200;n++)
//	{
//		for(i=2;i<=n/2;i++)
//		{
//			if(n%i == 0)
//			break;
//		}
//		if(i>=n/2)
//		{
//			printf("%d\t",n);
//			m=m+1;
//			if(m%10 == 0)
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i,n,k,m;
//	for(n=100;n<=200;n++)
//	{
//		k=sqrt(n);
//		for(i=2;i<=k;i++)
//		{
//			if(n%i == 0)
//			break;
//		}
//		if(i>=k+1)
//		{
//			printf("%d\t",n);
//			m=m+1;
//		}
//		if(m%10 == 0)
//		printf("\n");			
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char c;
	c=getchar();
	while (c != '\n')
	{
		if(c >='A' && c <'W' || c >='a' && c < 'w')
		{
			c=c+4;
		}
		if(c >='W' && c <='Z' || c>='w' && c <='z')
		{
			c=c-22;
		}
		printf("%c",c);	
		c=getchar();	
		
	}
	printf("\n");
	return 0;
}















