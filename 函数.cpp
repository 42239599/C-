///����
//�����вκ��� 
////��дһ����Ҫ���û������ĸ����֣����ǰ���������������������������������Լ��ĸ����������
//#include <stdio.h>
//int main()
//{
//	float max(float x,float y);
//	float a[4];
//	int i;
//	float t,u,v;
//	for(i=0;i<4;i++)
//	{
//		printf("�������%d�����֣�",i+1);
//		scanf("%f",&a[i]);
//	}
//	t=max(a[0],a[1]);
//	u=max(a[2],a[3]);
//	v=max(t,u);
//	
//	printf("ǰ�������ֵΪ��%5.2f\n",t);
//	printf("���������ֵΪ��%5.2f\n",u);	
//	printf("���������ֵΪ��%5.2f\n",v);	
//	return 0;
// } 
//float max(float x,float y)
//{
//	float zuidazhi;
//	if(x>y)
//	{
//		zuidazhi = x;
//	}
//	else
//	{
//		zuidazhi = y ;
//	}
//	return(zuidazhi);
//}

////������С�飬�ֱ���5��ѧ����10��ѧ��������������Щѧ���ĳɼ���������һ��aver������������С���ƽ����
//#include <stdio.h>
//int main()
//{
//	float aver(float a[],int n);
//	float zu1[5],zu2[10];
//	int i;
//	printf("������1��ĳɼ�:\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%f",&zu1[i]);
//	}
//	printf("������2��ĳɼ�:\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%f",&zu2[i]);
//	}	
//	
//	
//	printf("1��ƽ����Ϊ��%f",aver(zu1,5));
//	printf("2��ƽ����Ϊ��%f",aver(zu2,10));	
//	return 0;
//}
//
//float aver(float a[],int n)
//{
//	int i;
//	float sum=a[0],pingjunfen;
//	for(i=1;i<n;i++)
//	{
//		sum = sum + a[1];
//	}
//	pingjunfen =sum/n;
//	return (pingjunfen);
//	
//}

////�����޲κ��� 
//��������ʮ������������ʮ������С��������
//#include <stdio.h>
//int main()
//{
//	void paixu(int a[],int n);
//	int i,a[10];
//	printf("������ʮ����:\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	paixu(a,10);
//	printf("�������£�\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	return 0;
// } 
//void paixu(int a[],int n)
//{
//	int i,j,t;
//	for(j=0;j<n-1;j++)
//	{
//		for(i=0;i<n-1;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t=a[i];
//				a[i]=a[i+1];
//				a[i+1]=t;
//			}
//		}
//	}//ð������ 
//	
//}

//////������Ƕ��
////������4�����������ҳ���������� 
//#include <stdio.h>
//int main()
//{
//	int max4(int a,int b,int c,int d);
//	int a,b,c,d,zuidashu;
//	printf("�������ĸ�����:\n");
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	
//	zuidashu = max4(a,b,c,d);
//	
//	printf("���ֵ��%d\n",zuidashu);
//	
//	return 0;
//}
//int max4(int a,int b,int c,int d)
//{
//	int max2(int x,int y);
//	return(max2(max2(max2(a,b),c),d));
//}
//int max2(int x,int y)
//{
//	return(x>y?x:y);
//}


////�����ĵݹ�
//��5��ѧ����������ȵ��ĸ���2�꣬���ıȵ�����2�꣬�����ȵڶ���2�꣬�ڶ��ȵ�һ��2�꣬�����һ��10�꣬���̼�������Ϊѧ������
//
//#include <stdio.h>
//int main()
//{
//	int age(int n);
//	printf("�����ѧ������Ϊ%d\n",age(5));	
//	return 0;
// } 
//int age(int n)
//{
//	int nianling;
//	if(n==1)
//	{
//		nianling =10;
//	}
//	else
//	{
//		nianling = age(n-1)+2;
//		return (nianling);
//	}
//	
//}

////�õݹ�ķ�����׳� n!
#include <stdio.h>
int main()
{
	int jiecheng(int n);
	int n;
	printf("������һ��������\n");
	scanf("%d",&n);
	
	printf("%d �Ľ׳��ǣ�%d\n",n,jiecheng(n));
	
	return 0;
 } 
int jiecheng(int n)
{
	int jieguo;
	if(n<0)
	{
		printf("��������ֲ���\n");
	}
	if(n==0 || n==1)
	{
		jieguo = 1;
	}
	else
	{
		jieguo = jiecheng(n-1)*n;
	}
	return (jieguo);
}



 
