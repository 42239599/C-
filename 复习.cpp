//#include <stdio.h> 
//#include <math.h>
//int main()
//{
//	double a,b,c,disc,x1,x2,realpart,imagpart;
//	scanf("%lf %lf %lf",&a,&b,&c);
//	printf("the equation");
//	if(fabs(a)<=1e-6)			///�ж��Ƿ���һԪ���η��� 
//		printf(" is not a quadratic\n");	//���� 
//	else
//	{
//		disc=b*b-4*a*c;
//		if(fabs(disc)<=1e-6)
//			printf("has two equal roots:%8.4f\n",-b/(2*a));
//		else if(disc>1e-6)
//			{
//				x1=(-b+sqrt(disc))/(2*a);
//				x2=(-b-sqrt(disc))/(2*a);
//				printf("has distinct real roots:%8.4f\t%8.4f\n",x1,x2);
//			}
//		else
//		{
//			realpart=-b/(2*a);
//			imagpart=sqrt(-disc)/(2*a);
//			printf("%8.4f+%8.4fi\n",realpart,imagpart);
//			printf("%8.4f-%8.4fi\n",realpart,imagpart);
//		}
//	}
//	return 0;
//}

//#include <stdio.h> 
//int main()
//{
//	double p,s,d,t,basic_p;
//	printf("�����뵥�ۣ� ");
//	scanf("%lf",&basic_p);
//	printf("\n\n\n�������������(��λ:t)�� ");
//	scanf("%lf",&t);
//	printf("\n\n\n������·�̣� ");
//	scanf("%lf",&s);
////	if(s<250)
////		d=0;
////	else if(s>=250 && s<500)
////		d=0.02;
////	else if(s>=500 && s<1000)
////		d=0.05;
////	else if(s>=1000 && s<2000)
////		d=0.08;
////	else if(s>=2000 && s<3000)
////		d=0.10;
////	else
////		d=0.15; 
//	int a;
//	a=s/250;
//	switch(a)
//	{
//		case 12:d=0.15;break;
//		case 11:
//		case 10:
//		case 9:
//		case 8:d=0.1;break;
//		case 7:
//		case 6:
//		case 5:
//		case 4:d=0.08;break;
//		case 3:
//		case 2:d=0.05;break;
//		case 1:d=0.02;break;
//		case 0:d=0;break;
//	}
//	
//	p=basic_p*t*s*(1-d);
//	printf("���˷�Ϊ��%5.3f\n\n",p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float score;
//	printf("please input the score:\n");
//	scanf("%f",&score);
//	int a;
//	a=score/10.0;
//	printf("���ĳɼ��ȼ��ǣ� ");
//	switch(a)
//	{
//		case 10:
//		case  9:printf("A\n");break;
//		case 8:printf("B\n");break;
//		case 7:printf("C\n");break;
//		case 6:printf("D\n");break;
//		case 5:
//		case 4:
//		case 3:
//		case 2:	
//		case 1:
//		case 0:printf("E\n");break;
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n,a,q,b,s,g;
//	printf("������һ������\n");
//	scanf("%d",&a);
//	if(a>=1000 && a<10000)
//	{
//		printf("����һ����λ��\n\n");
//		q=a/1000;
//		b=(a-q*1000)/100;
//		s=(a-q*1000-b*100)/10;
//		g=(a-q*1000-b*100-s*10);
//		printf("�������ֱַ��ǣ�\nǧλ��%d\n��λ��%d\nʮλ��%d\n��λ��%d\n",q,b,s,g);
//		n=g*1000+s*100+b*10+q;
//		printf("�������Ϊ��\n%d\n",n);
//	}
//	return 0;
//}
















































