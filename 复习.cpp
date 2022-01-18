//#include <stdio.h> 
//int main()
//{
//	char c;
//	c=getchar();
//	while(c!='\n')
//	{
//		if((c>='a' && c<='z') || (c>='A'&&c<='Z') )
//		{
//			if(c>='w' && c<='z' || c>='A' && c<='Z')	
//				c=c-22;
//			else
//				c=c+4;
//		}
//		printf("%c",c);
//		c=getchar();
//	}
//	printf("\n");
//	return 0;
//}

///输入里两个整数，求最大公倍数和最小公约数
//#include <stdio.h> 
//int main()
//{
//	int a,b,c,min,t;	
//	printf("please input two numbers :\n");
//	scanf("%d %d",&a,&b);
//	if(a<b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	} 
//	c=a%b;
//	min=a*b;
//	while(c!=0)
//	{
//		a=b;
//		b=c;
//		c=a%b;
//	}
//
//	printf("最大公约数是：%d\n最小公倍数是：%d\n",b,min/b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int char_num=0,space_num=0,math_num=0,others_num=0;
//	char ch;
//	while((ch=getchar()) != '\n')
//	{
//		if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
//			char_num++;
//		else if(ch>='0' && ch<='9')
//			math_num++;
//		else if(ch==' ')
//			space_num++;
//		else
//			others_num++;	
//	}
//	printf("字母：%d\n数字：%d\n空格：%d\n其他：%d\n",char_num,math_num,space_num,others_num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,a,n,sum1=0,sum=0;
//	printf("请输入要显示的数字：\n");
//	scanf("%d",&a);
//	printf("请输入要显示的位数：\n");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		sum1=sum1*10+a;
//		sum+=sum1;
//	}
//	printf("result is :%d",sum);
//	return 0;
//}


//求阶乘
//#include <stdio.h> 
//int main()
//{
//	int n,i,a,sum=1,sum1=0;
//	printf("请输入要阶乘的数：\n");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		a=i+1;
//		sum=sum*a;
//		sum1+=sum;
//		
//	}
//	printf("%d! = %d",n,sum1);
//	return 0;
//}

//水仙花数
//#include <math.h> 
//#include <stdio.h>
//int main()
//{
//	int n,i,g,s,b;
//	for(i=100;i<1000;i++)
//	{
//		b=i/100;
//		s=(i-b*100)/10;
//		g=i-b*100-s*10;
//		n=pow(g,3)+pow(s,3)+pow(b,3);
//		if(n==i)
//			printf("%d\n",i);
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i,j,sum=0,k;
	for(i=1;i<=1000;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
				if(sum==i)
				{
					printf("%d its factors are ",i);
					for(k=1;k<i;k++)
					{
						if(i%k==0)
							printf("%4d",k);
					}
					printf("\n");
				}
			}
		}	
	}
	
	return 0;
}



























