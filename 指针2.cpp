//������ָ��


//��������е�ȫ��Ԫ��
//�±귨 
// ��ָ�����ָ���������
//
////�±귨
// 
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int i;
//	
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	printf("\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d  ",a[i]);
//	}
//	
//	return 0;
// } 

//////ͨ����������������Ԫ�ص�ַ���ҳ�Ԫ�ص�ֵ 
//
//#include <stdio.h>
//int main()
//
//{
//	int a[10];
//	int i;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	printf("\n");
//	
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(a+i));
//	}
//	
//	return 0;
//}

//// ��ָ�����ָ���������
//#include <stdio.h>
//int  main()
//{
//	int a[10];
//	int i;
//	int *p;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",a[i]);
//	}
//	
//	printf("\n");
//	
//	for(p=a;p<(a+10);p++)
//	{
//		printf("%d",*p);
//	}
//	
//	return 0;
//}



////��������a��n��Ԫ�ذ��෴˳����
//#include <stdio.h>
//void reverse(int x[],int n);
//
//int main()
//{
//	int i , a[10]={3,7,9,11,0,6,7,5,4,2};
//	printf("the original array:\n");
//	
//	for(i = 0;i<10;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	
//	printf("\n");
//	
//	reverse(a,10);//����ʹ���������µ����ŷ� 
//	printf("the array has been inverted:\n");
//	
//	for(i = 0 ;i < 10;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
// } 
//
//void reverse(int x[],int n)//�β�x�������� 
//{
//	int temp ,i ,j ,m;
//	
//	m=(n-1)/2;
//	for(i = 0;i < m;i++)
//	{
//		j = n-1-i;//j ָ���Ӧ��Ԫ�� 
//		temp = x[i];
//		x[i] =x[j];
//		x[j] =temp;
//	}
//
//}

//#include <stdio.h>
//
//void reverse(int *x,int n);
//
//int main ()
//{
//	int i,a[10]={3,7,9,11,0,6,7,5,4,2};
//	printf("the original array:\n");
//	
//	for(i=0;i<10;i++)
//	{
//		printf("%d",a[i]);
//	}
//	printf("\n");
//	
//	reverse(a,10);
//	printf("the array has been inverted:\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d",a[i]);
//	}
//	printf("\n");
//	
//	return 0;
//}
//
//void reverse(int *x,int n)
//{
//	int *p,temp,*i,*j,m;
//	m=(n-1)/2;
//	i=x;		//iָ������ĵ�һ��Ԫ�� 
//	j=x+n-1;	//jָ�������������һ��Ԫ�� 
//	p=x+m;		//ָ���м���� 
//	
//	for(i=0;i<p;i++;j--)//error 
//	{
//		temp = *i;
//		*i = *j;
//		*j = temp;
//	}
// } 




////��10�������ҳ��������ֵ����Сֵ
//#include <stdio.h>
//int  max,min;
//void max_min_value(int array[],int n);
//int main()
//{
//	int i,number[10];
//	printf("enter 10 integer number :\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",number[i]);
//	}
//	
//	max_min_value(number,10);
//	printf("\nmax=%d,min=%d\n",max,min);
//	
//	return 0;
//	
// } 
//
//void max_min_value(int array[],int n)
//{
//	int *p,*array_end;
//	array_end = array + n;
//	max = min = *array;
//	for(p = array+1;p<array_end;p++)
//	{
//		if(*p>max)
//		{
//			max = *p;
//		}
//		else if(*p < min)
//		{
//			min = *p;
//		}
//	}
//}


/*
1���βκ�ʵ�ζ��������� 
void main()					
��int a[10];				
	f( a , 10 ) 			
}							
void f ( int x[] ,int n)
{
	........
	}


2��ʵ�������������β���ָ�������
void main()
{
	int a[10];
	f (a ,10);
}
f (int *a , int n)
{
	.....
}

3���β�ʵ�β���ָ�����
void main() 
{
	int a [10], *p = a ;
	f ( a , 10 );
}
 void f (int *x, int n)
 {
 	.......
 }

 

*/

















 
