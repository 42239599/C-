
//输入a 和 b 两个整数，按先大后小的顺序输出a 和 b  

// 
//#include <stdio.h>
//int main()
//{
//	int *p1,*p2,*p,a,b;
//	scanf("%d %d",&a,&b);
//	p1 = &a ;
//	p2 = &b ;
//	if( a < b)
//	{
//		p = p1 ;
//		p1 = p2 ;
//		p2 = p ;
//	}//此后，p1指向b ,p2指向a
//	
//	printf("a = %d,b = %d",a,b);
//	printf("max = %d,min = %d\n",*p1,*p2); 
//	return 0;
//}


//#include <stdio.h>
//
//void swap (int *p1,int *p2);
//int main()
//{
//	int a , b;
//	int *p1,*p2;
//	
//	scanf("%d %d",&a,&b);
//	
//	p1 = &a;
//	p2 = &b;
//	
//	if(a<b)
//	{
//		swap(p1,p2);
//	 } 
//	 else
//	 printf("\n%d > %d",a,b);
//	return 0;
//}
//
//void swap(int *p1,int *p2)
//{
//	int temp;
//	
//	printf("i am swapping.........\n");
//	printf("please wait  ");
//	
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}



////将三个数用指针的方法排序大小
//
//#include <stdio.h>
//int main()
//{
//	void exchange(int *q1, int *q2, int *q3);
//	int a,b,c,*p1,*p2,*p3;
//	scanf("%d %d %d",&a,&b,&c);
//	
//	p1= &a;
//	p2= &b;
//	p3= &c;
//	
//	exchange(p1,p2,p3);
//	printf("%d %d %d ",a,b,c);
//	return 0;
// } 
// 
//void exchange(int *q1, int *q2, int *q3)
// {
// 	void swap(int *pt1, int *pt2);
// 	if(*q1 > *q2)
// 	{
// 		swap(q1,q2);
//	 }
//	 if(*q1 > *q3)
//	 {
//	 	swap(q1,q3);
//	 }
//	 if(*q2 > *q3)
//	 {
//	 	swap(q2,q3);
//	 }
// }
//
//void swap(int *pt1, int *pt2)
//{
//	int temp;
//	temp = *pt1;
//	*pt1 = *pt2;
//	*pt2 = temp;
//}































