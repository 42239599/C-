//#include <stdio.h> 
//int main(void)
//{
//	void sort(int *arr);
//	int a[10],i,*p;
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//		scanf("%d",&a[i]);
//	p=a;
//	sort(p);
//	printf("排序结果如下：\n");
//	for(i=0;i<10;i++)
//		printf("%d\t",a[i]);
//	return 0;
//}
//void sort(int *arr)
//{
//	int i,j,t;
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//			if(*(arr+i)<*(arr+j))
//			{
//				t=*(arr+i);
//				*(arr+i)=*(arr+j);
//				*(arr+j)=t;
//			}
//		}
//	}
//}


//#include <stdio.h>
//int main(void)
//{
//	int a[12],i,*p;
//	printf("请输入12个数:\n");
//	for(i=1;i<=12;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	p=a;
//	for(i=1;i<=12;i++)
//	{
//		printf("%4d",*(p+i));
//		if(i%4==0)
//		printf("\n");
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a[12],i,*p;
//	printf("请输入12个数：\n");
//	for(i=0;i<12;i++)
//		scanf("%d",&a[i]);
//	p=a;
//	for(;p<a+12;p++)
//	{
//		printf("%4d",*p);
//		if(i%4==0)
//			printf("\n");
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a[3][4]={1,2,3,4,5,6,7,8,9,10,12,20};
//	int *p;
//	for(p=a[0];p<a[0]+12;p++)
//	{
//		if((p-a[0]) % 4 == 0)
//			printf("\n");
//		printf("%4d",*p);
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[3][4],i,j;
//	printf("请输入12个数字：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//			scanf("%d",&a[i][j]);
//	}
//	printf("输出如下：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//			printf("%4d",a[i][j]);
//		printf("\n");
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a[3][4],i,j,(*p)[4];
//	p=a;
//	printf("请输入12个数：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//			scanf("%d",(*(p+i)+j));
//	}
//	p=a;
//	printf("输出：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			printf("%4d",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a[3][4],i,j,(*p)[4];
//	printf("请输入一个3*4的数字：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//			scanf("%d",&a[i][j]);
//	}
//	p=a;
//	int row,column;
//	printf("请输入要查找的行和列：\n");
//	scanf("%d %d",&row,&column);
//	
////	printf("第%d行%d列的数字是：%d\n",row,column,a[row-1][column-1]);
//	printf("第%d行%d列的数字是：%d\n",row,column,*(*(p+row-1)+column-1));	
//	return 0;
//}
//
//
//#include <stdio.h>
//int main(void)
//{
//	void average(float *p,int n);
//	void search(float (*p)[4],int n);
//	void find(float (*p)[4]);
//	float score[3][4];
//	int i,j ;
//	for(i=0;i<3;i++)
//	{
//		printf("请输入第%d位学生的成绩：\n",i+1);
//		for(j=0;j<4;j++)
//			scanf("%f",&score[i][j]);
//	 } 
//	
//	average(*score,12);
//	search(score,2);
//	find(score);
//	return 0;
//}
//
//void average(float *p,int n)
//{
//	float sum=0,aver;
//	int i;
//	for(i=0;i<12;i++)
//		sum+=*(p+i);
//	aver=sum/n;
//	printf("总平均分是：%5.2f\n",aver);
//}
//void search(float (*p)[4],int n)
//{
//	int i;
//	printf("序号为2的成绩是：\n",n);
//	for(i=0;i<4;i++)
//	{
//		printf("%5.2f\t",*(*(p+2)+i));
//	}
//}
//
//void find(float (*p)[4])
//{
//	int i,j,count=0;
//	printf("至少有一门成绩不及格的有：\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			count=0;
//			if(*(*(p+i)+j)<60)
//				count++;
//		}
//		if(count>1)
//		{
//			printf("序号为%d的同学至少有2门成绩不及格：\n",i);	
//			for(j=0;j<4;j++)
//				printf("%5.2f\t",*(*(p+i)+j));
//		}		
//		
//		printf("\n");
//	}
//	
//}


//#include <stdio.h>
//int main(void)
//{
//	char a[20]="i love china!",b[20];
//	int i;
//	for(i=0;*(a+i) != '\0';i++)
//		*(b+i)=*(a+i);
//	*(b+i)='\0';
//	printf("b:\n");
//	for(i=0;*(b+i) != '\0';i++)
//		printf("%c",*(b+i));
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char a[20]="i love china.",b[20],*p1,*p2;
//	p1=a;p2=b;
//	for(;*p1 != '\0';p1++,p2++)
//	{
//		*p2=*p1;
//	}
//	*p2='\0';
//	printf("a:\n");
//	printf("%s\n",b);	
//	return 0;
//}


//用字符数组名作为函数参数
//#include <stdio.h> 
//int main(void)
//{
//	void copy_string(char from[],char to[]);
//	char a[20]="i love china.",b[20]="i am a student.";
//	
//	printf("string a is:%s\n",a);	
//	printf("string b is:%s\n",b);
//	copy_string(a,b);
//	printf("copy a to b is:%s\n",b);
//	return 0;
//}
//void copy_string(char from[],char to[])
//{
//	int i;
//	for(i=0;(from[i]) != '\0';i++)
//		to[i]=from[i];
//	to[i]='\0';
//}

////用字符型指针变量做实参
//#include <stdio.h> 
//int main()
//{
//	void copy_string(char from[],char to[]);
//	char a[20]="i love china.",b[20]="i am a student.";
//	char *p1,*p2;
//	p1=a;p2=b;
//	
//	printf("string a is:%s\n",p1);
//	printf("string b is:%s\n",p2);
//	copy_string(p1,p2);
//	printf("result:%s\n",p2);
//	
//	return 0;
//}
//void copy_string(char from[],char to[])
//{
//	int i;
//	for(i=0;(from[i])!= '\0';i++)
//	{
//		to[i]=from[i];
//	}
//	to[i]='\0';
//}
//
////用字符指针变量做形参和实参
//#include <stdio.h> 
//int main(void)
//{
//	void copy_string(char *q1,char *q2);
//	char a[20]="i love china.",b[20]="i am a student.",*p1,*p2;
//	p1=a;p2=b;
//	printf("string a is:%s\n",p1);
//	printf("string b is:%s\n",p2);
//	copy_string(p1,p2);
//	printf("copy a to b is:\n%s\n",p2);
//	return 0;
//}
//void copy_string(char *q1,char *q2)
//{
////	int i;
////	for(i=0;*(q1+i) != '\0';i++)
////		*(q2+i)=*(q1+i);
////	*(q2+i)='\0';
//	for(;*q1 != '\0';q1++,q2++)
//		*q2=*q1;
//	*q2='\0';
//}


//#include <stdio.h>
//int main(void)
//{
//	char *a="i love china!";
//	a=a+7;
//	printf("%s\n",a); 
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int max(int x,int y);
//	int a,b,c;
//	printf("请输入两个数：\n");
//	scanf("%d%d",&a,&b);
//	c=max(a,b);
//	printf("最大数是：%d\n",c);
//	return 0;
//}
//int max(int x,int y)
//{
//	return (x>y?x:y);	
//}

//#include <stdio.h>
//int main(void)
//{
//	int max(int x,int y);
//	int (*p)(int x,int y);
//	int a,b,c;
//	printf("请输入2个数：\n");
//	scanf("%d%d",&a,&b);
//	p=max;
//	c=(*p)(a,b);
//	printf("最大者是：%d\n",c);
//	return 0;
//}
//int max(int x,int y)
//{
//	return (x>y?x:y);	
//}


//#include <stdio.h>
//int main(void)
//{
//	int max(int x,int y);
//	int min(int x,int y);
//	int MIN,MAX,a,b,n;
//	printf("请输入两个数：\n");
//	scanf("%d%d",&a,&b);
//	printf("请输入您的选择<1或2>：\n");
//	scanf("%d",&n);
//	MAX=max(a,b);
//	MIN=min(a,b);
//	if(n==1 || n==2)
//	{
//		if(n==1)
//			printf("最大者是：%d\n",MAX);
//		if(n==2)
//			printf("最小者是：%d\n",MIN);
//	}
//	else
//		printf("输入有误！\n\n");
//	
//	return 0;
//}
//int max(int x,int y)
//{
//	return x>y?x:y;
//}
//int min(int x,int y)
//{
//	return x<y?x:y;
//}

//#include <stdio.h>
//int main(void)
//{
//	int max(int x,int y);
//	int min(int x,int y);
//	int (*p)(int x,int y);
//	int a,b,c,n;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&a,&b);
//	printf("请输入您的选择<1或2>:\n");
//	scanf("%d",&n);
//	
//	if(n==1 || n==2)
//	{
//		if(n==1)
//		{
//			p=max;c=(*p)(a,b);
//			printf("最大者是：%d\n",c);
//		}
//		if(n==2)
//		{
//			p=min;c=(*p)(a,b);
//			printf("最小者是：%d\n",c);
//		}
//	}
//	else
//		printf("error!!\n");
//	
//	return 0;
//}
//int max(int x,int y)
//{
//	return x>y?x:y;
//}
//int min(int x,int y)
//{
//	return x<y?x:y;
//}






