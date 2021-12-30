//#include <stdio.h> 
//int main()
//{
//	int fun(int x,int y,int (*p)(int,int));
//	int max(int,int);
//	int min(int,int);
//	int add(int,int);
//	int  a,b,n;
//	printf("请输入两个数组：\n");
//	scanf("%d %d",&a,&b);
//	printf("请输入你的选择1,2,或3\n");
//	scanf("%d",&n);
//	if(n==1)	fun(a,b,max);
//	else if(n==2)	fun(a,b,min);
//	else if(n==3)	fun(a,b,add);
//	return 0;
//}
//int fun(int x,int y,int (*p)(int,int))
//{
//	int result;
//	result=(*p)(x,y);
//	printf("%d\n",result);
//}
//int max(int x,int y)
//{
//	int z;
//	if(x>y)	z=x;
//	else	z=y;
//	printf("max=");
//	return z;
//}
//int min(int x,int y)
//{
//	int z;
//	if(x<y)	z=x;
//	else	z=y;
//	printf("min=");
//	return z;
//}
//int add(int x,int y)
//{
//	int z;
//	z=x+y;
//	printf("add=");
//	return z;
//}

//#include <stdio.h>
//int main()
//{
//	float score[3][4]={{75,85,95,68},{87,89,98,85},{52,85,45,99}};
//	float *search(float (*pointer)[4],int n);
//	float *p;
//	int n,i;
//	printf("请输入要查找的序号：\n");
//	scanf("%d",&n);
//	printf("the score of NO.%d is:\n",n);
//	p=search(score,n);
//	for(i=0;i<4;i++)
//	{
//		printf("%5.2f\t",*(p+i));
//	}
//	printf("\n");
//	return 0;
//}
//float *search(float (*pointer)[4],int n)
//{
//	float *pt;
//	pt=*(pointer+n);
//	return pt;
//}

//#include <stdio.h>
//int main()
//{
//	float *search(float (*pointer)[4],int n);
//	float score[3][4]={{75,85,95,68},{87,89,98,85},{52,85,45,99}};
//	float *p;
//	int i,a;
//	printf("请输入要查找的序号：\n");
//	scanf("%d",&a);
//	printf("the score of NO.%d are:\n",a);
//	p=search(score,a);
//	for(i=0;i<4;i++)
//	{
//		printf("%5.2f\t",*(p+i));
//	}
//	printf("\n");
//	return 0;
//}
//float *search(float (*pointer)[4],int n)
//{
//	float *pt;
//	pt=*(pointer+n);
//	return pt;
//}

























