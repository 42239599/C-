//#include <stdio.h>
//int main(void)
//{
//	int a[100],i,j;
//	for(i=0;i<100;i++)
//	{
//		a[i]=i+1;
//	}
//	a[0]=0;
//	for(i=1;i<99;i++)
//	{
//		for(j=i+1;j<100;j++)
//		{
//			if(a[i]!=0 && a[j]!=0)
//			{
//				if(a[j]%a[i]==0)
//					a[j]=0;
//			}
//		}
//	}
//	printf("result is:\n");
//	for(i=1;i<100;i++)
//	{
//		if(a[i]!=0)
//		printf("%d\n",a[i]);
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10]={10,20,23,24,50,54,56,70,88};
//	int i,n;
//	printf("please input the inseart number:\n");
//	scanf("%d",&n);
//	
//	if(n<a[0])
//	{
//		for(i=8;i>=0;i--)
//		{
//			a[i+1]=a[i];
//		}
//		a[0]=n;
//	}
//	else
//	{
//		for(i=8;i>=0;i--)
//		{
//			if(a[i]>n)
//				a[i+1]=a[i];
//			else
//			{
//				a[i+1]=n;
//				break;
//			}
//		}
//	}
//	
//	printf("result is :\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a[6]={8,6,5,4,2,1};
//	int mid,j,i,t;
//	mid=6/2;
//	for(i=0,j=5;i<mid;i++,j--)
//	{
//		t=a[i];
//		a[i]=a[j];
//		a[j]=t;
//	 } 
//	printf("result is:\n");
//	for(i=0;i<6;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	
//	return 0;
//}

//�������
//#include <stdio.h> 
//int main(void)
//{
//	int a[100][100],i,j,n;
//	printf("������ϣ���ŵ�����\n");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			if(j==0 || j==i)
//			{
//				a[i][j]=1;
//				printf("%4d",a[i][j]);
//				if(i>1 && j>0)
//				{
//					a[i][j]=a[i-1][j-1]+a[i-1][j];
//					printf("%4d",a[i][j]);	
//				}	
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a[100][100],i,j,n;
//	printf("please input :\n");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			if(j==0 || j==i)
//			{
//				a[i][j]=1;
//			}
//		}
//	}
//	
//	for(i=2;i<n;i++)
//	{
//		for(j=1;j<i;j++)
//		{
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//		}
//	}
//	
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main(void)
{
	void sort(int a[],int x,int n);
	int a[15]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30};
	int n;
	printf("������Ҫ���ҵ�����\n");
	scanf("%d",&n); 
	sort(a,15,n);
	return 0;
}
void sort(int a[],int x,int n)
{
	int right,left,mid;
	right=x-1;left=0;
	while(right >= left)
	{
		mid=(right+left)/2;
		if(a[mid]<n)
		{
			left=mid+1;
		}
		if(a[mid]>n)
		{
			right=mid-1;
		}
		if(a[mid]==n)
		{
			printf("�ҵ���,�ڵ�%d��λ��\n",mid+1);
			break;			
		}
	}
	if(n!=a[mid])
		printf("û�ҵ�\n");
}

//#include <stdio.h>
//void zb(int key,int a[],int n)
//{
//	int mid,low,high,i;
//	int  count1=0,count=0;
//	low=0;
//	high=n-1;
//	while(high>=low)
//	{
//		count++;
//		mid=(low+high)/2;
//		if(key<a[mid])
//		{
//			high=mid-1;
//		}
//		else if(key>a[mid])
//		{
//			low=mid+1;
//		}
//		if(key == a[mid])
//		{
//			printf("�ҵ�Ԫ�� %d �ˣ����� %d ��ѭ���ҵ��ģ�a[%d]=%d\n",key,count,mid,key);
//			count1++;
//			break;
//		}
//		if(count1==1)
//		{
//			printf("�����Ԫ���������������!\n");
//		}
//	}	
//}
//
//int main()
//{
//	int  a[100],key,i,j,t,n;
//	void zb(int key,int a[],int n);
//	printf("������Ԫ�ظ�����\n");
//	scanf("%d",&n);
//	printf("���մ�С�����˳����������Ԫ��:\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	} 
//	printf("������Ҫ���ҵ���:\n");
//	scanf("%d",&key);
//	
//	for(j=0;j<n-1;j++)
//	{
//		for(i=j;i<n-1;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t=a[i];
//				a[i]=a[i+1];
//				a[i+1]=t;
//			}
//		}	
//	}//���� 
//	
//	zb(key,a,n);
//	printf("\n");
//	return 0;
//}





































