//#include <stdio.h> 
//int main()
//{
//	void search_1(float (*p)[4],int n);
//	void average(float *p,int n);
//	void search(float (*p)[4],int n);
//	int a;
//	float score[3][4]={{74,75,78,95},{85,87,58,54},{58,99,97,88}};
//	printf("��ƽ�����ǣ�\n");
//	average(*score,12);	
//	printf("������Ҫ���ҵ�ѧ����ţ�\n");
//	scanf("%d",&a);
//	search(score,a-1);
//	search_1(score,3);
//	return 0;
//}
//void average(float *p,int n)
//{
//	float aver,sum=0;
//	float *p_end;
//	p_end=p+n-1;
//	for(;p<p_end;p++)
//	{
//		sum+=*p;
//	}
//	aver=sum/n;
//	printf("%5.2f",aver);
//}
//void search(float (*p)[4],int n)
//{
//	int i;
//	printf("��%d��ѧ���ĳɼ��ǣ�\n",n+1);
//	for(i=0;i<4;i++)
//	{
//		printf("%5.2f\t",*(*(p+n)+i));
//	}
//	printf("\n");
//}
//void search_1(float (*p)[4],int n)
//{
//	int i,j,flat;
//
//	for(i=0;i<n;i++)
//	{
//		flat = 0;
//		for(j=0;j<4;j++)
//		{
//			if(*(*(p+i)+j)<60)
//			flat=1;
//		}
//		if(flat == 1)
//		{
//			printf("��%d��ѧ���гɼ������񣬳ɼ��ֱ����£�\n",i+1);
//			for(j=0;j<4;j++)
//			{
//				printf("%5.2f\t",*(*(p+i)+j));
//			}
//		}
//		printf("\n");		
//	}
//}

//#include <stdio.h>
//int main()
//{
//	void average(float *p,int n); 
//	void search(float (*p)[4],int n);
//	void search_1(float (*p)[4],int n);
//	int a;
//	float score[3][4]={{99,98,99,40},{75,85,89,68},{59,85,98,76}};
//	average(*score,12);	//��ƽ���� 
//	printf("������Ҫ���ҵĳɼ����źţ�\n");
//	scanf("%d",&a);
//	search(score,a-1);	//���Ҷ�Ӧͬѧ�ĳɼ� 
//	search_1(score,3);	//���ҳɼ��������ȫ���ɼ� 
//	
//}
//void average(float *p,int n)
//{
//	float sum=0,aver, *p_end;
//	p_end=p+n-1;
//	for(;p<p_end;p++)
//	{
//		sum+=*p;
//	}
//	aver=sum/n;
//	printf("��ƽ����Ϊ��%5.2f\n",aver);
//}
//
//void search(float (*p)[4],int n)
//{
//	int i;
//	printf("��%d��ͬѧ�ĳɼ��ֱ����£�\n",n+1);
//	for(i=0;i<4;i++)
//	{
//		printf("%5.2f\t",*(*(p+n)+i));
//	}
//	printf("\n");
//}
//
//void search_1(float (*p)[4],int n)
//{
//	int i,j,flag;
//	for(i=0;i<n;i++)
//	{
//		flag=0;
//		for(j=0;j<4;j++)
//		{
//			if(*(*(p+i)+j)<60)
//			flag=1;
//		}
//		if(flag==1)
//		{
//			printf("���Ϊ%d��ͬѧ�в�����Ŀ�Ŀ���ɼ��ֱ����£�\n",i+1);
//			for(j=0;j<4;j++)
//			{
//				printf("%5.2f\t",*(*(p+i)+j));
//			}
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	char string[]="i love China";
//	printf("%s\n",string);
//	printf("%c\n",string[7]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[]="i love china!",b[20];//�����ַ����� 
//	int i;
//	for(i=0;*(a+i) != '\0';i++)
//	{
//		*(b+i)=*(a+i);				//��a[i]��ֵ����b[i] 
//	}
//	*(b+i)='\0';					//��b�������Ч�ַ�֮���'\0' 
//	printf("string a is:%s\n",a);	//���a�����ȫ����Ч�ַ� 
//	printf("string b is:\n");
//	for(i=0;*(b+i) != '\0';i++)
//	{
//		printf("%c",b[i]);			//������b������ȫ����Ч�ַ� 
//	}
//	printf("\n");
//	
//	return 0;
//}

//#include <stdio.h> 
//int main()
//{
//	char a[]="i am a student.",b[20];
//	int i;
//	for(i=0;*(a+i) != '\0';i++)
//	{
//		*(b+i)=*(a+i);
//	}
//	*(b+i)='\0';
//	printf("string a is:%s\n",a);
//	printf("string b is:\n");
//	for(i=0;*(b+i) != '\0';i++)
//	{
//		printf("%c",b[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[]="i am a student.",b[20],*pa,*pb;
//	pa=a;pb=b;						//pa,pb�ֱ�ָ��a�����b�����еĵ�һ��Ԫ�� 
//	for(;*pa != '\0';pa++,pb++)		//pa,pabÿ�ζ��Լ�1 
//	{
//		*pb=*pa;					//��pa��ָ���Ԫ�ظ�ֵ��pb��ָ���Ԫ�� 
//	}
//	*pb='\0';						//�ڸ���������Ч�ַ�֮���'\0' 
//	printf("string a is:%s\n",a);	//���a��Ԫ�� 
//	printf("string b is:%s\n",b);	//���b��Ԫ�� 
//	return 0;
//}

//#include <stdio.h> 
//int main()
//{
//	char a[]="i love china!",b[20],*p1,*p2;
//	p1=a;p2=b;
//	for(;*p1 != '\0';p1++,p2++)
//	{
//		*p2=*p1;
//	}
//	*p2='\0';
//	printf("string a is:%s\n",a);
//	printf("string b is:%s\n",b);
//	return 0;
//}






























