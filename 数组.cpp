//#include <stdio.h>
//int main()
//{
//	int a[10],i,j,t;
//	printf("请输入10个数字：\n");
//	for(i=0;i<=9;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	for(i=0;i<=8;i++)
//	{
//		for(j=i+1;j<=9;j++)
//		{
//			if(a[i]>a[j])
//			{
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}
//	printf("排列如下：\n");
//	for(i=0;i<=9;i++)
//	{
//		printf("%d\n",a[i]);
//	}	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10],i,j,t;
//	printf("请输入10个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
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
//	for(i=0;i<=9;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[2][3]={{1,2,3},{4,5,6}};
//	int b[3][2],i,j;
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%5d",a[i][j]);
//			b[j][i]=a[i][j];
//		}
//		printf("\n");
//	}
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			printf("%5d",b[i][j]);
//		}
//		printf("\n");
//	}	
//	return 0;
// } 

//#include <stdio.h>
//int main ()
//{
//	int a[2][3]={{1,2,3},{4,5,6}};
//	int b[3][2],i,j,array;
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%5d",a[i][j]);
//			b[j][i]=a[i][j];
//		}
//		printf("\n");
//	}
//	
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			printf("%5d",b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][4]={{12,23,45,54},{22,56,78,89},{74,85,96,69}};
//	int max,i,j,row,c;
//	max=a[0][0];
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			if(max<a[i][j])
//			{
//				max=a[i][j];
//				row=i+1;
//				c=j+1;
//			}
//		}
//	}
//	printf("第%d行%d列的数最大，是%d\n",row,c,max);
//	return 0;
//}


 #include <stdio.h>
int main()
{
	char string[100];
	int i,num=0,word=0;
	char c;
	gets(string);
	for(i=0;(c=string[i]) != '\0';i++)
	{
		if(c==' ')
		{
			word=0;
		}
		else if(word==0)
		{
			word=1;
			num++;
		}
	}
	printf("%d个单词\n",num);
	return 0;
}












