//if���
//#include <stdio.h>
//int main()
//{
//	int a,b;
//	printf("input two numbers :");
//	scanf("%d%d",&a,&b);
//	if( a > b)
//	{
//		printf("max = %d\n",a);
//	}
//	else
//	{
//		printf("max = %d\n",b);
//	}
//
//	return 0;
// } 

//#include <stdio.h>
//int main()
//{
//	char c;
//	printf("input a character:");
//	c = getchar();//�Ӽ����ϻ�ȡһ���ַ���Ȼ���ŵ� c ���� 
//	if( c < 32)
//	{
//		printf("This is a control character!");
//	}
//	else if( c >'0' && c<='9')//&&�߼���---->�������ʽ���붼Ϊ true���������ʽ��Ϊ true 
//	{
//		printf("This is adigit\n");
//	}
//	else if ( c >='A' && c <= 'Z')
//	{
//		printf("This is a capital");
//	}
//	else if ( c >='a' && c <= 'z')
//	{
//		printf("This is a small letter!");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a , b ;
//	printf("����������ֵ��"); 
//	scanf("%d",&a);
//	b = 5;
//	if( a == b)
//	{
//		printf("b equals a!!\n");
//	}
//	else
//	{
//		printf("b is %d\n",b);
//	}
//	return 0;
//}


//дһ�������ų��ȼ���score<60 ���E   60<=score<70-->D   70<=score<80-->C   80<=score<90-->B   90<=score-->A
//#include <stdio.h>
//int main()
//{
//	int score;
//	printf("������ɼ���");
//	scanf("%d",&score);
//	if( (90 <score || score ==90) && score <100)
//	{
//		printf("A\n");
//	}
//	else if( (80 <score || score ==80) && score <90)
//	{
//		printf("B\n");
//	}
//	else if( (70 <score || score ==70) && score <80 )
//	{
//		printf("C\n");
//	}
//	else if (( 60 < score || score ==60) && score <70 )
//	{
//		printf("D\n");
//	}
//	else if((0<score || score ==0) && score <60)
//	{
//		printf("E\n");
//	}
//	else
//	{
//		printf("�����������󣡣�");
//	}
//	return 0;
// } 

//�Աȴ�С
//����������a,b,c ���д�С
//#include <stdio.h>
//int main()
//{
//	int a,b,c,temp;
//	printf("���������֣�");
//	scanf("%d%d%d",&a,&b,&c);
//	if( a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if( a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if( b > c)
//	{
//		temp = b;
//		b = c ;
//		c = temp;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
// } 
