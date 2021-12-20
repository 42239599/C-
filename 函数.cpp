//#include <stdio.h> 
//void move (char x,char y)
//{
//	printf("%c--->%c\n",x,y);
//}
//
//void hannuo(int n,char one,char two,char three)
//{
//	if(n==1)
//		move(one,three);
//	else
//	{
//		hannuo(n-1,one,three,two);
//		move(one,three);
//		hannuo(n-1,two,one,three);
//	}
//}
//
//int main()
//{
//	int n;
//	printf("请输入 层数：\n");
//	scanf("%d",&n);
//	hannuo(n,'A','B','C');
//	return 0;
//}

//#include <stdio.h>
//int max(int x,int y)
//{
//	return (x>y?x:y);
//}
//int main()
//{
//	int a[10],i,n=0,m;
//	printf("请输入十个元素：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\n");
//	m=a[0];
//	for(i=1;i<10;i++)
//	{
//		if(max(a[i],m)>m)
//		{
//			m=max(a[i],m);
//			n=i;
//		}
//	}
//	printf("最大值是：%d,在数组的第%d位\n",m,n+1);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	float average(float a[10]);
//	int i;
//	float score[10],aver;
//	printf("请输入十个成绩：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%f",&score[i]);
//	}
//	printf("\n");
//	aver=average(score);
//	printf("平均分是：%5.2f\n",aver);
//	return 0;
//}
//float average(float a[10])
//{
//	float sum=0,av;
//	int i;
//	for(i=0;i<10;i++)
//	{
//		sum+=a[i];
//	}
//	av=sum/10;
//	return (av);
//}

//#include <stdio.h>
//int main()
// {
// 	float average(float a[],int n);
// 	float score1[5],score2[10];
// 	int i;
// 	printf("请输入1班的成绩：\n");
// 	for(i=0;i<5;i++)
// 	{
// 		scanf("%f",&score1[i]);
//	 }
// 	printf("请输入2班的成绩：\n");
// 	for(i=0;i<10;i++)
// 	{
// 		scanf("%f",&score2[i]);
//	 }
//	printf("1班成绩平均分是：%5.2f\n",average(score1,5));
//	printf("2班成绩平均分是：%5.2f\n",average(score2,10));	
// 	return 0;
// }
//float average(float a[],int n)
//{
//	int i;
//	float sum=0.0,aver;
//	for(i=0;i<n;i++)
//	{
//		sum=sum+a[i];
//	}
//	aver=sum/n;
//	return aver;
//}

//#include <stdio.h>
//int main()
//{
//	void sort(int a[],int n);
//	int a[10],i;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	sort(a,10);
//	printf("从小到大排序后是:\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}
//void sort(int a[],int n)
//{
//	int i,j,t;
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
//}


//#include <stdio.h>
//int main()
//{
//	int max_value(int array[][4]);
//	int a[3][4]={{12,20,-9,36},{41,10,82,99},{65,-9,85,1}};
//	printf("最大值为：%d\n",max_value(a));	
//	return 0;
//}
//int max_value(int array[][4])
//{
//	int i,j,max;
//	max=array[0][0];
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			if(array[i][j]>max)
//			max=array[i][j];
//		}
//	}
//	return max;
//}



//#include <stdio.h>
//int max_value(int array[][4])
//{
//	int i,j,max;
//	max=array[0][0];
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			if(array[i][j]>max)
//			max=array[i][j];
//		}
//	}
//	return max;
//}
//int main()
//{
//	int max_value(int array[][4]);
//	int a[3][4]={{12,36,20,-9},{85,96,20,-98},{54,55,63,20}};
//	printf("最大数为：%d\n",max_value(a));
//	return 0;
//}

//#include <stdio.h>
//float Max=0,Min=0;
//int main()
//{
//	float average(float array[],int n);
//	float aver,a[10];
//	int i; 
//	printf("请输入十个学生成绩：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%f",&a[i]);
//	}
//	aver=average(a,10);
//	printf("最大值是：%5.2f 最小值是：%5.2f 平均分是：%5.2f\n",Max,Min,aver);
//	return 0;
//}
//float average(float array[],int n)
//{
//	int i;
//	float sum=0,aver;
//	Max=Min=array[0];
//	for(i=0;i<10;i++)
//	{
//		if(array[i]>Max)	Max=array[i];
//		else if(array[i]<Min)	Min=array[i];
//		sum=sum+array[i];
//	}
//	aver=sum/n;
//	return aver;	
//}

//#include <stdio.h>
//int main()
//{
//	int fac(int n);
//	int i;
//	for(i=1;i<=5;i++)
//		printf("%d!=%d\n",i,fac(i));
//	return 0;
//}
//int fac(int n)
//{
//	static int f=1;
//	f=f*n;
//	return f;
//}













