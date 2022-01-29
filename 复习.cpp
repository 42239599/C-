//十六进制转十进制 
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
	void conver(char arr[]);
	char arr[10];
	printf("请输入十六进制数字：\n");
	gets(arr);
	conver(arr);
	return 0;
}
void conver(char arr[])
{
	int i,sum=0,j=0,n=strlen(arr);
	int num[100];
	for(i=0;i<n;i++)
	{
		switch(arr[i])
		{
			case 'A':num[j++]=10;break;
			case 'B':num[j++]=11;break;
			case 'C':num[j++]=12;break;
			case 'D':num[j++]=13;break;
			case 'E':num[j++]=14;break;
			case 'F':num[j++]=15;break;
			default:num[j++]=(arr[i]-'0');break;
		}
	}
	for(i=n-1;i>=0;i--)
	{
		sum+=num[i]*pow(16,n-1-i);
	}
	printf("%d\n",sum);
}









































