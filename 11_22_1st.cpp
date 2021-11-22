//#include <stdio.h>
//int main()
//{
//	float PI=3.14159;
//	int s,r=5;
//	s=r*r*PI;
//	printf("s=%d\n",s);//s=78
//	return 0;
//}//自动类型转换 


//#include <stdio.h>
//int main()
//{
//	float f = 5.75;
//	printf("(int)f=%d,f=%f\n",(int)f,f);//(int)f=5,f=5.750000 
//	return 0;
//}//强制类型转换 


//#include <stdio.h>
//int main()
//{
//	printf("%d\n",3/2);//1
//	printf("%f\n",3.0/2);//1.500000
//	return 0;
//}//除法运算符，整形有小数时，舍去；如果运算有一个是实型，则结果为双精度实型 


//#include <stdio.h>
//int main()
//{
//	printf("%d\n",7/2);//3
//	printf("%d\n",7%2);//1-->% 求模 <--相除求余数
//	printf("7/2=%d......%d\n",7/2,7%2);//原形  
//	return 0;
// } 


// ++i  i自加1后再运算
// --i  i自减1后运算
// i++  i参与运算后再自增1
// i--  i参与运算后再自减1
//#include <stdio.h>
//int main()
//{
//	int i = 8;
//	printf("%d\n",++i);//9
//	printf("%d\n",--i);//8
//	printf("%d\n",i++);//8
//	printf("%d\n",i--);//9
//	printf("%d\n",-i++);//-8
//	printf("%d\n",-i--);//-9
//	return 0 ;
// } 

//#include <stdio.h>
//int main()
//{
//	int i=5,j=5,q,p;
//	p=(i++)+(i++)+(i++);
//	q=(++j)+(++j)+(++j);
//	printf("%d,%d,%d,%d",p,q,i,j);//18,22,8,8
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a =2,b=4,c=6,x,y;
//	y=(x=a+b),(b+c);
//	printf("y=%d,x=%d",y,x);
//	return 0;
//}//逗号运算符 



