

//#include <stdio.h>
//int main()
//{
//	int a[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
//	
//	int (*p)[4];

//	int i,j;
//	p = a ;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			printf("%2d ",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//	return 0;
// } 

////通过输入指定行数和列数打印出二维数组对应任一行任一列元素的值
//#include <stdio.h>
//int main()
//{
//	int a[3][4] = {1,3,5,7,9,11,13,17,19,21,23};
//	int (*p)[4] ,i,j;
//	
//	p = a ;
//	
//	printf(" i = ");
//	scanf("%d",&i);
//	while(i>2 || i<0)
//	{
//		printf(" i = ");
//		scanf("%d",&i);
//	}
//	printf(" j = ");
//	scanf("%d",&j);
//	while(j>3 || j<0)
//	{
//		printf(" j = ");
//		scanf("%d",&j);
//	}
//	printf("a[%d, %d] = %d\n",i,j,*(*(p+i)+j));
//	
//	return 0;
// } 







































