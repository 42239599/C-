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
//	enum color{red,yellow,blue,white,black};	//����ö������enum color 
////	enum color i,j,k,pri;	//�α��ϵ�ʽ�� 
//	int i,j,k,pri;		//����ö�ٱ���i,j,k,prin 
//	int n,loop;
//	n=0;
//	for(i=red;i<=black;i++)							//��ѭ��ʹi��ֵ��red�䵽black 
//	{
//		for(j=red;j<=black;j++)						//��ѭ��ʹj��ֵ��red�䵽black 
//		{
//			if(i!=j)								//�������ͬɫ 
//			{
//				for(k=red;k<=black;k++)				//��ѭ��ʹk��ֵ��red��black 
//				{
//					if((k!=i)&&(k!=j))				//���3����ɫ��ͬ 
//					{
//						n=n+1;						//���������Ĵ�����1 
//						printf("%-4d",n);			//�����ǰ�ǵڼ���������������� 
//						for(loop=1;loop<=3;loop++)	//�Ⱥ��3����ֱ��� 
//						{
//							switch(loop)			//loop��ֵ��1�䵽3 
//							{
//								case 1:pri=i;break;	//loop��ֵΪ1ʱ���ѵ�һ�������ɫ����Pri 
//								case 2:pri=j;break;	//loop��ֵΪ2ʱ���ѵڶ��������ɫ����Pri 
//								case 3:pri=k;break;	//loop��ֵΪ3ʱ���ѵ����������ɫ����Pri 
//								default:break;
//							}
//							switch(pri)				//���������ɫ�����Ӧ������ 
//							{
//								case red:printf("%-10s","red");break;		//Pri��ֵ����ö�ٳ���redʱ�����red�� 
//								case yellow:printf("%-10s","yellow");break;	//Pri��ֵ����ö�ٳ���yellowʱ�����yellow�� 
//								case blue:printf("%-10s","blue");break;		//Pri��ֵ����ö�ٳ���blueʱ�����blue�� 
//								case white:printf("%-10s","white");break;	//Pri��ֵ����ö�ٳ���whiteʱ�����white�� 
//								case black:printf("%-10s","black");break;	//Pri��ֵ����ö�ٳ���blackʱ�����black�� 
//								default:break;
//							}
//						}
//						printf("\n");
//					}
//				}
//			}
//		}
//	}
//	printf("һ����%d��������⡣\n",n);
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
//	printf("һ����������%5d��",n);
//	return 0;
//}

































































