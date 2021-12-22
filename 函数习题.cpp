//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	void fx(char a[]);
//	char a[100];
//	printf("请输入字符串：\n");
//	gets(a);
//	printf("输入的字符串为：%s\n",a);
//	fx(a);
//	printf("反序输出为：%s\n",a);
//	return 0;
//}
//void fx(char a[])
//{
//	int i,j;
//	char fx_a[100];
//	for(i=0,j=strlen(a)-1;a[i] != '\0';i++,j--)
//	{
//		fx_a[i]=a[j];
//	}
//	fx_a[i]='\0';
//	strcpy(a,fx_a);
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	void fx(char a[]);
//	char a[100];
//	printf("请输入字符串：\n");
//	gets(a);
//	fx(a);
//	printf("反序后的字符串是：%s\n",a);
//	return 0;
//}
//void fx(char a[])
//{
//	int i,j;
//	char fx_a[100];
//	for(i=0,j=strlen(a)-1;a[i] != '\0';i++,j--)
//	{
//		fx_a[i]=a[j];
//	}
//	fx_a[i]='\0';
//	strcpy(a,fx_a);
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	void cat(char str1[],char str2[]);
//	char str1[100],str2[100];
//	printf("请输入第一个字符串：\n");
//	gets(str1);
//	printf("请输入第二个字符串：\n");
//	gets(str2);
//	cat(str1,str2);
//	return 0;
//}
//void cat(char str1[],char str2[])
//{
//	printf("拼接后为：%s\n",strcat(str1,str2));
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[4],i;
//	printf("请输入一个四位数：\n");
//	gets(a);
//	for(i=0;i<strlen(a);i++)
//		printf("%c ",a[i]);
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	void tj(char ch[]);
//	char ch[100];
//	printf("请输入要统计的内容：\n");
//	gets(ch);
//	printf("统计如下：\n");
//	tj(ch);
//	return 0;
//}
//void tj(char ch[])
//{
//	int i,num_char=0,num_math=0,num_space=0,num_other=0;
//	for(i=0;ch[i] != '\0';i++)
//	{
//		if(ch[i] >='A' && ch[i] <='Z' ||ch[i]>='a' && ch[i]<='z')
//			num_char++;
//		else if(ch[i] >='0' && ch[i] <='9')
//			num_math++;
//		else if(ch[i] == ' ')
//			num_space++;
//		else
//			num_other++;	
//	}
//	printf("字母个数为：%d\n数字个数为：%d\n空格个数为：%d\n其他字符个数为：%d\n",num_char,num_math,num_space,num_other);
//}

//#include <stdio.h>
//int main()
//{
//	void px(int a[]);
//	int i,a[10];
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("排序后的结果是：\n");
//	px(a);
//	return 0;
//}
//void px(int a[])
//{
//	int i,j,t;
//	for(j=0;j<9;j++)
//	{
//		for(i=j;i<9;i++)
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
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float solute(float,float,float,float);
//	float a,b,c,d,x;
//	printf("请输入a,b,c,d的值：\n");
//	scanf("%f %f %f %f",&a,&b,&c,&d);
//	x=solute(a,b,c,d);
//	printf("结果是：%f\n",x);
//	return 0;
//}
//float solute(float a,float b,float c,float d)
//{
//	float x1=0,x=1;
//	while(fabs(x1-x)>1e-6)
//	{
//		x1=x;
//		x=x1-(a*pow(x,3)+b*pow(x,2)+c*x+d)/(3*a*pow(x,2)+2*b*x+c);
//	}
//	return x;
//}














