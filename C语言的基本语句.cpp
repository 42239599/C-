
////��ѧ���� 
//�������������� a,b,c �ĳ������ù�ʽarea = s*(s-a)*(s-b)*(s-c)�����η� 
//��������ε����area����ʽ�е�s=(a+b+c)/2��; 
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	double a,b,c;
//	double s;
//	double area;
//	printf("please input 3 numbers:\n");
//	scanf("%lf %lf %lf",&a,&b,&c);
//	
//	s = (a+b+c)/2;
//	area = sqrt (s*(s-a)*(s-b)*(s-c));
//	
//	printf("a=%lf\tb=%lf\tc=%lf\n",a,b,c);
//	printf("area = %lf\n",area);
//	
//	return 0;
//}


//����x1,x2�������ʽ����ax^2+bx+c=0 ����������a b c �ɼ������룬��b^2-4ac>0
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a,b,c;
//	double p,x1,x2;
//	printf("please input 3 numbers:\n");
//	scanf("%lf %lf %lf",&a,&b,&c);
//	p = sqrt(b*b-4.0*a*c);
//	
//	if(p>0)
//	{
//		x1 = (-b+p)/(2.0*a);
//		x2 = (-b-p)/(2.0*a);
//		printf("a=%lf	b=%lf	c=%lf\n",a,b,c);
//		printf("x1 = %5.2f\tx2=%5.2f\n",x1,x2);
//	
//	}
//	else
//	{
//		printf("û��ʵ��");
//	}
//
//	return 0;
// } 


//С����н������Ϊ-10%�����ù�ʽ p=(1+r)^n,����10�������н�ʺͽ�����������˶���
//r�������ʣ�n������pΪ�������ȵı���
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double p,r,n;
//
//	r = -0.1;
//	n = 10;
//	
//	p = pow(1+r,n);
//	printf("p=%f\n",p);
//	
//	return 0;
// } 

//����һ������0С��999�Ŀ��Դ�С�������֣�
//��������λ��ʮλ���Լ���λ������ 
//#include <stdio.h>
//int main()
//{
//	double a;
//	int b,c,d;
//	printf("������һ�������㣬��С��999�Ŀ��Դ�С��������\n");
//	scanf("%lf",&a);
//	
//	b =(int)(a/100.0);//��λ 
//	c =(int)((a-b*100)/10);//ʮλ
//	d =(int)(a-b*100-c*10);//��λ 
//	
//	printf("��λ:%d	ʮλ:%d	��λ:%d",b,c,d);
//	
//	return 0;
//}


























 
