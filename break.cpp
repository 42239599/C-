//#include <stdio.h>
//int main()
//{
//	int r;
//	double area, pi =3.14159;
//	for(r=1;r<=10;r++)
//	{
//		area=pi*r*r;
//		if(area>100)
//		{
//			break;
//		}
//		printf("r=%d	area=%2.2lf\n",r,area);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//	int i = 0;
//	char c;
//	while(1)
//	{
//		c='\0';
//		while(c!=13&&c!=27)
//		{
//			c=getch();
//			printf("%c\n",c);
//		}
//		if(c==27)
//		break;
//		i++;
//		printf("the no. is %d\n",i);
//	}
//	printf("the end");
//	return 0;
//}



//100-200之间不能被3整除的数输出

//#include <stdio.h>
//
//int main()
//{
//	int i;
//	for(i=100;i<201;i++)
//	{
//		if(i%3 != 0)
//		printf("%d\n",i);
//
//	}
//	return 0;
// }


//求素数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i,j,k;
//	printf("input a number:\n");
//	scanf("%d",&j);
//	k = sqrt(j);
//	for(i=2;i<=k;i++)
//	{
//		if(j % i == 0)
//			break;
//	}
//	if(k < i)
//	printf("素数");
//	else
//	printf("不是素数"); 
//	return 0;
//}

//100-200的素数
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i,k,j;
//	for(i = 100; i <=200; i++)
//	{
//		k = sqrt(i);
//		for(j = 2 ; j <= k ; j++)
//		{
//			if(i % j == 0)
//			break;
//		}
//		if(j>k)
//		printf("素数 = %d\n",i);
//	
//	}
//	return 0;
// } 
 
