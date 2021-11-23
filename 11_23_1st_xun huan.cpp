//循环语句


//go to 语句和 IF语句构成循环 
//#include <stdio.h>
//int main()
//{
//	int i,sum=0;
//	i=1;
//	
//	loop: if(i<=100)
//	{
//		sum=sum+i;
//		i++;
//		goto loop;
//	 } 
//	 printf("%d\n",sum);
//	return 0;
// } 

#include <stdio.h>
int main()
{
	int i , sum = 0;
	i = 1;
	while(i<=100)
	{
		sum = sum + i;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}
