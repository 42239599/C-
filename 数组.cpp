////数组
//定义一维数组
////输入十个地区的面积，对他们由小到大排序并输出排序后的结果
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int i,j,t;
//	printf("请输入十个面积:\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//			if(a[i]>a[j])
//			{
//				t = a[i];
//				a[i] =a[j];
//				a[j] =t;
//			}
//		}
//	}	
//	printf("排序后依次是：\n");
//	for(i=0;i<10;i++)	
//	printf("%d\t",a[i]);
//	printf("\n");
//	return 0;
// } 

//对十个数组元素依次赋值为0,1,2,3,4,5,6,7,8,9,并按倒序输出
//#include <stdio.h>
//int main()
//{
//	int a[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i=9;
//	for(i=9;i>=0;i--)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
// } 

//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int i,j,t;
//	printf("请输入十个数：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(j=0;j<9;j++)//第一个数 排9次 
//	{
//		for(i=0;i<9-j;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t = a[i];
//				a[i] = a[i+1];
//				a[i+1] = t;
//			}
//		}
//	}
//	printf("排序后为：\n");
//	for(i=0;i<10;i++)
//	printf("%d\t",a[i]);
//	printf("\n");
//	return 0;
//}

//123 456 789 147 258 369 963 852 741 888
//选择排序 
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int i,j,t;
//	printf("请输入10个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	 } 
//	
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//			if(a[i]>a[j])
//			{
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}
//	printf("从小到大排序为：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	
//	return 0;
//}

////冒泡，沉底
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int i,j,t;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	for(j=0;j<9;j++)
//	{
//		for(i=0;i<9-j;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t=a[i];
//				a[i]=a[i+1];
//				a[i+1]=t;
//			}
//		}
//	}
//	printf("排序如下：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	return 0;
// } 





















 
