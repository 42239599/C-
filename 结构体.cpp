//#include <stdio.h> 
//#define n 3
//struct student
//{
//	char num[10];
//	char name[20];
//	float score[3];
//	float aver;
//};
//int main()
//{
//	void input(struct student stu[]);
//	struct student max(struct student stu[]);
//	void print(struct student stu);
//	struct student stu[n],*p=stu;
//	input(p);
//	print(max(p));
//	return 0;
//}
//void input(struct student stu[])
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		printf("�������%dλѧ����ѧ�ţ����ֺ����Ƴɼ���\n",i+1);
//		scanf("%s %s %f %f %f",stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
//	} 
//}
//struct student max(struct student stu[])
//{
//	int i,m;
//	for(i=0;i<n;i++)
//	{
//		if(stu[i].aver>stu[m].aver)
//		m=i;
//	}
//	return stu[m];
//}
//void print(struct student stud)
//{
//	printf("��߷ֳɼ����£�\n");
//	printf("ѧ��:%s\n����:%s\n���Ƴɼ�:%5.2f\t%5.2f\t%5.2f\nƽ����:%5.2f\n",stud.num ,stud.name ,stud.score [0],stud.score [1],stud.score [2],stud.aver );
////}
//
//#include <stdio.h>
//#define n 3
//struct  student
//{
//	char num[7];
//	char name[20];
//	float score[3];
//	float aver;
//};
//int main()
//{
//	void input(struct student stu[]);
//	struct student max(struct student stu[]);
//	void print(struct student stu);
//	struct student stu[n],*p=stu;
//	input(p);
//	print(max(p));
//	return 0;
//}
//void input(struct student stu[])
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		printf("�������%dλͬѧ����Ϣ��\n",i+1);
//		scanf("%s %s %f %f %f",stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
//	}
//	
//}
//struct student max(struct student stu[])
//{
//	int i,m=0;
//	for(i=0;i<n;i++)
//	{
//		if(stu[i].aver>stu[m].aver)
//		m=i;
//	}
//	return stu[m];
//}
//void print(struct student stud)
//{
//	printf("�ɼ���ߵ���Ϣ���£�\n");
//	printf("ѧ��:%s\n����:%s\n���Ƴɼ�:%5.2f\t%5.2f\t%5.2f\nƽ����:%5.2f\n",
//	stud.num ,stud.name ,stud.score [0],stud.score [1],stud.score [2],stud.aver );
//	
//}

//#include <stdio.h>
//struct student			//�����ṹ������struct student 
//{
//	int num;
//	float score;
//	struct student *next;
//};
//int main()
//{
//	struct student a,b,c,*p,*head;//����3���ṹ�������a,b,c��Ϊ����Ľ�� 
//	a.num =10086;a.score =90;//�Խ��a��num��score��Ա��ֵ 
//	b.num =10010;b.score =94;//�Խ��b��num��score��Ա��ֵ 
//	c.num =10000;c.score =96;//�Խ��c��num��score��Ա��ֵ 
//	head=&a;		//�����a����ʼ��ַ����ͷָ��head 
//	a.next =&b;		//�����b����ʼ��ַ����a����next��Ա 
//	b.next =&c;		//�����c����ʼ��ַ����b����next��Ա 
//	c.next =NULL;	//c����next��Ա�������������ַ 
//	p=head;			//pүָ��a��� 
//	do
//	{
//		printf("%d\t%5.2f\n",p->num ,p->score );//���pָ��Ľ������� 
//		p=p->next ;		//ʹpָ����һ��� 
//	}while(p!=NULL);	//�����c����p��ֵΪ	null ��ѭ����ֹ 
//	return 0;
//}

#include <stdio.h> 
struct 
{
	int num;
	char name[10];
	char sex;
	char job;
	union
	{
		int clas;
		char posision[10];
	}category;
}person[2];

int main()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("please input the date of person:\n");
		scanf("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job );
		if(person[i].job=='s')
			scanf("%s",&person[i].category.clas);
		else if(person[i].job=='t')
			scanf("%s",&person[i].category.posision);
		else
			printf("input error!");
	}
	printf("\n");
	printf("NO.	name	sex		job	class/posision\n");
	for(i=0;i<2;i++)
	{
		if(person[i].job=='s')
			printf("%-6d%-10d%-4c%-4c%-10d\n",person[i].num ,person[i].name ,person[i].sex ,person[i].job ,person[i].category.clas );
		else
			printf("%-6d%-10d%-4c%-4c%-10s\n",person[i].num ,person[i].name ,person[i].sex ,person[i].job ,person[i].category.posision);
	}
	return 0;
}




































