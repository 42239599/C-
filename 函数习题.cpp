//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	void fx(char a[]);
//	char a[100];
//	printf("�������ַ�����\n");
//	gets(a);
//	printf("������ַ���Ϊ��%s\n",a);
//	fx(a);
//	printf("�������Ϊ��%s\n",a);
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
//	printf("�������ַ�����\n");
//	gets(a);
//	fx(a);
//	printf("�������ַ����ǣ�%s\n",a);
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
//	printf("�������һ���ַ�����\n");
//	gets(str1);
//	printf("������ڶ����ַ�����\n");
//	gets(str2);
//	cat(str1,str2);
//	return 0;
//}
//void cat(char str1[],char str2[])
//{
//	printf("ƴ�Ӻ�Ϊ��%s\n",strcat(str1,str2));
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[4],i;
//	printf("������һ����λ����\n");
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
//	printf("������Ҫͳ�Ƶ����ݣ�\n");
//	gets(ch);
//	printf("ͳ�����£�\n");
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
//	printf("��ĸ����Ϊ��%d\n���ָ���Ϊ��%d\n�ո����Ϊ��%d\n�����ַ�����Ϊ��%d\n",num_char,num_math,num_space,num_other);
//}

//#include <stdio.h>
//int main()
//{
//	void px(int a[]);
//	int i,a[10];
//	printf("������ʮ�����֣�\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("�����Ľ���ǣ�\n");
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
//	printf("������a,b,c,d��ֵ��\n");
//	scanf("%f %f %f %f",&a,&b,&c,&d);
//	x=solute(a,b,c,d);
//	printf("����ǣ�%f\n",x);
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














