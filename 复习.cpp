//#include <stdio.h> 
//int main()
//{
//	int i=1,sum=0;
//	while(i<=100)
//	{
//		sum+=i;
//		i++;
//	}
//	printf("�����%d\n",sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n=1,i=100,sum;
//	sum=(i+n)*100/2;
//	printf("����ǣ�%d\n",sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float money,sum=0,aver;
//	int count,i;
//	for(i=0;i<1000;i++)
//	{
//		printf("�������%dλѧ���ľ�",i+1);
//		scanf("%f",&money);
//		sum=sum+money;
//		if(sum>=100000)
//		break;
//		count ++;
//		printf("\n");
//	}
//	aver=sum/count;
//	printf("�������Ϊ��%d\n�˾����Ϊ%5.2f\n",count,aver);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	for(n=100;n<=200;n++)
//	{
//		if(n%3!=0)
//		{
//			printf("%d\n",n);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	for(n=100;n<=200;n++)
//	{
//		if(n%3==0)
//			continue;
//		printf("%d\n",n);
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,j;
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			printf("%4d",i*j);
//			if(j%5==0)
//			{
//				printf("\n");
//				break;	
//			}
//			
//		}
//	}
//	
//	return 0;
//}

//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	float sum=0.0,fenzi=1.0,fenmu=1.0,terms=1.0;
//	float result;
//	while(fabs(terms)>=1e-6)
//	{
//		sum+=terms;	
//		fenmu+=2;
//		fenzi=-fenzi;
//		terms=fenzi/fenmu;
//	}
//	result =sum*4;
//	printf("result is:%5.2f\n",result);
//	
//	return 0;
//}

////쳲���������
//#include <stdio.h> 
//int main()
//{
//	int i,f1=1,f2=1;
//	for(i=1;i<=20;i++)
//	{
//		printf("%12d%12d",f1,f2);
//		if(i%2==0)
//			printf("\n");
//		f1=f1+f2;
//		f2=f2+f1;
//	}
//	
//	return 0;
//}

//������
//#include <stdio.h> 
//int main()
//{
//	int n,i;
//	printf("������һ������3������\n");
//	scanf("%d",&n);
//	for(i=2;i<=n-1;i++)
//	{
//		if(n%i==0)
//		break;
//	}
//	if(i>=2&&i<=n-1)
//		printf("��������\n");
//	else
//		printf("������\n");
//	return 0;
//}
//�м��� 
//#include <stdio.h>
//int main()
//{
//	int i,n,a;
//	printf("���������3������\n");
//	scanf("%d",&n);
//	a=n/2;
//	for(i=2;i<=a;i++)
//	{
//		if(n%i==0)
//		break;
//	}
//	if(i==a+1)
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}
//��ƽ��
//#include <stdio.h>
//#include <math.h> 
//int main()
//{
//	int n,i,k;
//	printf("please input a number:\n");
//	scanf("%d",&n);
//	k=sqrt(n);
//	for(i=2;i<=k;i++)
//	{
//		if(n%i==0)
//		break;
//	}
//	if(i>=k+1)
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}
//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	int i,n,k,count;
//	printf("�������£�\n"); 
//	for(n=100;n<=200;n++)
//	{
//		k=sqrt(n);
//		for(i=2;i<=k;i++)
//		{
//			if(n%i==0)
//				break;
//		}
//		if(i>=k+1)
//		{
//			printf("%d\n",n);	
//			count ++;
//		}
//	}
//	printf("һ����%d��\n",count);
//	return 0;
//}
















