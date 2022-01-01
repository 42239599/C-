//#include <stdio.h>
//int main()
//{
//	int max(int,int);
//	int min(int,int);
//	int (*p)(int x,int y);
//	int a,b,c,n;
//	printf("请输入两个数字：\n");
//	scanf("%d %d",&a,&b);
//	printf("请输入您的选择1或2：\n");
//	scanf("%d",&n);
//	if(n==1)	p=max;
//	else if(n==2)	p=min;
//	else printf("输入有误，请从重新输入!!\n");
//	c=(*p)(a,b);
//	printf("输出的结果是：%d\n",c);
//	return 0;
//}
//int max(int x,int y)
//{
//	int z;
//	if(x>y)	z=x;
//	else	z=y;
//	return z;
//}
//int min(int x,int y)
//{
//	int z;
//	if(x<y)	z=x;
//	else	z=y;
//	return z;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	void sort(char *name[],int n);
//	void print(char *name[],int n);
//	char *name[]={"fellow me","basic","great wall","fortran","computer designs"};
//	int n=5;
//	sort (name,n);
//	print(name,n);
//	return 0;
//}
//void sort(char *name[],int n)
//{
//	char *temp;
//	int i,j,k;
//	for(i=0;i<n-1;i++)
//	{
//		k=i;
//		for(j=i+1;j<n;j++)
//			if(strcmp(name[k],name[j])>0) k=j;
//		if(k != i)
//		{
//			temp=name[i];
//			name[i]=name[k];
//			name[k]=temp;
//		}
//		
//	}
//}
//void print(char *name[],int n)
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		printf("%s\n",name[i]);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	char *name[]={"flollow","basic","great wall","fortran","computer design"};
//	char **p;
//	int i;
//	for(i=0;i<5;i++)
//	{
//		p=name+i;
//		printf("%s\n",*p);
//	}
//	return 0;
//}






































