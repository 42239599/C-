///ѡ�����
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a,b,c,disc,x1,x2,p,q;
//	scanf("%lf %lf %lf",&a,&b,&c);
//	disc = b*b-4*a*c;
//	if(disc<0)
//	{
//		printf("�˷�����ʵ��\n");
//	}
//	else
//	{
//		p=-b/(2.0*a);
//		q=sqrt(disc)/(2.0*a);
//		x1=p+q;
//		x2=p-q;
//		printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
//	}
//	
//	return 0;
// } 

//������С
//#include <stdio.h>
//int main()
//{
//	float a,b,t;
//	scanf("%f %f",&a,&b);
//	if(a>b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	printf("%5.2f\n%55.2f\n",a,b);
//	
//	return 0;
// } 

////����������a,b,cҪ���ɴ�С����
//#include <stdio.h>
//int main()
//{
//	int a,b,c,t;
//	printf("��������������\n");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a<b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	if(a<c)
//	{
//		t=a;
//		a=c;
//		c=t;
//	}
//	if(b<c)
//	{
//		t=b;
//		b=c;
//		c=t;
//	}
//	printf("������ǣ�\n");
//	printf("%d\t%d\t%d\t",a,b,c);
//	
//	return 0;
// } 

////�б���year��ʾ��ĳһ���Ƿ�Ϊ���꣬
///1���ܱ�4�����������ܱ�100����  2���ܱ�400����
//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("���������:\n");
//	scanf("%d",&year);
//	if(year%4==0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	
//	return 0;
// } 

//
//#include <stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c",&ch);
////	if(ch>='A' && ch<='Z')
////	{
////		ch = ch+32;
////	}
////	printf("%c\n",ch);
////	
//	ch=(ch>='A' && ch<='Z')?(ch+32):ch;
//	printf("%c\n",ch);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("��������������\n");
//	scanf("%d",&a);
//	if(a<0)
//	{
//		printf("y=-1");
//	}
//	else if(a==0)
//	{
//		printf("y=0");
//	}
//	else
//	{
//		printf("y=1");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char ch;
	printf("���������ĵȼ�:\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':printf("80������\n");
		break;
		case 'B':printf("70~84��\n");
		break;
		case 'C':printf("60~69��\n");
		break;
		case 'D':printf("60������\n");
		break;
		default:printf("���������������������\n");
		break;
	}
	
	
	return 0;
}












