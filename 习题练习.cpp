//////回顾
//#include <stdio.h> 
//int main()
//{
//	int n,m,a,b,t;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&n,&m);
//	if(n<m)
//	{
//		t=n;
//		n=m;
//		m=t;
//	}
//	a=n*m;
//	b=n%m;
//	while(b != 0)
//	{
//		n=m;
//		m=b;
//		b=n%m;
//	}
//	printf("最大公约数为：%d\n",m);
//	printf("最小公倍数为：%d\n",a/m);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i,k,j;
//	printf("100-200以内的质数有：\n");
//	for(i=100;i<=200;i++)
//	{
//		k=sqrt(i);
//		for(j=2;j<=k;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}		
//		}
//		if(j>=k+1)
//		printf("%d\n",i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sum=0,i=1,s1=1;
//	for(i=1;i<=4;i++)
//	{
//		s1=s1*i;
//		sum=sum+s1;
//	}
//	printf("%d\n",sum);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,j,sum,k;
//	for(i=1;i<=1000;i++)
//	{
//		sum=0;
//		for(j=1;j<i;j++)
//		{
//			if(i%j == 0)
//			sum=sum+j;
//		}
//		if(sum == i)
//		{
//			printf("%d its factors are  ",i);
//			for(k=1;k<i;k++)
//			{
//				if(i%k==0)
//				printf("%d ",k);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
// } 

//#include <stdio.h>
//int main()
//{
//	int f1=1,f2=1,fz,i,f3=0,f4=1,fm,sum=0,term;
//	for(i=1;i<=20;i++)
//	{
//		fz=f1+f2;
////		printf("%d\n",fz);
//		f1=f2;
//		f2=fz;
//		
//		fm=f3+f4;
//		f3=f4;
//		f4=fm;
////		printf("%d\n",fm);
//		term=fz/fm;
//		sum=sum+term;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i;
//	float h=100.0,sum=100.0;
//	for(i=1;i<=10;i++)
//	{
//		h=h/2.0;
//		sum=sum+h*2.0;
//		if(i%10 == 0)
//		printf("第十次反弹高度为：%f\n",h);
//	}
//	printf("第十次落地共经过%f米\n",sum);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,n=1;
//	for(i=10;i>1;i--)
//	{
//		n=(n+1)*2;
//	}
//	printf("%d\n",n);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i=1,j=1,k=1;
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=4-i;j++)
//		{
//			printf(" ");
//		}
//		for(k=1;k<=(2*i-1);k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	for(i=1;i<=3;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf(" ");
//		}
//		for(k=1;k<=(7-2*i);k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,j;
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[10],i;
//	for(i=0;i<10;i++)
//		a[i]=i;
//	for(i=9;i>=0;i--)
//	printf("%d\t",a[i]);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i;
//	int f[20]={1,1};
//	for(i=2;i<20;i++)
//	{
//		f[i]=f[i-2]+f[i-1];
//	}
//	for(i=0;i<20;i++)
//	{
//		if(i%5==0)
//		printf("\n");		
//		printf("%12d\t",f[i]);	
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,j,t;
//	int a[10];
//	printf("请输入十个数字：\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);	
//	}
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
//	printf("从小到大的排序为：\n");
//	for(i=0;i<=9;i++)
//	{
//		printf("%d\n",a[i]);
//	}	
//	return 0;
//}


#include <stdio.h>
int main()
{
	int i,j,t;
	int a[10];
	printf("请输入十个数字：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<9;j++)
	{
		for(i=0;i<9-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
		
	}	
	printf("排序如下：\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}


































