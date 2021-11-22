//if嵌套
//#include <stdio.h>
//int main()
//{
//	int a,b;
//	printf("please input A,B: ");
//	scanf("%d%d",&a,&b);
//	if(a!=b)
//	if(a>b)
//	printf("A>B\n");
//	else
//	printf("A<B");
//	else
//	printf("A=B");
//	return 0;
// } 

//#include <stdio.h>
//int main()
//{
//	int a,b;
//	printf("please input A,B: ");
//	scanf("%d%d",&a,&b);
//	if(a==b)
//	printf("A=B\n");
//	else if(a>b)
//	printf("A>B\n");
//	else
//	printf("A<B\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a,b,max;
//	printf("please input two numbers: ");
//	scanf("%d%d",&a,&b);
//	printf("max=%d",a>b?a:b);//语义：如果a>b为真，则把a赋予max,否则把b赋予max 
//	return 0;
//}



//输入一个字符，判断是否为大写字母，如果是，将其变成小写字母；如果不是，不转换，然后输出最后得到的字符
#include <stdio.h>
int main()
{
	char ch ;
	scanf("%c",&ch);
	ch = (ch>='A'&&ch<='Z') ? (ch + 32):ch;
	printf("%c\n",ch);
	return 0; 
}
 
