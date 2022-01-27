//#include <stdio.h> 
//#include <string.h> 
//int main(void)
//{
//	void sorts(char str[]);
//	char str[20];
//	printf("请输入句子：\n");
//	gets(str);
//
//	sorts(str);	
//	printf("倒序是：%s\n",str);	
//	return 0;
//}
//void sorts(char str[])
//{
//	int n,i,j;
//	char ch[20];
//	n=strlen(str);
//
//	for(i=0,j=n-1; (str[i]) != '\0';i++,j--)
//	{
//		ch[j]=str[i];
//	}
//	ch[j]='\0';
//	
//	strcpy(str,ch);	
////	for(i=0;(ch[i]) != '\0';i++)
////		printf("%c",ch[i]);
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	void reverse_str(char str[]);
//	char str[100];
//	printf("请输入字符串：");
//	gets(str);
//	printf("您输入的字符串为：\n%s\n", str);
//	reverse_str(str);
//	printf("反序后的字符串为：\n%s", str);
//	return 0; 
//}        
//
//void reverse_str(char str[])
//{
//	int i,j;
//	char str_reverse[100];
//	for(i=0,j=strlen(str)-1;str[i]!='\0';i++,j--){
//		str_reverse[i] = str[j];
//	}
//	str_reverse[i]='\0';  // 这里非常的关键，因为没有这个就不知道定义时 str_reverse是什么样子的！ 
//	strcpy(str,str_reverse); // 这里复制，形参中str改变，实参也会随之改变，因为它们是同一个地址，同一个存储单位 
//} 

//#include <stdio.h> 
//#include <string.h>
//int main(void)
//{
//	void sorts(char a[]);
//	char a[100];
//	printf("请输入句子：\n");
//	gets(a);
//	printf("\n原句子是%s\n",a);
//	sorts(a);
//	printf("倒序是:\n%s",a);
//	return 0;
//}
//void sorts(char a[])
//{
//	char ch[100];
//	int i,j;
//	for(i=0,j=strlen(a)-1; (a[i]) != '\0';i++,j--)
//	{
//		ch[j]=a[i];
//	}
//	ch[j]='\0';
//	strcpy(a,ch);
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	void merge(char str1[],char str2[]);
//	char str1[20],str2[20];
//	printf("请输入句子1：\n");
//	gets(str1);
//	printf("请输入句子2：\n");
//	gets(str2);
//	printf("两句子合并是：\n");
//	merge(str1,str2);
//	return 0;
//}
//void merge(char str1[],char str2[])
//{
//	printf("%s",strcat(str1,str2));
//}
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char a[10];
//	printf("请输入数字：\n");
//	gets(a);
//	int n,i;
//	n=strlen(a);
//	printf("处理后是：\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%c ",a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	void statistical(char str[]);
//	char str[100];
//	printf("请输入要统计的句子：\n");
//	gets(str);
//	printf("统计如下：\n");
//	statistical(str);
//	return 0;
//}
//void statistical(char str[])
//{
//	int i;
//	char ch;
//	int char_num=0,math_num=0,space_num=0,other_num=0;
//	for(i=0;(ch=str[i]) != '\0';i++)
//	{
//		if(ch>='a' && ch<='z' ||ch>='A' && ch<='Z')
//			char_num++;
//		else if (ch>='0' && ch<='9')
//			math_num++;
//		else if(ch==' ')
//			space_num++;
//		else
//			other_num++;
//	}
//	printf("字母个数：%d\n数字个数：%d\n空格个数：%d\n其他的个数：%d\n",char_num,math_num,space_num,other_num);
//}

//#include <string.h>
//#include <stdio.h>
//int main(void)
//{
//	void statistical(char str[]);
//	char str[100];
//	printf("请输入句子：\n");
//	gets(str);
//	statistical(str);
//	return 0;
//}
//void statistical(char str[])
//{
//	int  i,n,count=1,j;
//	n=strlen(str);
//	if(str[0]==' ')
//		count=0;
//	for(i=1;i<n;i++)
//	{
//		if(str[i-1] ==' ' && (str[i]) != ' ' && ((str[i] >= 'a' || str[i] >='A') && (str[i]<='z' || str[i]<='Z')))
//			count++;
//	}
//	printf("一共有%d个词组\n",count);
//	
//	char a[30],t[30];
//	for(i=0;i<n;i++)
//	{
//		j=0;
//		while(str[i] >='a' && str[i] <='z' || str[i] >= 'A' && str[i] <= 'Z')
//			t[j++]=str[i++];
//			t[j]='\0';
//		if(strlen(a)<strlen(t))
//			strcpy(a,t);
//	}
//	printf("最长的单词是：\n");
//	puts(a);
//}

//#include <math.h>
//#include <stdio.h>
//int main(void)
//{
//	void stu_aver(float score[][4]);
//	void class_aver(float score[][4]);
//	void search(float score[][4]);
//	void variance(float score[][4]);
//	int i,j;
//	float score[3][4];
//	for(i=0;i<3;i++) 
//	{
//		printf("请输入第%d位学生的成绩：\n",i+1);
//		for(j=0;j<4;j++)
//		{
//			scanf("%f",&score[i][j]);
//		}
//	}
//	
//	stu_aver(score);
//	class_aver(score);
//	search(score);
//	variance(score);
//	return 0;
//}
//void stu_aver(float score[][4])
//{
//	int  i,j;
//	float aver,sum=0;
//	for(i=0;i<3;i++)
//	{
//		sum=0;
//		aver=0;
//		for(j=0;j<4;j++)
//		{
//			sum+=score[i][j];
//		}
//		aver=sum/4.0;
//		printf("第%d位学生每科平均分是:%5.2f\n",i+1,aver);
//	}
//	printf("\n\n\n\n");
//}
//
//void class_aver(float score[][4])
//{
//	int i,j;
//	float sum=0,aver;
//	for(j=0;j<4;j++)
//	{
//		sum=0;
//		aver=0;
//		for(i=0;i<3;i++)
//		{
//			sum+=score[i][j];
//		}
//		aver=sum/3.0;
//		printf("第%d门课的平均分为：%5.2f\n",j+1,aver);
//	}
//	printf("\n\n\n\n");
//}
//
//void search(float score[][4])
//{
//	int  i,j,maxi,maxj;
//	float max=score[0][0];
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			if(score[i][j]>max)
//			{
//				max=score[i][j];
//				maxi=i;
//				maxj=j;
//			}
//		}
//	}
//	printf("最高分是%5.2f分，是第%d名学生的第%d门课\n",max,maxi+1,maxj+1);
//}
//
//void variance(float score[][4])
//{
//	int i,j;
//	float var,x1=0,x2=0,aver[3],sum;
//	
//	for(i=0;i<3;i++)
//	{
//		sum=0 ;	aver[i]=0;
//		for(j=0;j<4;j++)
//		{
//			sum+=score[i][j];
//		}
//		aver[i]=sum/4.0;
//	}
//	
//	for(i=0;i<3;i++)
//	{
//		x1+=pow(aver[i],2);
//		x2+=aver[i];
//	}
//	
//	var=x1/3.0-pow(x2/3.0,2);
//	printf("方差是：%5.2f",var);
//}


//#include <stdio.h>
//
//int main(void)
//{
//	void print(char a[][10]);
//	char a[10][10];
//	print(a);
//	return 0;
//}
//void print(char a[][10])
//{
//	int i,j;
//	char name[10];
//	char num[6];
//	
//	for(i=0;i<10;i++)
//	{
//		printf("请输入第%d位员工的姓名和工号：\n",i+1);
//		scanf("%s %s",name[10],num[6]);
//	}
//}


#include <stdio.h>
#include <string.h>
int main(void)
{
	void input(char name[][20],int num[],int x);
	void sorts(char name[][20],int num[]);
	void search(char name[][20],int num[],int n);
	char name[10][20];
	int num[10],number;
	printf("请输入要查找的工号：");
	scanf("%d",&number);
	input(name,num,10);
	sorts(name,num);
	search(name,num,number);
	return 0;
}
void input(char name[][20],int num[],int x)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("请输入第%d位员工的名字和工号\n",i+1);
		scanf("%s",name[i]);
		scanf("%d",&num[i]);
	}
}

void sorts(char name[][20],int num[] )
{
	int i,j,t;
	char tm[20];
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(num[i]>num[j])
			{
				t=num[i];
				num[i]=num[j];
				num[j]=t;
				strcpy(tm,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],tm);
			}
		}	
	}
	
	printf("调整后如下：\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t%s\n",num[i],name[i]);
	}
	
}

void search(char name[][20],int num[],int n)
{
	int mid,low=0,high=9;

	while(low<=high)
	{
		mid=(low+high)/2;	
		if(num[mid]>n)
			high=mid-1;
		if(num[mid]<n)
			low=mid+1;
		if(num[mid] == n)
		{
			printf("找到了，该员工名字为%s",name[mid]);
			break;
		}
	}
	if(low>high)
		printf("没找到\n");
}








