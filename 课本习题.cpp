///�����������
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a,b,c,s,area;
//	printf("�����������ε����ߣ�\n");
//	scanf("%f %f %f",&a,&b,&c);
//	s=(a+b+c)/2.0;
//	area=sqrt(s*(s-a)*(s-b)*(s-c));
//	printf("���Ϊ ��%5.2f\n",area);
//	return 0;
// } 

///��a*x^2+bx+c=0���̵ĸ���a,b,c�ɼ������룬��b^2-4ac>0
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float x1,x2,p,q,r;
	printf("��������������\n");
	scanf("%d %d %d",&a,&b,&c);
	r=b*b-4.0*a*c;
	p=-b/2.0*a;
	q=sqrt(r) / 2.0*a;
	if(r>0)
	{
		x1=p+q;
		x2=p-q;
		printf("����ʵ���ֱ���:\nx1=%5.2f\nx2=%5.2f\n",x1,x2);		
	}
	else
	{
		printf("û��ʵ����\n");
	}

	return 0;
 } 











