//#include <stdio.h> 
//int main()
//{
//	int a[100],i,n,m=0,k=0,*p=a;
//	printf("���������֣�\n");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		a[i]=i+1;
//	}
//	i=0;
//	while(m<n-1)
//	{
//		if(*(p+i) != 0)
//		{
//			k++;
//		}
//		if(k==3)
//		{
//			*(p+i)=0;
//			k=0;m++;
//		}
//		i++;
//		if(n==i)
//		{
//			i=0;
//		}
//	}
//	while(*p == 0)
//	{
//		p++;
//	}
//	printf("%d\n",*p);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100],*p=a;
//	int n,i,b_n=0,s_n=0,m_n=0,p_n=0,o_n=0;
//	printf("����������ַ�����\n");
//	gets(a);
//	n=strlen(a);
//	for(i=0;i<n;i++)
//	{
//		if(*(p+i)>='a' && *(p+i)<='z')
//		{
//			s_n++;
//		}
//		else if(*(p+i)>='A' && *(p+i)<='Z')
//		{
//			b_n++;
//		}
//		else if(*(p+i)>='0' && *(p+i)<='9')
//		{
//			m_n++;
//		}
//		else if(*(p+i) == ' ')
//		{
//			p_n++;
//		}
//		else
//		{
//			o_n++;
//		}
//	}
//	printf("��д��%d\n",b_n);
//	printf("Сд��%d\n",s_n);
//	printf("���֣�%d\n",m_n);
//	printf("�ո�%d\n",p_n);
//	printf("������%d\n",o_n);
//	return 0;
//}
//#include <stdio.h>
//void trans(int (*s)[3], int x, int y);        //����ת�ú���
//int main()
//{
//    int a[3][3], *p, i, j;
//    for (p=*a, printf("Please enter array: "); p<*a+9; scanf("%d", p++));    //�������Ԫ��
//    trans(a, 3, 3);                                                          //����ת�ú���
//    for (i=0; i<3; printf("\n"), i++)                                        //�������
//        for (j=0; j<3; printf("%d ", *(*(a+i)+j++)));
//    return 0;
//}
////ת�ú���
//void trans(int (*s)[3], int x, int y)
//{
//    int i, j, t;
//    for (i=0; i<x; i++)
//        for (j=0; j<y; i!=j&&i<j ? t=*(*(s+i)+j), *(*(s+i)+j)=*(*(s+j)+i), *(*(s+j)+i)=t, j++ : j++);
//}

//#include<stdio.h>
//void convert(int (*p)[3])
//{
//	int i,j,temp;
//    for(i=0;i<3;i++)
//	 for(j=0;j<i;j++)
//	 {
// 		temp=*(*(p+i)+j);
// 		*(*(p+i)+j)=*(*(p+j)+i);
// 		*(*(p+j)+i)=temp;
// 	 }
//}
//int main()
//{
//	int a[3][3];
//	int (*p)[3],i,j,temp;
//	p=a;
//	for(i=0;i<3;i++)
//	 for(j=0;j<3;j++)
//	 scanf("%d",&a[i][j]);
//    convert(p);
//    printf("after convert:\n");
//    for(i=0;i<3;i++)
//     {
//     	for(j=0;j<3;j++)
//	    printf("%d ",*(*(p+i)+j));
//     	printf("\n");
//     } 
//	 return 0; 
//}

//#include <stdio.h>
//int main()
//{
//	void trans(int (*p)[3]);
//	int a[3][3],i,j;
//	int (*q)[3];
//	printf("���������飺\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("�����ԭ�������£�\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%-5d",a[i][j]);
//			if(j == 2)
//			printf("\n");
//		}
//	}
//	q=a;
//	trans(q); 
//	printf("�����Ľ���ǣ�\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%-5d",a[i][j]);
//			if(j == 2)
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//void trans(int (*p)[3])
//{
//	int i,j,t;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<i;j++)
//		{
//				t=*(*(p+i)+j);
//				*(*(p+i)+j)=*(*(p+j)+i);
//				*(*(p+j)+i)=t;
//		}
//	}
//}

//#include <stdio.h>
//int main()
//{
//	void trans(int (*q)[3]);
//	int a[3][3],i,j;
//	int (*p)[3];	//�����άָ������
//	p=a;			//ָ��ָ���ά������Ԫ�ص�ַ 
//	printf("���������\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&*(*(p+i)+j));
//		}
//	}
//	//���ԭ����
//	printf("Ը����Ϊ��\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%-5d",*(*(p+i)+j));
//		}
//		printf("\n");
//	 } 
//	trans(p);		//��ƺ���
//	printf("������Ľ���ǣ�\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%-5d",a[i][j]);
//		}
//		printf("\n");
//	 } 
//	return 0;
//}
// 
//void trans(int (*q)[3])
//{
//	int t,i,j;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<i;j++)
//		{
//			t=*(*(q+i)+j);
//			*(*(q+i)+j)=*(*(q+j)+i);
//			*(*(q+j)+i)=t;
//		}
//	}
// } 

//10 20 30 40 50 60 70 80 90 1 2 3 4 5 6 7 8 9 11 22 33 44 55 66 77
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
//10 20 30 40 50 60 70 80 90 1 2 3 4 5 6 7 8 9 11 22 33 44 55 66 77
//#include <stdio.h> 
//int main()
//{
//	void sorts(int *p,int x,int y);
//	int a[5][5],i,j;
//	printf("������5*5�ľ���\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("�������£�\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%-5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	sorts(*a,5,5);
//	printf("��������£�\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%-5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void sorts(int *p,int x,int y)
//{
//	int i,t,*pmax,*pmin;
//	pmax=p;
//	pmin=p;
//	for(i=0;i<x*y;i++)
//	{
//		if(*(p+i)>*pmax)	pmax=p+i;
//		if(*(p+i)<*pmin)	pmin=p+i;
//	}
//	t=*pmax;*pmax=*(p+12);*(p+12)=t;
//	t=*pmin;*pmin=*p;*p=t;
//	
//	pmin=p+1;
//	for(i=0;i<x*y;i++)
//	{
//		if(i==0)	continue;
//		if(*(p+i)<*pmin)
//		pmin=p+i;
//	}
//	t=*pmin;*pmin=*(p+4);*(p+4)=t;
//	
//	pmin=p+1;
//	for(i=0;i<x*y;i++)
//	{
//		if(i==0 ||i==4)	continue;
//		if(*pmin>*(p+i))
//		pmin=p+i;
//	}
//	t=*pmin;*pmin=*(p+20);*(p+20)=t;
//	
//	pmin=p+1;
//	for(i=0;i<x*y;i++)
//	{
//		if(i==0||i==4||i==20)	continue;
//		if(*pmin>*(p+i))
//		pmin=p+i;
//	}
//	t=*(p+24);*(p+24)=*pmin;*pmin=t;
//}

//
//
//#include <stdio.h>
//int i, j;
//void seek(int* s, int a,int b)
//{
//	int tmp;
//	int* pmax = s;
//	int* pmin = s;
//	for (i = 0; i < a * b; i++)
//	{
//		if (*pmax < *(s + i))pmax = s + i;//�ҵ������������
//		if (*pmin > *(s + i))pmin = s + i;//�ҵ���������С��
//	}
//	tmp = *(s + 12); *(s + 12) = *pmax; *pmax = tmp;//����Ԫ�ط�������
//	tmp = *s; *s = *pmin; *pmin = tmp;//��СԪ�ط����Ͻ�
//	pmin = s + 1;
//	for (i = 0; i < a * b; i++)
//	{
//		if (i == 0)continue;//�ٴα���ʱ�ų����ҵ�����СԪ��
//		if (*pmin > *(s + i))pmin = s + i;//�ҵ���������С��
//	}
//	tmp = *(s+4); *(s + 4) = *pmin; *pmin = tmp;//�ڶ�СԪ�ط����Ͻ�
//	pmin = s + 1;
//	for (i = 0; i < a * b; i++)
//	{
//		if (i == 0||i==4)continue;//�ٴα���ʱ�ų����ҵ�����СԪ��
//		if (*pmin > *(s + i))pmin = s + i;//�ҵ���������С��
//	}
//	tmp = *(s + 20); *(s + 20) = *pmin; *pmin = tmp;//����СԪ�ط����½�
//	pmin = s + 1;
//	for (i = 0; i < a * b; i++)
//	{
//		if (i == 0 || i == 4||i==20)continue;//�ٴα���ʱ�ų����ҵ�����СԪ��
//		if (*pmin > *(s + i))pmin = s + i;//�ҵ���������С��
//	}
//	tmp = *(s + 24); *(s + 24) = *pmin; *pmin = tmp;//����СԪ�ط����½�
//}
//int main()
//{
//	int s[5][5];
//	printf("������һ��5��5�е����飺\n");
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			scanf("%d", &s[i][j]);
//	seek((int*)s, 5, 5);//ת��Ϊһά���飬��������
//	printf("ת���������Ϊ��\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%2d ", s[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
#include <stdio.h>
int main()
{
	void sorts(int *p,int x);
	int a[5][5],i,j;
	printf("���������\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sorts(*a,25);
	printf("�����Ľ���ǣ�\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%-3d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void sorts(int *p,int x)
{
	int i,t,*pmax=p,*pmin=p;
	for(i=0;i<x;i++)
	{
		if(*(p+i)>*pmax)	pmax=p+i;
		if(*(p+i)<*pmin)	pmin=p+i;
	}
	t=*(p+12);*(p+12)=*pmax;*pmax=t;
	t=*p;*p=*pmin;*pmin=t;
	
	pmin=p+1;
	for(i=0;i<25;i++)
	{
		if(i==0)	continue;
		if(*(p+i)<*pmin)
		pmin=p+i;
	}
	t=*(p+4);*(p+4)=*pmin;*pmin=t;
	
	pmin=p+1;
	for(i=0;i<x;i++)
	{
		if(i==0||i==4)	continue;
		if(*(p+i)<*pmin)
		pmin=p+i;
	}
	t=*pmin;*pmin=*(p+20);*(p+20)=t;
	
	pmin=p+1;
	for(i=0;i<x;i++)
	{
		if(i==0||i==4||i==20)	continue;
		if(*pmin>*(p+i))
		pmin=p+i;
	}
	t=*pmin;*pmin=*(p+24);*(p+24)=t;
	
}


























