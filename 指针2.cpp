//数组与指针


//输出数组中的全部元素
//下标法 
// 用指针变量指向数组变量
//
////下标法
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

//////通过数组名计算数组元素地址，找出元素的值 
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

//// 用指针变量指向数组变量
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



////将数组中a中n个元素按相反顺序存放
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
//	reverse(a,10);//作用使得数组重新倒序排放 
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
//void reverse(int x[],int n)//形参x是数组名 
//{
//	int temp ,i ,j ,m;
//	
//	m=(n-1)/2;
//	for(i = 0;i < m;i++)
//	{
//		j = n-1-i;//j 指向对应的元素 
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
//	i=x;		//i指向数组的第一个元素 
//	j=x+n-1;	//j指向的是数组的最后一个元素 
//	p=x+m;		//指向中间配对 
//	
//	for(i=0;i<p;i++;j--)//error 
//	{
//		temp = *i;
//		*i = *j;
//		*j = temp;
//	}
// } 




////从10个数中找出其中最大值和最小值
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
1、形参和实参都用数组名 
void main()					
｛int a[10];				
	f( a , 10 ) 			
}							
void f ( int x[] ,int n)
{
	........
	}


2、实参用数组名，形参用指针变量。
void main()
{
	int a[10];
	f (a ,10);
}
f (int *a , int n)
{
	.....
}

3、形参实参采用指针变量
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

















 
