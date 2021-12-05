//回顾
//在二维数组中找出一个最大值，且输出
//#include <stdio.h>
//int main()
//{
//	int a[2][5]={2,3,4,5,9,-9,-4,65,-99,25};
//	int i,j,max;
//	max=a[0][0];
//	
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(a[i][j]>max)
//			{
//				max = a[i][j];
//			}
//		}
//	}
//	printf("max = %d\n",max);
//	
//	return 0;
// } 

//定义字符数组
//定义一个字符串"houboshi shuai",然后输出这个字符串
//#include <stdio.h>
//int main()
//{
//	char c[15]={'h','o','u','b','o','s','h','i',' ','s','h','u','a','i'};
////	int i;
////	for(i=0;i<15;i++)
////	{
////		printf("%c",c[i]);
////	}
////	printf("\n");
//	
////	printf("%s\n",c);
//	
//	puts(c);
//	return 0;
// } 

/*
输出一个    *
		  *   *
		  	*
图案 
*/
//#include <stdio.h>
//int main()
//{
//	char c[3][3]={' ','*',' ','*',' ','*',' ','*',' '};
//	int i,j;
//	
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%c",c[i][j]);
//		}
//		printf("\n");	
//	}
//
//	return 0;
// } 

//输入字符数组
//挨个单词输入scanf("%s%s...")
//整句输入gets() 
//键盘输入”i am supermonkey!“时，将这句话存入数组
//#include <stdio.h>
//int main()
//{
//	char c[18];
//	gets(c);
//	return 0;
// } 

//输入一行由空格和单词组成的字符（字数在80以内），请统计有多少个单词
//#include <stdio.h>
//int main()
//{
//	char a[81];
//	int dancishu=1,i;
//	gets(a);
//	if(a[0]==' ')
//	{
//		dancishu=0;
//	}
//	for(i=0;a[i]!='\0';i++)
//	{
//		if(a[i]=' '&&a[i+1]!=' '&&a[i+1]!='\0')
//		dancishu ++;
//	}
//	printf("%d\n",dancishu);
//	return 0;
//}


















 
