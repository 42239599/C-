////函数

//
//#include <stdio.h>
//int main()
//{
//
//	{
//	void printstar();
//	void print_message();
//	
//	printstar();
//	print_message();
//	printstar();	
//	return 0;
//	}
//	
//	void printstar()
//	{
//		printf("**********");
//	}
//	void print_message()
//	{
//		printf("how da you do");
//	}
//
// } 



//定义有参函数的一般形式：
//类型标识符  函数名  （形式参数表列）
//｛ 
//声明部分 
//语句部分 
//｝ 

//#include <stdio.h>
//
//int max(int x,int y)//定义有参函数max 
//{
//	int z;
//	z = x > y ? x:y;
//	/*
//	if(x > y)
//	{
//		z ==x
//	}
//	else
//	{
//		z == y
//	}
//	*/
//	return z;
//}
//
//int main()
//{
//	int max(int x ,int y);//对max函数的声明,形参 
//	int a, b , c;
//	scanf("%d%d",&a,&b);
//	c = max(a,b);//实参 
//	printf ("max = %d",c);
//	
//	return 0;
//}


////比较两个小数的大小 
//#include <stdio.h>
//
//float max(float x,float y)
//{
//	float z;
//	z = x > y ? x:y;
//	return z;
//}
//int main()
//{
//	float a,b,c;
//	float max(float x,float y);
//	scanf("%f%f",&a,&b);
//	c = max(a,b);
//	printf("max =%5.2f\n",c);
//	return 0;
//}





//函数的调用

//#include <stdio.h>
//
//int f (int a , int b)
//{
//	int c;
//	if(a>b)
//	c = 1;
//	else if( a==b )
//	c = 0;
//	else
//	c = -1;
//	return c;
//}
//
//int main()
//{
//	int f(int a,int b);//函数声明
//	int i = 2 , p;
//	p = f ( i , ++i);//函数调用
//	printf("%d\n",p); 
//	return 0;
// } 


//#include <stdio.h>
//
//
//int main()
//{
//	float add(float x,float y);//对被调用函数add的声明
//	float a,b,c; 
//	printf("input 2 numbers:\n");
//	scanf("%f%f",&a,&b);
//	c = add(a,b);
//	printf("sum is = %f\n",c);
//	return 0;
// } 
//float add(float x,float y)
//{
//	float z ;
//	z = x + y;
//	return z; 
//}
