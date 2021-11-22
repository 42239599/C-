//if语句
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
//	c = getchar();//从键盘上获取一个字符，然后存放到 c 里面 
//	if( c < 32)
//	{
//		printf("This is a control character!");
//	}
//	else if( c >'0' && c<='9')//&&逻辑与---->两个表达式必须都为 true，整个表达式才为 true 
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
//	printf("请输入您的值："); 
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


//写一个程序排出等级：score<60 输出E   60<=score<70-->D   70<=score<80-->C   80<=score<90-->B   90<=score-->A
//#include <stdio.h>
//int main()
//{
//	int score;
//	printf("请输入成绩：");
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
//		printf("您的输入有误！！");
//	}
//	return 0;
// } 

//对比大小
//输入三个数a,b,c 排列大小
//#include <stdio.h>
//int main()
//{
//	int a,b,c,temp;
//	printf("请输入数字：");
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
