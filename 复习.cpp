//#include <stdio.h> 
//#include <math.h>
//#include <string.h>
//int main()
//{
//	void conver(char arr[]);
//	char arr[10];
//	printf("������ʮ����������\n");
//	gets(arr);
//	conver(arr);
//	return 0;
//}
//
//void conver(char arr[])
//{
//	int i,sum=0,j=0,n=strlen(arr);
//	int num[100];
//	for(i=0;i<n;i++)
//	{
//		switch(arr[i])
//		{
//			case 'A':num[j++]=10;break;
//			case 'B':num[j++]=11;break;
//			case 'C':num[j++]=12;break;
//			case 'D':num[j++]=13;break;
//			case 'E':num[j++]=14;break;
//			case 'F':num[j++]=15;break;
//			default:num[j++]=(int)(arr[i]-'0');break;
//		}
//	}
//	for(i=n-1;i>=0;i--)
//	{
//		sum+=num[i]*pow(16,n-1-i);
//	}
//	printf("����ǣ�%d\n",sum);
//}


//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//int main(void)
//{
//	void conver(char arr[]);
//	char arr[10];
//	printf("������ʮ�����Ƶ�����\n");
//	gets(arr);
//	conver(arr);
//	return 0;
//}
//void conver(char arr[])
//{
//	int num[100];
//	int sum=0,i,j=0,n=strlen(arr);
//	for(i=0;i<n;i++)
//	{
//		switch(arr[i])
//		{
//			case 'A':num[j++]=10;break;
//			case 'B':num[j++]=11;break;
//			case 'C':num[j++]=12;break;
//			case 'D':num[j++]=13;break;
//			case 'E':num[j++]=14;break;
//			case 'F':num[j++]=15;break;
//			default:num[j++]=(arr[i]-'0');break;			
//		}
//	}
//	
//	for(i=n-1;i>=0;i--)
//	{
//		sum+=num[i]*pow(16,n-i-1);
//	}
//	printf("ת������ǣ�%d\n",sum);
//}

//���������ĳ���ǵ���ĵڼ���
#include <stdio.h> 
int main()
{
	void opa(int y,int m,int d);
	int year,month,day;
	printf("�����������գ�\n");
	scanf("%d %d %d",&year,&month,&day);
	opa(year,month,day);
	return 0;
}
void opa(int y,int m,int d)
{
	int sum=0;
	if(!(m>=1 && m<=12))
		printf("��������ȷ���·�\n");
	else
	{
		switch(m)	
		{
			case 12:sum+=31;
			case 11:sum+=30;
			case 10:sum+=31;
			case 9:sum+=30;
			case 8:sum+=31;
			case 7:sum+=31;
			case 6:sum+=30;
			case 5:sum+=31;
			case 4:sum+=30;
			case 3:sum+=31;
			case 2:sum+=28;
			case 1:sum+=d;
		}	
		if(y%4==0 && y%100 != 0 || y%400==0)
		{
			if(m>2)
			sum++;
		}
			printf("�ǵ�%d�졣\n",sum);
	}	



}

















































