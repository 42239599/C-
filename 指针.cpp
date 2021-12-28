//#include <stdio.h> 
//int main()
//{
//	void search_1(float (*p)[4],int n);
//	void average(float *p,int n);
//	void search(float (*p)[4],int n);
//	int a;
//	float score[3][4]={{74,75,78,95},{85,87,58,54},{58,99,97,88}};
//	printf("总平均分是：\n");
//	average(*score,12);	
//	printf("请输入要查找的学生序号：\n");
//	scanf("%d",&a);
//	search(score,a-1);
//	search_1(score,3);
//	return 0;
//}
//void average(float *p,int n)
//{
//	float aver,sum=0;
//	float *p_end;
//	p_end=p+n-1;
//	for(;p<p_end;p++)
//	{
//		sum+=*p;
//	}
//	aver=sum/n;
//	printf("%5.2f",aver);
//}
//void search(float (*p)[4],int n)
//{
//	int i;
//	printf("第%d名学生的成绩是：\n",n+1);
//	for(i=0;i<4;i++)
//	{
//		printf("%5.2f\t",*(*(p+n)+i));
//	}
//	printf("\n");
//}
//void search_1(float (*p)[4],int n)
//{
//	int i,j,flat;
//
//	for(i=0;i<n;i++)
//	{
//		flat = 0;
//		for(j=0;j<4;j++)
//		{
//			if(*(*(p+i)+j)<60)
//			flat=1;
//		}
//		if(flat == 1)
//		{
//			printf("第%d名学生有成绩不及格，成绩分别如下：\n",i+1);
//			for(j=0;j<4;j++)
//			{
//				printf("%5.2f\t",*(*(p+i)+j));
//			}
//		}
//		printf("\n");		
//	}
//}

//#include <stdio.h>
//int main()
//{
//	void average(float *p,int n); 
//	void search(float (*p)[4],int n);
//	void search_1(float (*p)[4],int n);
//	int a;
//	float score[3][4]={{99,98,99,40},{75,85,89,68},{59,85,98,76}};
//	average(*score,12);	//求平均分 
//	printf("请输入要查找的成绩的排号：\n");
//	scanf("%d",&a);
//	search(score,a-1);	//查找对应同学的成绩 
//	search_1(score,3);	//查找成绩不及格的全部成绩 
//	
//}
//void average(float *p,int n)
//{
//	float sum=0,aver, *p_end;
//	p_end=p+n-1;
//	for(;p<p_end;p++)
//	{
//		sum+=*p;
//	}
//	aver=sum/n;
//	printf("总平均分为：%5.2f\n",aver);
//}
//
//void search(float (*p)[4],int n)
//{
//	int i;
//	printf("第%d名同学的成绩分别如下：\n",n+1);
//	for(i=0;i<4;i++)
//	{
//		printf("%5.2f\t",*(*(p+n)+i));
//	}
//	printf("\n");
//}
//
//void search_1(float (*p)[4],int n)
//{
//	int i,j,flag;
//	for(i=0;i<n;i++)
//	{
//		flag=0;
//		for(j=0;j<4;j++)
//		{
//			if(*(*(p+i)+j)<60)
//			flag=1;
//		}
//		if(flag==1)
//		{
//			printf("序号为%d的同学有不及格的科目，成绩分别如下：\n",i+1);
//			for(j=0;j<4;j++)
//			{
//				printf("%5.2f\t",*(*(p+i)+j));
//			}
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	char string[]="i love China";
//	printf("%s\n",string);
//	printf("%c\n",string[7]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[]="i love china!",b[20];//定义字符数组 
//	int i;
//	for(i=0;*(a+i) != '\0';i++)
//	{
//		*(b+i)=*(a+i);				//将a[i]的值赋给b[i] 
//	}
//	*(b+i)='\0';					//在b数组的有效字符之后假'\0' 
//	printf("string a is:%s\n",a);	//输出a数组的全部有效字符 
//	printf("string b is:\n");
//	for(i=0;*(b+i) != '\0';i++)
//	{
//		printf("%c",b[i]);			//逐个输出b数组中全部有效字符 
//	}
//	printf("\n");
//	
//	return 0;
//}

//#include <stdio.h> 
//int main()
//{
//	char a[]="i am a student.",b[20];
//	int i;
//	for(i=0;*(a+i) != '\0';i++)
//	{
//		*(b+i)=*(a+i);
//	}
//	*(b+i)='\0';
//	printf("string a is:%s\n",a);
//	printf("string b is:\n");
//	for(i=0;*(b+i) != '\0';i++)
//	{
//		printf("%c",b[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[]="i am a student.",b[20],*pa,*pb;
//	pa=a;pb=b;						//pa,pb分别指向a数组和b数组中的第一个元素 
//	for(;*pa != '\0';pa++,pb++)		//pa,pab每次都自加1 
//	{
//		*pb=*pa;					//将pa所指向的元素赋值给pb所指向的元素 
//	}
//	*pb='\0';						//在复制所有有效字符之后加'\0' 
//	printf("string a is:%s\n",a);	//输出a的元素 
//	printf("string b is:%s\n",b);	//输出b的元素 
//	return 0;
//}

//#include <stdio.h> 
//int main()
//{
//	char a[]="i love china!",b[20],*p1,*p2;
//	p1=a;p2=b;
//	for(;*p1 != '\0';p1++,p2++)
//	{
//		*p2=*p1;
//	}
//	*p2='\0';
//	printf("string a is:%s\n",a);
//	printf("string b is:%s\n",b);
//	return 0;
//}






























