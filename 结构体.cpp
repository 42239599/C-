//#include <stdio.h> 
//struct
//{
//	int num;
//	char name[10];
//	char sex;
//	char job;
//	union
//	{
//		int clas;
//		char position[10];
//	}category;
//}person[2];
//int main()
//{
//	int i;
//	for(i=0;i<2;i++)
//	{
//		printf("please input the data of person:\n");
//		scanf("%d %s %c %c",&person[i].num,person[i].name,&person[i].sex,&person[i].job );
//		if(person[i].job=='s')
//			scanf("%d",&person[i].category.clas);
//		else if(person[i].job=='t')
//			scanf("%s",person[i].category.position);
//		else
//			printf("error!!\n");
//	}
//	printf("NO.	name	sex	job	class/posision\n");
//	for(i=0;i<2;i++)
//	{
//		if(person[i].job =='s')
//			printf("%d\t%s\t%c\t%c\t%d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.clas );
//		else
//			printf("%d\t%s\t%c\t%c\t%s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position);
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	enum color{red,yellow,blue,white,black};	//声明枚举类型enum color 
////	enum color i,j,k,pri;	//课本上的式子 
//	int i,j,k,pri;		//定义枚举变量i,j,k,prin 
//	int n,loop;
//	n=0;
//	for(i=red;i<=black;i++)							//外循环使i的值从red变到black 
//	{
//		for(j=red;j<=black;j++)						//中循环使j的值从red变到black 
//		{
//			if(i!=j)								//如果两球不同色 
//			{
//				for(k=red;k<=black;k++)				//内循环使k的值从red到black 
//				{
//					if((k!=i)&&(k!=j))				//如果3球颜色不同 
//					{
//						n=n+1;						//符合条件的次数加1 
//						printf("%-4d",n);			//输出当前是第几个符合条件的组合 
//						for(loop=1;loop<=3;loop++)	//先后对3个球分别处理 
//						{
//							switch(loop)			//loop的值从1变到3 
//							{
//								case 1:pri=i;break;	//loop的值为1时，把第一个球的颜色赋给Pri 
//								case 2:pri=j;break;	//loop的值为2时，把第二个球的颜色赋给Pri 
//								case 3:pri=k;break;	//loop的值为3时，把第三个球的颜色赋给Pri 
//								default:break;
//							}
//							switch(pri)				//根据球的颜色输出相应的文字 
//							{
//								case red:printf("%-10s","red");break;		//Pri的值等于枚举常量red时输出“red” 
//								case yellow:printf("%-10s","yellow");break;	//Pri的值等于枚举常量yellow时输出“yellow“ 
//								case blue:printf("%-10s","blue");break;		//Pri的值等于枚举常量blue时输出”blue“ 
//								case white:printf("%-10s","white");break;	//Pri的值等于枚举常量white时输出”white“ 
//								case black:printf("%-10s","black");break;	//Pri的值等于枚举常量black时输出“black” 
//								default:break;
//							}
//						}
//						printf("\n");
//					}
//				}
//			}
//		}
//	}
//	printf("一共有%d组符合题意。\n",n);
//	return 0;
//}
//
//#include <stdio.h> 
//int main()
//{
//	enum color{red,yellow,blue,white,black};
//	int i,j,k,pri;
//	int n=0,loop;
//	for(i=red;i<=black;i++)
//	{
//		for(j=red;j<=black;j++)
//		{
//			if(i!=j)
//			{
//				for(k=red;k<=black;k++)
//				{
//					if((i!=k) && (j!=k))
//					{
//						n++;
//						printf("%4.2d",n);
//						for(loop=1;loop<=3;loop++)
//						{
//							switch(loop)
//							{
//								case 1:pri=i;break;
//								case 2:pri=j;break;
//								case 3:pri=k;break;
//								default:break;
//							}
//							switch(pri)
//							{
//								case red:printf("%10s","red");break;
//								case yellow:printf("%10s","yellow");break;
//								case blue:printf("%10s","blue");break;
//								case white:printf("%10s","white");break;
//								case black:printf("%10s","black");break;
//							}
//						}
//						printf("\n"); 
//					}
//				}
//			}
//		}
//	}
//	printf("一共可能性有%5d种",n);
//	return 0;
//}

































































