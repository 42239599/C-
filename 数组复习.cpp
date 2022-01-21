//筛选法求100以内素数
//#include <stdio.h>
//#include <math.h> 
//int main(void)
//{
//	int i,k,j;
//	for(i=2;i<=100;i++)
//	{
//		k=sqrt(i);
//		for(j=2;j<=k;j++)
//		{
//			if(i%j==0)
//			break;
//		}
//		if(j>k)
//		printf("%d\n",i);	
//	}	
//	return 0;
//}

// 
//#include <stdio.h> 
//int main(void)
//{
//	int a[100],i,j,k=0;
//	for(i=0;i<100;i++)
//	{
//		a[i]=i+1;
//	}
//	a[0]=0;
//	for(i=1;i<99;i++)
//	{
//		for(j=i+1;j<100;j++)
//		{
//			if(a[j] != 0 && a[i] != 0)
//			{
//				if(a[j]%a[i]==0)
//					a[j]=0;
//			}
//		}
//	}
//	printf("筛选法的出的结果如下：\n");
//	for(i=1;i<100;i++)
//	{
//		if(a[i]!=0)
//			printf("%2d\n",a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a[10],i,j,t;
//	printf("please input 10 number:\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
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
//	printf("result\n");
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
//	int a[3][3],i,j,sum=0;
//	printf("please input 9 numbers:\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	sum=a[1][1];
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			if(i=j || (i+j)==2)
//			{
//				if(i==j && (i+j)!=2)
//				sum+=a[i][j];
//			}
//		}
//	}
//	printf("%d\n",sum);
//	
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a[10]={10,20,21,23,40,42,50,55,80};
//	int n,i;
//	printf("请输入要插入的数：\n");
//	scanf("%d",&n);
//	printf("\n");
//	
//	if(n>=a[0])
//	{
//		for(i=8;i>=0;i--)
//		{
//			if(a[i]>n)
//			{
//				a[i+1]=a[i];
//			}
//			else
//			{
//				a[i+1]=n;
//				break;
//			}
//		}
//	}
//	else
//	{
//		for(i=8;i>=0;i--)
//		{
//			a[i+1]=a[i];
//		}
//		a[0]=n;
//	}	
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int i,n,j,t;
//	printf("请输入9个数字：\n");
//	for(i=0;i<9;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	for(j=0;j<8;j++)
//	{
//		for(i=0;i<8-j;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t=a[i];
//				a[i]=a[i+1];
//				a[i+1]=t;
//			}
//		}
//	}
//	
//	printf("输入要插入的数：\n");
//	scanf("%d",&n);	
//	
//	if(n>=a[0])
//	{
//		for(i=8;i>=0;i--)
//		{
//			if(a[i]>n)
//			{
//				a[i+1]=a[i];
//			}
//			else
//			{
//				a[i+1]=n;
//				break;
//			}
//		}
//		
//	}
//	else
//	{
//		for(i=8;i>=0;i--)
//		{
//			a[i+1]=a[i];
//		}
//		a[0]=n;
//	}
//
//
////	
////	if(n>a[8])
////	{
////		a[9]=n;
////	}
////	else if(n<a[0])
////	{
////		for(i=8;i>=0;i--)
////		{
////			a[i+1]=a[i];
////		}
////		a[i]=n;
////	}
////	else
////	{
////		for(i=8;i>=0;i--)
////		{
////			if(a[i]>n)
////				a[i+1]=a[i];
////			else
////			{
////				a[i+1]=n;
////				break;
////			}	
////		}
////	}
////	
//	
//	printf("result :\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	
//	return 0;
//}

//筛选法
//#include <stdio.h> 
//int main()
//{
//	int a[100],i,j;
//	for(i=0;i<100;i++)
//	{
//		a[i]=i+1;
//	}
//	
//	a[0]=0;
//	for(i=1;i<99;i++)
//	{
//		for(j=i+1;j<100;j++)
//		{
//			if(a[i] !=0 && a[j] !=0)
//			{
//				if( a[j]%a[i] == 0)
//				a[j]=0;	
//			 } 
//
//		}
//	}
//	for(i=0;i<100;i++)
//	{
//		if(a[i]!=0)
//		printf("%d\n",a[i]);
//	}
//	return 0;
//}

































