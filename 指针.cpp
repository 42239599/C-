//////ָ��������ַ���
//�����ַ���aΪ��i am shuaibi!�������临�Ƶ�zifuchuanb�������ַ���b
//#include <stdio.h>
//int main()
//{
//	int i;
//	char a[100];
//	char b[10086];
//	a[100]={'i',' ','a','m',' ','s','h','u','a','i','b','o','y'};
//	for(i=0;a[i] !='\0';i++)
//	{
//		b[i]=a[i];
//	}
//	b[i+1]='\0';
//	printf("�ַ����ǣ�\n");
//	for(i=0;b[i] != '\0';i++)
//	{
//		printf("%c",b[i]);
//	}
//	printf("\n");
//	return 0;
// } 

////ָ������뺯��
///����������������max����������еĽϴ���
//#include <stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int a,b;
//	printf("��������������\n");
//	scanf("%d %d",&a,&b);
//	printf("�ϴ���Ϊ��%d\n",max(a,b));
//	return 0;
// } 
//int max(int x,int y)
//{
//return(x>y?x:y);	
//}

//ָ��
//#include <stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int a,b,jiaodashu;
//	int (*p)(int ,int );
//	p=max;
//	printf("����������������\n");
//	scanf("%d %d",&a,&b);
//	printf("�ϴ���Ϊ��%d\n",(*p)(a,b));
//	return 0;
// } 
//int max(int x,int y)
//{
//	return (x>y?x:y);
//}

/////��������������Ȼ�����û�ѡ��1��2��ѡ1ʱ���ú���max��ѡ2����min����
//�������� 
//#include <stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int min(int x,int y);
//	int a,b,xuanze;
//	printf("����������������\n");
//	scanf("%d %d",&a,&b);
//	printf("������1��2��\n");
//	scanf("%d",&xuanze);
//	if(xuanze == 1)
//	{
//		printf("���Ϊ%d\n",max(a,b));
//	}
//	else if(xuanze == 2)
//	{
//		printf("���Ϊ��%d\n",min(a,b));
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
// } 
//int max(int x,int y)
//{
//	return(x>y?x:y);
//}
//int min(int x,int y)
//{
//	return(x<y?x:y);
//}

//ָ��
//#include <stdio.h>
//int main()
//{
//	int max(int x,int y);
//	int min(int x,int y);
//	int (*p)(int,int);
//	int a,b,xuanze;
//	printf("����������������\n");
//	scanf("%d %d",&a,&b);
//	printf("������1��2��\n");
//	scanf("%d",&xuanze);
//	if(xuanze == 1)
//	{
//		p=max;
//	}
//	else if(xuanze ==2)
//	{
//		p=min;
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	printf("���Ϊ:%d",(*p)(a,b));
//	return 0;
// } 
//int max(int x,int y)
//{
//	return (x>y?x:y);
//}
//int min(int x,int y)
//{
//	return (x<y?x:y);
//}


//////����ָ��ֵ�ĺ��� 
////��3��ѧ��ѧϰ4�ſΣ�ѧ��һ�ĳɼ��ֱ���65,67,70,60��ѧ������80,87,90,81��ѧ������90,99,93,98��
////��ָ�뺯������̣�Ҫ�����û�����ѧ�������ź��������ѧ���ĸ��Ƴɼ�
//#include <stdio.h>
//int main()
//{
//	float *chazhao(float (*hang)[4],int n);
//	float a[3][4]={65,67,70,60,80,87,90,81,90,99,93,98};
//	float *p;
//	int xuhao,i;
//	printf("������ѧ����ţ�\n");
//	scanf("%d",&xuhao);
//	printf("��%d��ѧ���ĳɼ�:\n",xuhao);
//	p = chazhao(a,xuhao-1);
//	for(i=0;i<=3;i++)
//	{
//		printf("%f\t",*(p+1));
//	}
//	printf("\n");
//	return 0;
// } 
//float *chazhao(float (*hang)[4],int n)
//{
//	int *q;
//	q=(hang+n)[0]
//	return (q);
//}

//ָ����һά��ά�������ֵ��ϵ
/********************************
ָ��=&ֵ
һά����		��ά����
p=&a[0]			p=&a[0][0]
q=&c[1]			q=&c[1][2]
p=a+0=a			p=a[0]+0=a[0]=*(a+0)=*a
q=c+1			q=c[1]+2=*(c+1)+2

ֵ=*ָ��
һά����		��ά����
a[0]=*p			a[0][0]=*p
c[1]=*q			c[1][2]=*q 
*a = *p			*a[0]=*p=>*a=*p
*(c+1)=*q		*(c[1]+2)=*q=>*(*(c+1)+2)

**********************************/ 
















 
