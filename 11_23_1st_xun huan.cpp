//ѭ�����


//go to ���� IF��乹��ѭ�� 
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
