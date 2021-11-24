//二维数组
//三行四列---> int a[3][4]; 
//a[0]a[0]  a[0]a[1]  a[0]a[2]  a[0]a[3]
//a[1]a[0]  a[1]a[1]  a[1]a[2]  a[1]a[3]
//a[2]a[0]  a[2]a[1]  a[2]a[2]  a[2]a[3]

//#include <stdio.h>
//int main()
//{
//	int a[3][4]= {{1},{5},{9}};//这样初始化的是每一行的每一个元素 
//	
//	int a[3][4]= {1,5,9};//这样初始化的是从第一行开始的初始化；
//	
//	int a[3][4]= {{1},{0,6},{0,0,11}};//对第一行第一个元素赋值 ，第二行第二个元素赋值，对第三行第三个元素赋值
//	
//	
//	return 0;
//}



////求三科成绩平均分和总平均分 
//#include <stdio.h>
//int main() 
//{
//	int i,j,sum=0,average,v[3];
//	int a[5][3]={{80,75,92},{61,65,71},{59,63,70},{85,87,90},{76,77,85}};
//	for(i=0;i<3;i++)//科目 
//	{
//		for(j=0;j<5;j++)//学生 
//		{
//			sum = sum + a[j][i];
//			v[i]=sum/5;
//			sum=0;	
//		}
//	average=(v[0]+v[1]+v[2])/3;
//	printf("math:%d\nc languag:%d\nfoxpro:%d\n",v[0],v[1],v[2]);
//	printf("total:%d\n",average);
//	}
//	return 0;
// } 



//将数组a[2][3]转化为数组 b[3][2] 
//化繁为简，无论多少伟数组，分解成一维数组先进行转换
//#include <stdio.h>
//int main()
//{
//	int a[2][3] = {{1,2,3},{4,5,6}};
//	int b[3][2],i,j;
//	printf("array a:\n");
//	for(i=0;i<=1;i++)
//	{
//		for(j=0;j<=2;j++)
//		{
//			printf("%5d",a[i][j]);
//			b[j][i] = a[i][j];	
//		}
//		printf("\n");
//	}
//	
//	printf("array b:\n");
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=1;j++)
//		{
//			printf("%5d",b[i] [j]);
//			printf("\n");
//		}
//	}
//	return 0;
// } //error







////有一个3*4的矩阵，要求编程求出其中值最大的那个元素的值，以及其所在的行号和列号
//
//#include <stdio.h>
//int main()
//{
//	int i,j,row=0,colum=0,max;
//	int a[3][4] = {{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
//	max = a[0][0];
//	for(i=0;i<=2;i++)
//	{
//		for(j=0;j<=3;j++)
//		{
//			if(a [i] [j] >max)
//			{
//				max = a[i][j]; row = i; colum = j;
//			}
//		}
//	}
//	printf("max=%d,row=%d,colum=%d\n",max,row,colum);
//	return 0;
//}





////在键盘上输入9个整数（对照九宫格的形式，输入三行，每行输入三个数）保存在二维数组中，按数组原来位置输出第一行和第一列的而所有元素 
//
//#include <stdio.h>
//int main()
//{
//	int i,j,a[3][3];
//	for(i=0;i<3;i++)//输入数组
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("a[%d][%d] = ",i,j);
//			scanf("%d",&a[i][j]);
//		}
//	 } 
//	 
//	 for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		if(i==1 || j==1)
//		{
//			printf("%-6d",a[i][j]);
//		}
//		else
//		{
//			printf("%-6c",' ');
//		}
//		printf("\n");
//	 } 
//	return 0;
//}
