//#include <stdio.h> 
//int main()
//{
//	char string[100];
//	char c;
//	int i,num=0,word=0;
//	gets(string);	
//	for(i=0;(c=string[i]) != '\0';i++)
//	{
//		if(c == ' ')
//		word =0;
//		else if(word == 0)
//		{
//			word =1;
//			num++;
//		}
//	}
//	printf("%d\n",num);
//	return 0;
//}

////筛选法求素数
//#include <stdio.h> 
//int main()
//{
//	int a[100],i,j,k;
//	for(i=0;i<100;i++)
//	{
//		a[i]=i+1;//将1~100赋值给a[0] ~ a[99]
//	}
//	a[0]=0 ;  //将a[0]赋值0 
//	for(i=0;i<99;i++)
//	{
//		for(j=i+1;j<100;j++)
//		{
//			if(a[i] != 0 && a[j] != 0)
//			{
//				if(a[j]%a[i] ==0)
//				a[j]=0;//吧不是素数赋值为0; 
//			}
//		}
//	}
//	printf("用筛选法求出的素数如下：\n");
//	for(i=0;i<100;i++) 
//	{
//		if (a[i] != 0)
//		printf("%4d",a[i]);
//		k++;
//	}
//	if(k%10==0)
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[100],i,j;
//	for(i=0;i<100;i++)
//	{
//		a[i]=i+1;
//	}
//	
//	for(i=1;i<99;i++)
//	{
//		for(j=i+1;j<100;j++)
//		{
//			if(a[i]!=0 &&a[j]!=0)
//			{
//				if(a[j]%a[i] == 0)
//				{
//					a[j]=0;
//				}					
//			}
//
//		}
//	}
//	printf("筛选法素数有：\n");
//	for(i=1;i<100;i++)
//	{
//		if(a[i]!=0)
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}

//
////选择法
//#include <stdio.h> 
//int main()
//{
//	int a[10],i,j,t;
//	printf("请输入十个数字：\n");
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
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}
//	printf("小到大排序如下：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][3],i,j,sum1=0,sum2=0;
//	printf("请输入 9个数字：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//			if(i+j==2)
//			{
//				sum1+=a[i][j];
//			}
//			if(i == j)
//			{
//				sum2+=a[i][j];
//			}	
//		 }
//	}
//			printf("左下角对角线和为：%d\n",sum1);
//			printf("左上角对角线和为：%d\n",sum2);		
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[6]={2,3,5,9,12},i,b;
//	printf("插入前的排序：\n")	;
//	for(i=0;i<5;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("请输入要插入的数字：\n");
//	scanf("%d",&b) ;
//	
//	for(i=4;i>=0;i--)
//	{
//		if(a[i]>b)
//		a[i+1]=a[i];
//		else 
//		{
//			a[i+1]=b;
//			break;				
//		}		
//	}
//	printf("插入后排序为：\n");
//	for(i=0;i<6;i++)
//	printf("%d\t",a[i]);
//	return 0;
//}

























 
