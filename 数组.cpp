////����
//����һά����
////����ʮ���������������������С����������������Ľ��
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int i,j,t;
//	printf("������ʮ�����:\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//			if(a[i]>a[j])
//			{
//				t = a[i];
//				a[i] =a[j];
//				a[j] =t;
//			}
//		}
//	}	
//	printf("����������ǣ�\n");
//	for(i=0;i<10;i++)	
//	printf("%d\t",a[i]);
//	printf("\n");
//	return 0;
// } 

//��ʮ������Ԫ�����θ�ֵΪ0,1,2,3,4,5,6,7,8,9,�����������
//#include <stdio.h>
//int main()
//{
//	int a[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i=9;
//	for(i=9;i>=0;i--)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
// } 

//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int i,j,t;
//	printf("������ʮ������\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(j=0;j<9;j++)//��һ���� ��9�� 
//	{
//		for(i=0;i<9-j;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t = a[i];
//				a[i] = a[i+1];
//				a[i+1] = t;
//			}
//		}
//	}
//	printf("�����Ϊ��\n");
//	for(i=0;i<10;i++)
//	printf("%d\t",a[i]);
//	printf("\n");
//	return 0;
//}

//123 456 789 147 258 369 963 852 741 888
//ѡ������ 
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int i,j,t;
//	printf("������10�����֣�\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	 } 
//	
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//			if(a[i]>a[j])
//			{
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}
//	printf("��С��������Ϊ��\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	
//	return 0;
//}

////ð�ݣ�����
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int i,j,t;
//	printf("������ʮ�����֣�\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	for(j=0;j<9;j++)
//	{
//		for(i=0;i<9-j;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t=a[i];
//				a[i]=a[i+1];
//				a[i+1]=t;
//			}
//		}
//	}
//	printf("�������£�\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	return 0;
// } 





















 
