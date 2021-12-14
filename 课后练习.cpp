//////质数
//#include <stdio.h>
//int main()
//{
//	int n,i;
//	printf("请输入数字：\n");
//	scanf("%d",&n);
//	for(i=2;i<=n-1;i++)
//	{
//		if(n%i == 0)
//		break;
//	}
//	if(i<=n-1)
//	{
//		printf("不是素数\n"); 
//	}
//	else
//	printf("是素数\n");
//	return 0;
// } 
//

//#include <stdio.h>
//int main()
//{
//	int n,i;
//	printf("请输入数字：\n");
//	scanf("%d",&n);	
//	for(i=2;i<=n/2;i++)
//	{
//		if(n%i == 0)
//		break;
//	}
//	if(i<=n/2)
//	printf("不是素数\n");
//	else
//	printf("是素数\n");
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i,n,k;
//	printf("请输入数字：\n");
//	scanf("%d",&n);
//	k=sqrt(n);
//	for(i=2;i<=k;i++)
//	{
//		if(n%i == 0)
//		break;
//	}
//	if(i<=k)
//	printf("不是素数\n");
//	else
//	printf("是素数\n");
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i , m , k ,n ;
//	printf("素数有以下：\n");
//	for(n=100;n<=200;n++)
//	{
//		k=sqrt(n);	
//		for(i=2;i<=k;i++)
//		{
//			if(n%i == 0)
//			break;		
//		}
//		if(i>=k+1)
//		printf("%d\t",n);	
//		m=m+1;
//		if(m%5 == 0)
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int  f1=1,f2=1,i;
//	for(i=1;i<=20;i++)
//	{
//		printf("%12d%12d",f1,f2);
//		f1=f1+f2;
//		f2=f1+f2;
//		if(i%4 == 0)
//		printf("\n");	
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int sign=1,count;
//	float pi=0.0,n=1.0,term=1.0;
//	while(fabs(term) >= 1e-6)
//	{
//		pi=pi+term;
//		n=n+2;
//		sign=-sign;
//		term=sign/n;
//		count++;
//	}
//	pi=pi*4;
//	printf("π的值为%10.6f\n",pi);
//	printf("%d",count);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int sign=1,count;
//	float pi=0.0,n=1.0,term=1.0;
//	while(fabs (term) >= 1e-8 )
//	{
//		pi=pi+term;
//		n=n+2;
//		sign=-sign;
//		term=sign/n;
//		count++;
//	}
//	pi=pi*4;
//	printf("%10.8f\n",pi);
//	printf("%d\n",count);
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	int m,n,i;
//	printf("请输入两个数字：\n");
//	scanf("%d %d",&n,&m);
//	if(m==n)
//	{
//		printf("最大公约数为%d\n",m);
//		printf("最小公倍数为%d\n",m);
//	}
//	 
//	else if(m>n)
//	{
//		if(m%n==0)
//		{
//			printf("最大公约数是:%d\n",n);
//			printf("最小公倍数是:%d\n",m);
//		}
//		else
//		{
//			for(i=n/2;i>=2;i--)
//			{
//				if(m%i == 0)
//				break;
//			}
//			if(i<=n/2 && i>1)
//			printf("最大公约数是:%d\n",i);
//			else
//			printf("最大公约数是: 1 \n");
//			printf("最大公倍数为：%d\n",(m*n*i));
//		}
//	}
//	
//	else
//	{
//		if(n%m == 0)
//		{
//			printf("最大公约数是:%d\n",m);
//			printf("最小公倍数是:%d\n",n);			
//		}
//		else
//		{
//			for(i=m/2;i>=2;i--)
//			{
//				if(n%i == 0)
//				break;
//			}
//			if(i<=m/2 && i>1)
//			printf("最大公约数是:%d\n",i);
//			else
//			printf("最大公约数是: 1 \n");
//			printf("最大公倍数为：%d\n",(m*n*i));						
//		}				
//	}	
//	return 0;
//}///error 

//#include <stdio.h>
//int main()
//{
//	int a,b,t,c,m;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&a,&b);
//	if(a<b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	m=a*b;
//	c=a%b;
//	
//	while(c!= 0)
//	{
//		a=b;
//		b=c;
//		c=a%b;
//	}
//	printf("最大公约数为：%d\n",b);
//	printf("最小公倍数为：%d\n",m/b);	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a,b,t,m,c;
//	printf("请输入两个数字；\n");
//	scanf("%d %d",&a,&b);
//	if(a<b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	m=a*b;
//	c=a%b;
//	while(c != 0)
//	{
//		a=b;
//		b=c;
//		c=a%b;
//	}
//	printf("最大公约数为：%d\n",b);
//	printf("最小公倍数为：%d\n",m/b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch;
//	int char_num=0,int_num=0,space_num=0,other_num=0;
//	
//	while((ch=getchar()) != '\n')
//	{
//		if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
//		{
//			char_num++;
//		}
//		else if(ch>='0' && ch<='9')
//		{
//			int_num++; 
//		}
//		else if(ch == ' ')
//		{
//			space_num++;
//		}
//		else
//		{
//			other_num++;
//		}
//	}
//	printf("字母个数为：%d\n",char_num);
//	printf("数字个数为：%d\n",int_num);
//	printf("空格个数为：%d\n",space_num);
//	printf("其他字符个数为：%d\n",other_num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n,i=1,term=0,sn=0,a;
//	printf("请输入位数:\n");
//	scanf("%d",&n);
//	printf("请输入显示相加的数：\n");
//	scanf("%d",&a);
//	for(i=1;i<=n;i++)
//	{
//		term=term*10+a;
//		sn=sn+term;
//		
//	}
//	printf("结果是：%d\n",sn);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i=1,sum=0,a=1;
//	while(i<=3)
//	{
//		i=i+1;
//		sum=sum+a;
//		a=a*i;
//	}
//	printf("%d\n",sum);
//	return 0;
// } 

//#include <stdio.h>
//int main()
//{
//	int i=1,n,a=1,sum=0;
//	printf("请输入阶乘：\n");
//	scanf("%d",&n);
//	while(i<=n)
//	{
//		i++;
//		sum=sum+a;
//		a=a*i;
//	}
//	printf("result is ；%d\n",sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n,i,sum=0,a=1;
//	printf("请输入阶乘：\n");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		a=a*i;	
//		sum=sum+a;
//	}
//	printf("sum is %d\n",sum);	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,ge,shi,bai;
//	printf("水仙花数有以下：\n");
//	for(i=100;i<1000;i++)
//	{
//		bai=i/100;
//		shi=(i-bai*100)/10;
//		ge=i-bai*100-shi*10;
//		if(i == ge*ge*ge+bai*bai*bai+shi*shi*shi)
//		{
//			printf("%d\n",i);
//		}
//		
//	}
//	printf("\n");
//	return 0;
//}
























