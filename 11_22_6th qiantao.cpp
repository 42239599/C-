//ifǶ��
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
//	printf("max=%d",a>b?a:b);//���壺���a>bΪ�棬���a����max,�����b����max 
//	return 0;
//}



//����һ���ַ����ж��Ƿ�Ϊ��д��ĸ������ǣ�������Сд��ĸ��������ǣ���ת����Ȼ��������õ����ַ�
#include <stdio.h>
int main()
{
	char ch ;
	scanf("%c",&ch);
	ch = (ch>='A'&&ch<='Z') ? (ch + 32):ch;
	printf("%c\n",ch);
	return 0; 
}
 
