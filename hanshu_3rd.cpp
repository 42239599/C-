////����������������
////�б�һ����������a[10] = {1,2,3,4,-1,-2,-3,-4,2,3}�и�Ԫ�ص�ֵ��������0�������ֵ����С�ڵ���0�������0ֵ
//
//#include <stdio.h>
// void test (int v)
// {
// 	if ( v>0 )
// 	{
// 		printf("%d ",v);
//	 }
//	else
//	 {
//	 	printf("%d ",0);
//	 }
// }
//
//int main()
//{
//	int a[10] = {1,2,3,4,-1,-2,-3,-4,2,3};
//	int i;
//
//	for(i = 0 ; i < 10 ; i++)
//	{
//		test (a[i]);
//	}
//	printf("\n");
//	return 0;
// } 
// 


 
 
// #include <stdio.h>
// void test(int b[10]);
// int main()
// {
// 	int a[10]={2,4,6,8,10,12,14,16,18,20};
// 	test (a);
// 	putchar('\n');
// 	return 0;
// }
// 
// void test(int b[10])
// {
// 	int i = 0;
// 	for(;i<10;i++)
// 	{
// 		printf("%d\n",b[i]);
//	 }
// }



////����������������ʮ������ƽ��ֵ 
//#include <stdio.h>
//
//double average(double array[10])
//{
//	double result = 0;
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		result += array[i];
//	}
//	result /= 10;
//	return result;
//}
//
//int main()
//{
//	double score[10] = { 82,100,87.5,89,78,85,67.5,92.5,93,94};
//	double result;
//	
//	result = average(score);
//	printf("average score is %5.2lf\n",result);
//	
//	return 0;
//}

// //ȫ�ֱ���
// 
// #include <stdio.h>
// float max = 0 , min = 0;
// int main()
// {
// 	float average(float array[],int n);
// 	float ave,score[10];
// 	
// 	int i;
// 	for(i=0;i<10;i++)
// 	{
// 		scanf("%f",&score[i]);
//	 }
//	 ave = average (score , 10);
//	 printf("max = %6.2f\nmin = %6.2f\naverage = %6.2f\n",max,min,ave);
// 	return 0;
//  } 
//
//float average(float array[],int n)
//{
//	int i;
//	float aver , sum = array[0];
//	max = min = array[0];
//	
//	for(i=1;i<n;i++)
//	{
//		if(array[i]>max)
//		{
//			max = array[i];
//		}
//		else if(array[i] < min)
//		{
//			min = array[i];
//		}
//		sum += array[i];
//	}
//	aver = sum / n;
//	return aver;
//}


//////��static�����ֲ����� 
//
//int f(int a )
//{
//	auto int b = 0;
//	static int c = 3;//static�൱�ڸ� c ��ֵ 3 �� 
//	b = b + 1;//b == 1 , 1 , 1
//	c = c + 1;//c == 4 , 5 , 6
//	return (a+b+c);//7,8,9
//}
//#include <stdio.h>
//int main()
//{
//	int a = 2,i;
//	for(i=0;i<3;i++)
//	{
//		printf("%d\n",f(a));
//	}
//	return 0;
// } 
//
//
////����1-5�Ľ׳�
//
//#include <stdio.h>
//
//int fac (int n)
//{
//	static int f = 1;
//	f = f * n;
//	
//	return f;
//}
//
//int main()
//{
//	int i;
//	for(i=1;i<=5;i++)
//	{
//		printf("%d! = %d\n",i,fac(i));
//	}
//	return 0;
// } 


//register����
//��׳�

//#include <stdio.h>
//
//int fac (int n)
//{
//	register int i ,f =1;
//	for(i=1;i<=n;i++)
//	{
//		f *= i;
//	}
//	return f;
//}
//
//int main()
//{
//	int i ;
//	for(i=1;i<=13;i++)
//	{
//		printf("%d! = %d\n",i,fac(i));
//	 } 
//	return 0;
// } 

//extern ȫ������ 















