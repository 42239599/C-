////����ṹ�� 
/*
struct student
{
	int xuehao;
	char name[30];
	char xingbie;
	float chengji;
};
struct student a={001,"houge",'M',99};

a.xuehao=001;
a.name="houge";
a.xingbie='M';
a.chengji=99;
*/ 
////��һ��ѧ������Ϣ��ѧ�ţ�001����������� ���Ա�M��סַhuaguoshan)����һ���ṹ������У�Ȼ��������ѧ������Ϣ
//#include <stdio.h>
//struct student
//{
//	int xuehao;
//	char name[30];
//	char xingbie;
//	char zhuzhi[60];
//}a={001,"houge",'M',"huaguoshan"};
//
//int main()
//{
//	printf("ѧ�ţ�%d\n������%s\n�Ա�%c\nסַ��%s\n",a.xuehao ,a.name ,a.xingbie ,a.zhuzhi );
//	return 0;
// } 

//////��������ѧ����ѧ�š��������ɼ�������ɼ��ϸ��ߵ�ѧ�š������ͳɼ�����������ȣ����������ѧ����ȫ����Ϣ
//#include <stdio.h>
//struct student
//{
//	int xuehao;
//	char name[30];
//	float chengji;
//}a,b;
//
//int main()
//{
//	printf("�������һ��ѧ����ѧ�š������ͳɼ���\n");
//	scanf("%d %s %f",&a.xuehao ,a.name ,&a.chengji );
//	printf("������ڶ���ѧ����ѧ�š������ͳɼ���\n");
//	scanf("%d %s %f",&a.xuehao ,a.name ,&a.chengji );
//	printf("�ɼ��ϸ�����Ϣ���£�\n");
//	if(a.chengji >b.chengji )
//	{
//		printf("%d\t%s\t%f\t",a.xuehao ,a.name ,a.chengji );
//	 } 
//	else if(a.chengji <b.chengji )
//	{
//		printf("%d\t%s\t%f\t",b.xuehao ,b.name ,b.chengji );
//	}
//	else
//	{
//		printf("%d\t%s\t%f\t",a.xuehao ,a.name ,a.chengji );
//		printf("%d\t%s\t%f\t",b.xuehao ,b.name ,b.chengji );
//	}
//	return 0;
// } 

//////�ṹ������
///*
//struct student
//{
//	int xuehao;
//	char name[30];
//	float chengji;
//}xuesheng[3]={{001,"houboshi",99},{002,"shapaozi",90,{003,"shalebaji",98}};
//*/ 
//////������ѧ����������Ϣ��ѧ�ţ������ͳɼ������̰��ɼ��иߵ��������ѧ������Ϣ��
/////////				��Ϣ��001��houboshi,99;002,shapaozi,90;003,shalebaji,98;
//#include <stdio.h>
//struct student
//{
//	int xuehao;
//	char name[30];
//	float chengji;
//}xuesheng[3]={{001,"houboshi",99},{002,"shapaozi",90},{003,"shalebaji",98}};
//int main()
//{
//	struct student linshi;
//	int i,j;
//	for(i=0;i<2;i++)
//	{
//		for(j=i+1;j<3;j++)
//		{
//			if(xuesheng[j].chengji >xuesheng[i].chengji )
//			linshi = xuesheng[i];
//			xuesheng[i]=xuesheng[j];
//			xuesheng[j]=linshi;
//		}
//	}
//	printf("�����ĸ���ѧ����Ϣ���£�\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%d\n%s\n%f\n",xuesheng[i].xuehao,xuesheng[i].name ,xuesheng[i].chengji );
//	}
//	
//	return 0;
// } 

///////ʹ�ýṹ���������������
/////������������ѧ������Ϣ������ѧ�ţ�������2�ſγ̵ĳɼ����������ƽ������ߵ�ѧ������Ϣ 
//#include <stdio.h>
//struct student
//{
//	int xuehao;
//	char name[30];
//	float fen1;
//	float fen2;
//}sheng[5];
//int main()
//{
//	struct student max(struct student a[]);
//	struct student xueba;	
//	int i;
//	for(i=0;i<5;i++)
//	{
//		printf("�������%dѧ����ѧ�š�������2�ųɼ�:\n",i+1);
//		scanf("%d %s %f %f",&sheng[i].xuehao ,sheng[i].name ,&sheng[i].fen1 ,&sheng[i].fen2 );
//	}
//	xueba=max(sheng);
//	printf("ƽ������ߵ�ѧ������Ϣ���£�\n");
//	printf("ѧ�ţ�%d\t������%s\t2�ųɼ���%f,%f",xueba.xuehao,xueba.name,xueba.fen1,xueba.fen2);	
//	return 0;
//}
//struct student max(struct student a[])
//{
//	float pingjunfen[5];
//	int i,zuigao;
//	for(i=0;i<5;i++)
//	{
//		pingjunfen[i] = (a[i].fen1+a[i].fen2)/2;
//	}
//	for(zuigao=0,i=1;i<5;i++)
//	{
//		if(pingjunfen[zuigao]<pingjunfen[i])
//		{
//			zuigao = i;
//		}
//	}
//	return (a[zuigao]);
//}

////�ṹ�������ָ�����
//#include <stdio.h>
//struct student
//{
//	int xuehao;
//	char name[30];
//	char xingbie;
// } a={001,"houge",'M'};
//int main()
//{
//	struct student *p;
//	p=&a;
//	printf("ѧ�ţ�%d\n������%s\n�Ա�%c\n",p->xuehao ,p->name ,p->xingbie );
//	
//	return 0;
//}










