//�ַ�����ָ�� 

//����һ���ַ����飬������ʼ����Ȼ��������ַ���
//#include <stdio.h>
//int main()
//{
//	char string[] = "i love myself!";
//	printf("%s\n",string);
//	return 0;
// } 



////���ַ�ָ��ָ��һ���ַ���
////���Բ������ַ����飬������һ���ַ�ָ�롣���ַ�ָ��ָ���ַ����е��ַ� 
//#include <stdio.h>
//int main()
//{
//	char *string = "ii love myself!";
//	printf("%s\n",string); 
//	return 0;
//}


////���ַ������ַ��Ĵ�ȡ���������±귽����Ҳ������ָ�뷽��

//�±귽��
//#include <stdio.h>
//int main()
//{
//	char a[] = "i love myself",b[40];
//	int i;
//	
//	for(i=0;*(a+i) != '\0';i++)//���� 
//	{
//		*(b+i) = *(a+i);
//	 } 
//	 *(b+i) = '\0';
//	 
//	 printf("string a is :%s\n",a);
//	 printf("string b is :");
//	 for(i=0;b[i] != '\0';i++)
//	 {
//	 	printf("%c",b[i]);
//	 }
//	 printf("\n\n");
//	return 0;
// } 

//////ָ�뷽��
//#include <stdio.h>
//int main()
//{
//	char a[] ="i love myself",b[40],*p1,*p2;
//	int i;
//	
//	p1 = a ;
//	p2 = b ;
//	
//	for(; *p1 != '\0';p1++,p2++)
//	{
//		*p2 = *p1;
//	}
//	*p2 = '\0';
//	
//	printf("string a is :%s\n",a);
//	printf("string b is :");
//	for(i=0;b[i] != '\0';i++)
//	{
//		printf("%c",b[i]); 
//	}
//	printf("\n");
//	return 0 ;
// } 

//#include <stdio.h>
//
//int main()
//{
//	void string_1(char from[],char to[]);
//	char a[] = "i love myself";
//	char b[] = "i love learning";
//	
//	printf("a is :%s\nb is :%s\n",a,b);
//	printf("string a to b :\n");
//	
//	string_1(a,b);
//	printf("\nstring a is:%s\nstring b is :%s\n",a,b);	
//	return 0;
//}
//
//void string_1(char from[],char to[])
//{
//	int i =0;
//	while( from[i] != '\0')
//	{
//		to[i] = from[i];
//		i++;
//	}
//	to[i] = '\0';
//}


///***********************************************************/
///*     ��һ������process���ڵ�������ʱ��ÿ��ʵ�ֲ�ͬ�Ĺ��� */ 
///*     ����a b ����������һ�ε���processʱ�ҳ�a b �еĴ�ֵ */
///*     �ڶ����ҳ�����С�ߣ����������                      */
///***********************************************************/ 
//
//#include <stdio.h>
//int main()
//{
//	int max(int ,int );//�������� 
//	int min(int ,int );//�������� 
//	int add(int ,int );//�������� 
//	
//	void process(int x,int y,int *(fun)());//�������� 
//	
//	int a,b;
//	
//	printf("enter a and b:");
//	scanf("%d %d",&a,&b);
//	
//	printf("max=");
//	process(a , b , max);
//	
//	printf("min=");
//	process (a,b,min);
//	
//	printf("add =");
//	process(a,b,add);
//	
//	return 0;
//}
//
//int max(int x,int y)
//{
//	int z ;
//	if(x>y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return 0;
//}
//
//int min(int x,int y)
//
//{
//	int z ;
//	if(x<y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//
//int add(int x,int y)
//{
//	int z;
//	z = x+y;
//	return z;
//}//error

//
////�����ɸ�ѧ���ĳɼ���ÿ��ѧ�����ſγ� ��Ҫ�����û�����ѧ����ź��������ѧ����ȫ���ɼ�����ָ�뺯��ʵ��
//#include <stdio.h>
//int main()
//{
//	double score[][4] = {{60.2, 69.3, 66.6, 85.4},{ 88.2, 98.3 , 32.1 , 22.9},{44.5, 56.5, 95.3 ,88.4},{88.5, 96.8, 67.5 ,66.6}};
//	double *search(double (*pointer)[4],int n);
//	double *p;
//	int i,m;
//	
//	printf("please enter the number of student:");
//	scanf("%d",&m);
//	
//	printf("the score of NO.%d are:\n",m);
//	
//	p = search(score,m);
//	
//	for( i = 0;i<4;i++)
//	{
//		printf("%2.5f\t",*(p + i));
//	}
//	printf("\n\n\n");
//	return 0;
// } 
//
//double *search(double (*pointer)[4],int n )
//{
//	double *pt;
//	pt  =*(pointer + n);
//	return pt;
//}


























