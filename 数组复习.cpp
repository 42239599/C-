//#include <stdio.h>
//int main(void)
//{
//	int a[15],i,j,t,n,key;
//	printf("������14�����֣�\n");
//	for(i=0;i<14;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//
//	
//	for(j=0;j<13;j++)
//	{
//		for(i=0;i<13-j;i++)
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
//	printf("������Ҫ���������:\n");
//	scanf("%d",&key);	
//	
//	if(key<a[0])
//	{
//		for(i=13;i>=0;i--)
//		{
//			a[i+1]=a[i];
//		}
//		a[0]=key;
//	}
//	
//	else
//	{
//		for(i=13;i>=0;i--)
//		{
//			if(a[i]>key)
//				a[i+1]=a[i];
//			else
//			{
//				a[i+1]=key;
//				break;
//			}
//		}
//	}
//	
//	printf("result is:\n");
//	for(i=0;i<15;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a[100][100],i,j,n;
//	printf("������������\n");
//	scanf("%d",&n);
//	
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			if(j==0 || i==j)
//			a[i][j]=1;
//		}
//	}
//	
//	for(i=2;i<n;i++)
//	{
//		for(j=1;j<i;j++)
//		{
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//		}
//	}
//	
//	printf("result is:\n");
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<=i;j++)
//		printf("%5d",a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[15],i,j,key,mid,high,low,t,count=0;
//	printf("please input 15 numbers:\n");
//	for(i=0;i<15;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	for(i=0;i<14;i++)
//	{
//		for(j=i+1;j<15;j++)
//		{
//			if(a[i]<a[j])
//			{
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}
//	
//	printf("please input the key:\n");
//	scanf("%d",&key);
//	
//	low=14;high=0;
//	while(low>=high)
//	{
//		mid=(low+high)/2;
//		count++;
//		if(a[mid]>key)
//		{
//			high=mid+1;
//		}
//		if(a[mid]<key)
//		{
//			low=mid-1;
//		}
//		if(a[mid]==key)
//		{
//			printf("get it!!");
//			printf("��������%d��ѭ���ҵ����ڵ�%d��λ�á�\n",count,mid+1);
//			break;
//		}
//	
//	}
//	if(a[mid] != key)
//	printf("û�ҵ�\n");		
//	
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char a[3][80],ch;
//	int i , j,b_num=0,s_num=0,math_num=0,space_num=0,others_num=0;
//	printf("��������ӣ�\n");
//	for(i=0;i<3;i++)
//		gets(a[i]);
//	
//	for(i=0;i<3;i++)
//	{
//		for(j=0;(ch=a[i][j]) != '\0';j++)
//		{
//			if(ch>='a' && ch<='z') 
//				s_num++;
//			else if(ch>='A' && ch<='Z')
//				b_num++;
//			else if(ch>='0' && ch<='9')
//				math_num++;
//			else if(ch==' ')
//				space_num++;
//			else	
//				others_num++;
//		}	
//	}
//
//	printf("��д��%d��\n",b_num);
//	printf("Сд��%d��\n",s_num);	
//	printf("������%d��\n",math_num);	
//	printf("�ո���%d��\n",space_num);
//	printf("������%d��\n",others_num);		
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,j,k;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<i;j++)
//		{
//			printf(" ");
//		}
//		for(k=0;k<5;k++)
//			printf("%c",'*');
//		printf("\n");
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char a[10],ch;
//	int i,str;
//	printf("������ԭ�ģ�\n");
//	gets(a);
//	
//	printf("ԭ��Ϊ:%s\n",a);
//	
//	str=strlen(a);
//	for(i=0;i<str;i++)
//	{
//		a[i]=ch+
//	}
//	
//	return 0;
//}

//#include<stdio.h>
// 
//int main() {
//	char string[20];
//	int i;
//	gets(string);
//	printf("\nKEY:\n");
//	puts(string);
//	for (i = 0; i < 20; i++) {
//		if (string[i] >= 'a' && string[i] <= 'z')
//			string[i] = 27-(string[i]-96)+96;
//		if (string[i] >= 'A' && string[i] <= 'Z')
//			string[i] = 27-(string[i]-64)+64;
//	}
//	printf("\nTXT:\n");
//	puts(string);
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	char a[20];
//	int i;
//	printf("������ԭ�ģ�\n");
//	gets(a);
//	
//	printf("ԭ����:");
//	puts(a);
//	
//	for(i=0;i<20;i++)
//	{
//		if(a[i] >= 'a' && a[i] <= 'z')
//		{
//			a[i]=27-(a[i]-96)+96;
//		}
//		if(a[i] >='A' && a[i] <= 'Z')
//		{
//			a[i]=27-(a[i]-64)+64;
//		}
//	}
//	
//	printf("������:");
//	puts(a);
//	
//	return 0;
//}

































