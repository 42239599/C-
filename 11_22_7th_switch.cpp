//switch���

//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("input integer number:  ");
//	scanf("%d",&a);
//	switch(a)
//	{
//		case 1:printf("monday\n");break;
//		case 2:printf("tuesday\n");break;
//		case 3:printf("wednesday\n");break;
//		case 4:printf("thursday\n");break;
//		case 5:printf("friday\n");break;
//		case 6:printf("saturday\n");break;
//		case 7:printf("sunday\n");break;
//		default :printf("error\n");
//	}
//	return 0;
// } 


//������
//#include <stdio.h>
//int main()
//{
//	double a,b;
//	char c;
//	printf("please input numder: a+(-,*,/) b\n ");
//	scanf("%lf%c%lf",&a,&c,&b);
//	
//	switch(c)
//	{
//		case '+':printf("%lf\n",a+b);
//		break;
//		case '-':printf("%lf\n",a-b);
//		break;
//		case '*':printf("%lf\n",a*b);
//		break;
//		case '/':printf("%lf\n",a/b);
//		break;
//		default :printf("error");
//		
//	}
//	
//	return 0;
// } 



//���������������������С
//#include <stdio.h>
//int main()
//{
//	int a,b,c,max,min;
//	printf("please input three numbers: ");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//	{
//		max = a ,min = b;
//	}
//	else
//	{
//		max = b , min = a;
//	}
//	if(max < c)
//	{
//		max = c;
//	}
//	else
//	if(min > c)
//	{
//		min = c;
//	}
//	printf("max=%d	min=%d",max,min);
//	return 0;
// } 



//������ݣ��ж��Ƿ�Ϊ����
//�ܱ�4���������ܱ�100����,�ܱ�400������

//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("please input a year: \n");
//	scanf("%d",&year);
//	if(year % 4 == 0)
//	{
//		if(year % 100 == 0)
//		{
//			if(year % 400 == 0)
//			{
//				printf("��������");
//			}
//			else
//			{
//				printf("��������");
//			}
//		}
//		else
//		{
//			printf("������");
//		}
//	
//	}
//	else
//	{
//		printf("��������");	
//	}
//	
//
//	return 0;
//}



//#include <stdio.h>
//int main()
// {
// 	int a;
// 	printf
//	 ("please input a year: \n");
// 	scanf("%d",&a);
// 	if(a%4 == 0 && a%400 == 0)
//	{
//		printf("������");
//	}
//	
// 	else 
//	if(a%100==0)
// 	{
// 		printf("��������\n");
//	 }
//
// 	return 0;
// }
// 


//���乫˾���û������˷�
//�����˷�P��������W������ΪS���ۿ�ΪD�����˷Ѽ��㹫ʽ f=p*w*s*(1-d)
//#include <stdio.h>
//int main()
//{
//	double p,w,s,f;
//	printf("�����룺 \n");
//	scanf("%lf%lf%lf",&p,&w,&s);
//	
//		if(s<250)
//			{
//			printf("f=%lf",p*w*s*(1-0));	
//			}
//			
//		else if((s>250 || s==250) && s<500 )
//			{	
//			printf("f=%lf",p*w*s*(1-0.02));
//			}
//			
//		else if((s>500 || s==500) && s<1000 )
//			{
//			printf("f=%lf",p*w*s*(1-0.05));
//			}
//			
//		else if((s>1000 || s==1000) && s<2000 )
//			{
//			printf("f=%lf",p*w*s*(1-0.08));
//			}
//			
//		else if((s>2000 || s==2000) && s<3000 )
//			{
//			printf("f=%lf",p*w*s*(1-0.1));
//			}
//			
//		else if(s>3000 || s==3000)
//			{
//			printf("f=%lf",p*w*s*(1-0.15));
//			}
//
//	return 0;
// } 



