/////ѭ���ṹ�������
//#include <stdio.h>
//int main()
//{
//	int a=1,sum;
//	while(a<=100)
//	{
//		sum = sum+a;
//		a++;
//	}
//	printf("sum is :%d\n",sum);
//	return 0;
// } 

//#include  <stdio.h>
//int main()
//{
//	int i=1,sum=0;
//	do
//	{
//		sum = sum+i;
//		i++;
//	}
//	while( i<=100);
//	printf("sum is :%d\n",sum);
//	return 0;
// } 

//#include <stdio.h>
//int main()
//{
//	int i=1;
//	float sum,a,aver;
//	for(i=1;i<=1000;i++)
//	{
//		printf("�������%dλͬѧ�ľ�\n",i);
//		scanf("%f",&a);
//		sum = sum+a;
//		if(sum>=100000)
//		break;
//	}
//	aver = sum /i;
//	printf("�˴ξ������Ϊ��%d\n�˾����Ϊ��%10.2f\n",i,aver);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i=100;
//	for(i=100;i<=200;i++)
//	{
//		if(i%3 == 0)
//			continue;
//		printf("%d\n",i);	
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for(i=1;i<=20;i++)
//	{
//		
//		if(i%5==0)
//		{
//			printf("%d",i);	
//			printf("\n");
//			continue;
//		}
//		printf("%d",i);	
//		printf("\t");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i , p , j;
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			p=i*j;
//			printf("%d\t",p);	
//		}
//		printf("\n");
//	}	
//	return 0;
//}

#include <stdio.h>
#include <math.h>
int main()
{
	int sign = 1;///sign������ʾ��ֵ�ķ��� 
	double pi = 0.0,n=1.0,term=1.0;//pi��ʼ�������ʽ��ֵ��������е�ֵ��n�����ĸ 
								   //term����ǰ��ֵ 
	while(fabs(term)>=1e-6) //��鵱ǰ��term�ľ���ֵ�Ƿ���ڻ����10��-6�η� 
	{
		pi = pi + term;//�ѵ�ǰ��term�ۼ���pi�� 
		n=n+2;//n+2����һ��ķ�ĸ 
		sign=-sign;//sign������ţ���һ��ķ�������һ��ķ����෴ 
		term=sign/n;//�����һ���ֵterm 
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	return 0;
}









