//#include <stdio.h> 
//int main()
//{
//	float p(int n,float x);
//	int n;
//	float x;
//	printf("������n��\n");
//	scanf("%d",&n);
//	printf("������x:\n");
//	scanf("%f",&x);
//	printf("\n%d�����Ӧ��ֵΪ��%f\n",n,p(n,x));	
//	return 0;
//}
//float p(int n,float x)
//{
//	if(n==0)
//		return 1;
//	else if(n==1)
//		return x;
//	else
//		return ((2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x))/n;
//}

//C������Ƶ���棨̷��ǿ��
//�½ڣ������� �ú���ʵ��ģ�黯������� 
//��ϰ7.13 �õݹ鷽����n�����õ¶���ʽ��ֵ�� 
//#include <stdio.h>
// 
//int main()
//{
//	double legendre_polynomial_expansion(int n, double x);
//	int n;
//	double x;
//	printf("������n��");
//	scanf("%d", &n);
//	printf("������x��");
//	scanf("%lf", &x);
//	printf("\n%d�����õ¶���ʽ��ֵΪ��%lf", n, legendre_polynomial_expansion(n, x));
//	return 0;
//}
// 
//double legendre_polynomial_expansion(int n, double x)
//{ 
//	if(n==0){
//		return 1;
//	}
//	else if(n==1){
//		return x;
//	}
//	else{
//		return ((2*n-1)*x-legendre_polynomial_expansion(n-1, x)-(n-1)*legendre_polynomial_expansion(n-2, x))/n;
//	}
//}


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	void aver_stu(float a[3][4]);
//	void aver_class(float a[3][4]);
//	void Max(float a[3][4]);
//	void fc(float a[3][4]);
//	float a[3][4];
//	int i,j;
//	for(i=0;i<3;i++)
//	{
//		printf("�������%d��ѧ���ĳɼ���\n",i+1);
//		for(j=0;j<4;j++)
//		{
//			scanf("%f",&a[i][j]);
//		}
//	}
//	aver_stu(a);
//	aver_class(a); 
//	Max(a); 
//	fc(a);
//	return 0;
//}
//
////��ÿλѧ��ƽ���� ��ÿ������һ�Σ�����Ҫ���� 
//void aver_stu(float a[3][4])
//{
//	int i,j;
//
//	for(i=0;i<3;i++)
//	{
//		float sum=0,pj;	
//		for(j=0;j<4;j++)
//		{
//			sum=sum+a[i][j];
//		}
//		pj=sum/4;
//		printf("��%dλѧ��ƽ����Ϊ%5.2f\n",i+1,pj);
//	}
//}
////��ÿ�ſ�ƽ����  ��ÿ������һ�Σ�����Ҫ���� 
//void aver_class(float a[3][4])
//{
//	int i,j;
//	for(j=0;j<4;j++)
//	{
//		float sum=0,pj=0;
//		for(i=0;i<3;i++)
//		{
//			sum=sum+a[i][j];
//		}
//		pj=sum/3;
//		printf("��%d�ſε�ƽ����Ϊ��%5.2f\n",j+1,pj);
//	}	
//}
////�����Ԫ���Լ����ڵ��к��� 
//void Max(float a[3][4])
//{
//	int i,j,h,l;
//	float max=a[0][0];
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			if(a[i][j]>max)
//			{
//				max=a[i][j];
//				h=i+1;
//				l=j+1;
//			}
//		}
//	}
//	printf("�ǵ�%dλ�ĵ�%d�ŵĳɼ���ߣ�%f\n",h,l,max);
//}
//void fc(float a[3][4])
//{
//	int i,j;
//	float sum=0,pj[3],x1,x2,fc_1;
//	for(i=0;i<3;i++)
//	{
//		sum=0,pj[i]=0;
//		for(j=0;j<4;j++)
//		{
//			sum=sum+a[i][j];
//		}
//		pj[i]=sum/4;
//	}
//	for(i=0,x1=x2=0;i<3;i++)
//	{
//		x1+=pow(pj[i],2);
//		x2+=pj[i];
//	}
//	
//	fc_1=x1/3-pow(x2/3,2);
//	printf("ƽ���ַ���Ϊ��%f\n",fc_1);
//}


#include <stdio.h>
int main()
{
	void input(char na[10][20],int nu[10]);
	void sorts(char na[][20],int nu[10]);
	char name[10][20];
	int num[10];
	input(name,num);
	sorts(name,num); 
	
	return 0;
}
//���� 
void input(char na[10][20],int nu[10])
{
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("�������%d��ְ��������\n",i+1);
		scanf("%s",&na[i]);
		printf("�������%d����ְ���ţ�\n",i+1);
		scanf("%d",&nu[i]);
	}
}
//����
void sorts(char na[][20],int nu[10])
{
	int i,j,temp;
	for(j=0;j<9;j++)
	{
		for(i=0;i<9-j;j++)
		{
			
		}
	}
	
 } 











































