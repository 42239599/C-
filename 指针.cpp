//#include <stdio.h> 
//int main(void)
//{
//	void sort(int a[],int n,int m);
//	int i,n,m,a[100];
//	printf("���������ָ�����\n");
//	scanf("%d",&n);
//	printf("������ÿ�����֣�\n");
//	for(i=0;i<n;i++) 
//		scanf("%d",&a[i]);
//	printf("������Ҫ���Ƶ�λ����\n");
//		scanf("%d",&m);
//	sort(a,n,m);
//	printf("�����Ľ��Ϊ��\n");
//	for(i=n-m;i<2*n;i++)
//		printf("%d\t",a[i]);
//	return 0;
//}
//int sort(int a[],int n,int m)
//{
//	int i;
//	for(i=0;i<n-m;i++,n++)
//	{
//		a[n]=a[i];
//	}
//}

//#include<stdio.h>
//int main()
//{
//	void move(int[20], int, int);
//	int number[20], n, m, i;
//	printf("���������ָ�����\n");
//	scanf("%d",&n);
//	printf("������ÿ�����֣�\n");
//	for (i = 0;i < n;i++)
//		scanf("%d", &number[i]);
//	printf("������Ҫ�ƶ���λ����\n");
//	scanf("%d", &m);
//	move(number, n, m);
//	printf("����ǣ�\n"); 
//	for (i = 0;i < n;i++)
//		printf("%d  ", number[i]);
//}
// 
//void move(int array[20], int n, int m)
//{
//	int *p, arrayend;
//	arrayend = *(array + n - 1);
//	for (p = array + n - 1;p > array;p--)
//		*p = *(p - 1);
//	*array = arrayend;
//	m--;
//	if (m > 0)move(array, n, m);
//}


//#include <stdio.h>
//int main()
//{
//	void sort(int a[],int n,int m);
//	int a[100],i,n,m;
//	printf("���������ָ�����\n");
//		scanf("%d",&n);
//	printf("������ÿ�����֣�\n");
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
//	printf("������Ҫλ�Ƶ�λ����\n");
//	scanf("%d",&m);
//	sort(a,n,m);
//	printf("����ǣ�\n");
//	for(i=0;i<n;i++)
//		printf("%d\t",a[i]);
//	return 0;
//}
//void sort(int a[],int n,int m)
//{
//	int aend,*p;
//	aend=*(a+n-1);
//	for(p=a+n-1;p>a;p--)
//	{
//		*p=*(p-1);
//	}
//	*a=aend;
//	m--;
//	if(m>0)	sort(a,n,m);
//}
//
//#include

//#include <stdio.h>
//int main(void)
//{
//	int n,a[100],*p,i,m=0,k=0;
//	printf("������������\n");
//		scanf("%d",&n);
//	for(i=0;i<n;i++)
//		a[i]=i+1;
//		
//	p=a;
//	i=0;
//	while(m<n-1)
//	{
//		if(*(p+i) != 0)
//			k++;
//		if(k==3)
//		{
//			*(p+i)=0;
//			m++;
//			k=0;
//		}
//		i++;
//		if(i==n)
//			i=0;
//	}
//	while(*p==0)
//	 p++;
//	printf("%d\t",*p);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	void sort(int a[],int n,int m);
//	int i,n,m,a[20];
//	printf("�����������\n");
//		scanf("%d",&n);
//	printf("���������\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("����Ҫλ�Ƶ����֣�\n");
//	scanf("%d",&m);
//	sort(a,n,m);
//	printf("�����\n");
//	for(i=0;i<n;i++)
//		printf("%d\t",a[i]);
//	return 0 ;
//}
//void sort(int a[],int n,int m)
//{
//	int *p,aend;
//	aend=*(a+n-1);
//	for(p=a+n-1;p>a;p--)
//		*p=*(p-1);
//	*a=aend;
//	m--;
//	if(m>0)	sort(a,n,m);	
//}

//#include <stdio.h>
//int main(void)
//{
//	int *p,a[100],i,n,m=0,k=0;
//	printf("������������\n");
//		scanf("%d",&n);
//	for(i=0;i<n;i++)
//		a[i]=i+1;
//	
//	p=a;
//	i=0;
//	
//	while(m<n-1)
//	{
//		if(*(p+i)!=0)
//			k++;
//		if(k==3)
//		{
//			*(p+i)=0;
//			k=0;
//			m++;
//		}
//		i++;
//		if(i==n)
//			i=0;
//	}
//	while(*p==0)
//		p++;
//	printf("%d\n",*p);
//	
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int len(char *p);
//	char a[100];
//	printf("�����뵥�ʣ�\n");
//	gets(a);
//	
//	printf("�����ǣ�%d",len(a));
//	return 0;
//}
//int len(char *p)
//{
//	int i,count=0;
//	for(i=0;*(p+i) != '\0';i++)
//	{
//		count++;
//	}
//	return count;
////}
//
//#include <stdio.h>
//int main() 
//{
//	void opa(char *p,int m,char *q);
//	char a[20],b[20];
//	printf("������ԭ���ӣ�\n");
//		gets(a);
//	int m;
//	printf("�����뿪ʼ���Ƶ�λ����\n");
//	scanf("%d",&m);
//	opa(a,m,b);
//	printf("\n����ǣ�%s\n",b);
//	return 0;
//}
//void opa(char *p,int m,char *q)
//{
//	int i,j=0;
//	for(i=m-1;*(p+i) != '\0';i++,j++)
//		*(q+j)=*(p+i);
//	*(q+j)='\0';
//	
//}

//#include <stdio.h>
//int main(void)
//{
//	void opa(int (*p)[3]);
//	int a[3][3],i,j;
//	printf("������12������\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//			scanf("%d",&a[i][j]);
//	}
//		
//	printf("ԭ�����������У�\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%5d",a[i][j]);
//		}
//		printf("\n\n");
//	}	
//	
//	opa(a);
//		
//	printf("������Ľ���ǣ�\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//			printf("%5d",a[i][j]);
//		printf("\n\n");
//	}
//	
//	return 0;
//}
//void opa(int (*p)[3])
//{
//	int i,j,t;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			if(i!=j)
//			{
//				t=*(*(p+i)+j);
//				*(*(p+i)+j)=*(*(p+j)+i);
//				*(*(p+j)+i)=t;
//			}
//		}
//	}
//}


//#include <stdio.h>
//int main()
//{
//	void trans(int (*p)[5]);
//	int a[5][5],i,j;
//	int (*q)[5];
//	q=a;
//	printf("������һ��5*5�����;���\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("ԭ�����ǣ�\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%-5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	trans(q);
//	printf("������ǣ�\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%-5d",*(*(q+i)+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//void trans(int (*p)[5])
//{
//	int max,min[4],i,j,ti,tj;
//	void swap(int *,int *);	//���彻������ 
////�ҳ������ 
//	max=*(*(p+2)+2);
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(*(*(p+i)+j)>max)
//			{
//				max=*(*(p+i)+j);
//				ti=i;tj=j;
//			}
//		}
//	}
//	if(!(ti==2 && tj==2))
//	swap(*(p+2)+2,*(p+ti)+tj);
////�ҳ���һ����С�� 
//	min[0]=**p;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(*(*(p+i)+j)<min[0])
//			{
//					min[0]=*(*(p+i)+j);
//					ti=i;tj=j;
//			}
//		}
//	}
//	if(**p != min[0])
//	swap(*p,*(p+ti)+tj);
////�ҳ��ڶ�����С��	
//	min[1]=*(*(p)+4);
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(!(i==0 && j==0))
//			{
//				if(*(*(p+i)+j)<min[1])
//				{
//					min[1]=*(*(p+i)+j);
//					ti=i;tj=j;
//				}
//			}
//		}
//	}
//	if(*(*(p)+4) != min[1])
//	swap(*(p)+4,*(p+ti)+tj);
////�ҳ���������С�� 
//	min[2]=*(*(p+4));
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(!(i==0 && j==0) && !(i==0 && j==4))
//			{
//				if(*(*(p+i)+j)<min[2])
//				{
//					min[2]=*(*(p+i)+j);
//					ti=i;tj=j;
//				}
//			}
//		}
//	}
//	if(*(*(p+4)) != min[2])
//	swap(*(p+4),*(p+ti)+tj);
////�ҳ����ĸ���С��	
//	min[3]=*(*(p+4)+4);
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(!(i==0 && j==0)&& !(i==0 && j==4) && !(i==4 && j==0))
//			{
//				if(*(*(p+i)+j)<min[3])
//				{
//					min[3]=*(*(p+i)+j);
//					ti=i;tj=j;
//				}
//			}
//		}
//	}
//	if(*(*(p+4)+4) != min[3])
//	swap(*(p+4)+4,*(p+ti)+tj);
//}
////�������� 
//void swap(int *a,int *b)
//{
//	int t;
//	t=*a;
//	*a=*b;
//	*b=t;
//}


//#include <stdio.h>
//int main()
//{
//	void opa(int (*p)[5]);
//	int a[5][5],i,j;
//	printf("������25������\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("ԭ�����������£�\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");
//	}	
//	opa(a);
//	
//	printf("\n������£�\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
////52 14 36 23 78 98 89 69 58 47 10 20 30 40 50 60 70 80 90 99 77 55 66 11 22
//void opa(int (*p)[5]) 
//{
//	void swap(int *a,int *b);
//	int i,j,ti,tj;
//	int max,min[4];
//	
//	max=*(*(p+2)+2);
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(*(*(p+i)+j)>max)
//			{
//				max=*(*(p+i)+j);
//				ti=i;tj=j;
//			}
//		}
//	}
//	if(!(ti==2 && tj==2))
//		swap((*(p+ti)+tj),(*(p+2)+2));
//////////
//	min[0]=**p;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(*(*(p+i)+j)<min[0])
//			{
//				min[0]=*(*(p+i)+j);
//				ti=i;tj=j;
//			}
//		}
//	}
//	if(**p != min[0])
//		swap((*(p+ti)+tj),*p);
////////// 
//	min[1]=*(*(p)+4);
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(!(i==0 && j==0))
//			if(*(*(p+i)+j)<min[1])
//			{
//				min[1]=*(*(p+i)+j);
//				ti=i;tj=j;
//			}
//		}
//	}
//	if( *(*(p)+4) != min[1]);
//		swap(*(p+ti)+tj,*(p)+4);
//	
//////// 
//	min[2]=*(*(p+4));
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(!(i==0 && j==0) && !(i==0 && j==4))
//			{
//				if(*(*(p+i)+j)<min[2])
//				{
//					min[2]=*(*(p+i)+j);
//					ti=i;tj=j;
//				}
//			}
//		}
//	}
//	if(min[2] != *(*(p+4)))
//		swap(*(p+ti)+tj,*(p+4));	
////////	
//	min[3]=*(*(p+4)+4);
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(!(i==0 && j==0) && !(i==0 && j==4) && !(i==4 && j==0) )
//			{
//				if(min[3]>*(*(p+i)+j))
//				{
//					min[3]=*(*(p+i)+j);
//					ti=i;tj=j;
//				}
//			}
//		}
//	}
//	if(*(*(p+4)+4)!=min[3]  )
//		swap(*(p+ti)+tj,*(p+4)+4);
//				
//}
//void swap(int *a,int *b)
//{
//	int t;
//	t=*a;
//	*a=*b;
//	*b=t;
//}














































