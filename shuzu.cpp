//#include <stdio.h>
//int main()
//{
//	int i,a[10];
//	for(i=0;i<=9;i++)
//	{
//		a[i]=i;
//	}
//	for(i=9;i>=0;i--)
//	{
//		printf("%d ",a[i]);
//	}
//	return 0;
//}


////�����ʼ����δ��ʼ�� 
//#include <stdio.h>
//int main()
//{
//	int i,a[5]={3,4,5},b[5];
//	printf("\n array a is: ");
//	for(i=0;i<5;i++)
//	printf("%6d",a[i]);
//	printf("\n array b is:");
//	for(i=0;i<5;i++)
//	printf("%6d",b[i]);
//	return 0;
//}



////��̬��ֵ 
//#include <stdio.h> 
//int main()
//{
//	int i, max,a[10];
//	printf("input 10 numbers:\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//		max=a[0];
//	}
//	for(i=0;i<10;i++)
//	{
//		if(a[i]>max)
//		max = a[i];
//		printf("maxmun = %d\n",max);										
//	}
//	return 0;
//}




//ð������ 
#include <stdio.h>
int main()
{
	int a[5],i,j,t;
	printf("please input 15 numbers:\n");
	//��̬��ֵ 
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	//ð�� 
	for(j=0;j<5;j++)//���Ƶ���ÿһ�� 
	{
		for(i=0;i<5-j;i++)//����ÿһ�ɱȽ� 
		{
			if(a[i]>a[i+1])
			{
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
	
	printf("the short number is:\n");
	for(i=0;i<5;i++)
	{
		printf("%d  ",a[i]);
	}
	
	printf("\n");
	return 0;
 } 
