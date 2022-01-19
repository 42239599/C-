//#include <stdio.h>
//int main()
//{
//	int i,j,sum=0,k;
//	for(i=1;i<1000;i++)
//	{
//		sum=0;
//		for(j=1;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				sum+=j;
//				if(sum==i)
//				{
//					printf("%d 是完数，其因子如下：",i);
//					for(k=1;k<i;k++)
//					{
//						if(i%k==0)
//						printf("%5d",k);
//					}
//					printf("\n");
//				}
//				
//			}
//		}
//	}	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,f1=1,f2=1;
//	for(i=1;i<=20;i++)
//	{
//		printf("%12d%12d",f1,f2);
//		if(i%4==0)
//		printf("\n");	
//		f1=f1+f2;
//		f2=f2+f1;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int f1=2,f2=3;
//	int f3=1,f4=2;
//	int fz,fm,i;
//	float terms,sum=0;
//	sum=1/2+3/2;
//	for(i=1;i<20;i++)
//	{
//		fz=f1+f2;
//		f1=f2;f2=fz;
//		
//		fm=f3+f4;
//		f3=f4;f4=fm;
//		
//		terms=fz/fm;
//		sum+=terms;
//	}
//	printf("result is:%f",sum);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i;
//	float s=100.0,sum=100.0,last;
//	for(i=1;i<10;i++)
//	{
//		s=s/2.0;
//		sum+=2*s;
//		
//	}
//	last=s;
//	printf("经过的路程有%f，最后一次高度是：%f",sum,last);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i,n=1;
//	for(i=0;i<9;i++)
//	{
//		n=(n+1)*3-1;
//	}
//	printf("%d\n",n);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,j,k;
//	for(i=1;i<=4;i++)
//	{
//		for(j=0;j<3-(i-1);j++)
//			printf(" ");
//		for(k=0;k<2*i-1;k++)
//			printf("*");
//		printf("\n");
//	}
//	for(i=1;i<=3;i++)
//	{
//		for(j=0;j<i;j++)
//			printf(" ");
//		for(k=0;k<7-2*i;k++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i,j;
////	for(i=1;i<=5;i++)
////	{
////		for(j=0;j<i;j++)
////		{
////			printf("*");
////		}
////		printf("\n");
////	}
//	for(i=1;i<=5;i++)
//	{
//		for(j=5;j>=i;j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//#include <stdio.h>
//int main(void)
//{
//	int i,j,k;
//	for(i=1;i<=5;i++)
//	{
//		for(j=0;j<5-i;j++)
//			printf(" ");
//		for(k=0;k<i;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	
//	return 0;
//}























