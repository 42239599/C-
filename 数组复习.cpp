//#include <stdio.h>
//int main()
//{
//	int i,a[10];
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//		}	
//	printf("逆序排序为：\n");
//	for(i=9;i>=0;i--)
//		printf("%d\t",a[i]);
//	
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i,f1=1,f2=2;
//	for(i=1;i<=20;i++)
//	{
//		printf("%12d%12d",f1,f2);
//		f1=f1+f2;
//		f2=f1+f2;
//		if(i%4==0)
//			printf("\n");
//	}
//	int f[20]={1,1};
//	int i;
//	for(i=2;i<20;i++)
//	{
//		f[i]=f[i-1]+f[i-2];
//	}
//	for(i=0;i<20;i++)
//	{
//		if(i%5==0)
//			printf("\n");
//		printf("%12d",f[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//
//	int a[10],i,j,t;
//	printf("please input 10 numbers:\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
////冒泡法小到大 	
////	for(j=0;j<9;j++)
////	{
////		for(i=0;i<9-j;i++)
////		{
////			if(a[i]>a[i+1])
////			{
////				t=a[i];
////				a[i]=a[i+1];
////				a[i+1]=t;
////			}
////		}
////	}
////选择法小到大
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
//		}	
//	
//	printf("排序后结果是：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[2][3],b[3][2];
//	int i,j;
//	printf("请输入6个数字:\n");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//			b[j][i]=a[i][j];	
//		}
//	}
//	
//	for(j=0;j<3;j++)
//	{
//		for(i=0;i<2;i++)
//		{
//			printf("%5d",b[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a[3][4],i,j;
//	printf("please input 12 numbers:\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	
//	int max=a[0][0],maxi,maxj;
//	
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			if(a[i][j]>max)
//			{
//				max=a[i][j];
//				maxi=i;maxj=j;	
//			}
//		
//		}
//	}
//	printf("最大数是在第%d行第%d列，是%d",maxi+1,maxj+1,max);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char a[20],ch,i,word,num=0;
//	gets(a);
//	for(i=0;(ch=a[i]) != '\0';i++)
//	{
//		if(ch==' ')	word=0;
//		else if(word==0)
//		{
//			word=1;
//			num++;
//		}
//	}
//	printf("totally is %d\n",num);
//	return 0;
//}
//
//
//#include <stdio.h>
//int main(void)
//{
//	char a[19],ch;
//	int i,word=0,num=0;
//	printf("请输入句子：\n");
//	gets(a);
//	for(i=0;(ch=a[i]) != '\0';i++)
//	{
//		if(ch==' ') word=0;
//		else if(word==0)
//		{
//			word=1;
//			num++;
//		}
//	}
//	printf("totoally is %d\n",num);
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//int main(void)
//{
//	char a[3][20],string[20];
//	int i;
//	for(i=0;i<3;i++)
//		gets(a[i]);
//	if(strcmp(a[0],a[1])>0)
//		strcpy(string,a[0]);
//	else
//		strcpy(string,a[1]);
//	if(strcmp(a[2],string)>0)
//		strcpy(string,a[2]);
//	printf("\n%s\n",string); 
//	return 0;
//}

#include <stdio.h> 
int main(void)
{
	int a=2;
	a*=2+3;
	printf("%d\n",a);
	
	
	return 0;
}





















