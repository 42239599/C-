//#include <stdio.h> 
//#include <string.h>
//struct person
//{
//	char name[20];
//	int count;
// } leader[3]={"li",0,"chen",0,"sun",0};
//int main()
//{
//	int i,j;
//	char name_leader[20];
//	printf("������ͶƱ�����\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%s",name_leader);
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(leader[j].name ,name_leader)==0)
//			leader[j].count ++;
//		}
//	}
//	printf("��Ʊ���£�\n");
//	for(j=0;j<3;j++)
//	{
//		printf("%5s:%d\n",leader[j].name ,leader[j].count );
//	}
//	return 0;
//}

//#include <stdio.h>
//struct student
//{
//	char num[10];
//	char name[20];
//	float score;
//}stu[100];
//int main()
//{
//	int i,j,k,n;
//	struct student t;
//	printf("������ѧ��������\n");
//	scanf("%d",&n);
//	printf("������ѧ����Ϣ��\n");
//	for(i=0;i<n;i++)
//	{
//		printf("��%dλѧ����ѧ�š����ֺͳɼ���\n",i+1);
//		scanf("%s %s %f",stu[i].num ,stu[i].name ,&stu[i].score );
//	}
//	for(i=0;i<n-1;i++)
//	{
//		k=i;
//		for(j=i+1;j<n;j++)
//		{
//			if(stu[i].score<stu[j].score)	
//			{
//				k=j;
//				t=stu[i];
//				stu[i] =stu[k];
//				stu[k] =t; 
//			}
//		}
//	}
//	printf("������£�\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%s\t%s\t%5.2f\n",stu[i].num ,stu[i].name ,stu[i].score );
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct stu
//{
//	char num[5];
//	char name[10];
//	float score;
//}student;
//int main()
//{
//	struct stu *p;
//	p=&student;
//	strcpy(student.num,"006");
//	strcpy(student.name ,"lihua");
//	student.score =98;
//	printf("%s\t%s\t%5.2f\n",student.num ,student.name ,student.score );
//	printf("%s\t%s\t%5.2f\n",p->num ,p->name ,(*p).score);
//	return 0;
//}

////ָ��ṹ�������ָ��
////��3��ѧ������Ϣ�����ڽṹ�������У�Ҫ�����ȫ��ѧ������Ϣ
//#include <stdio.h> 
//struct stu		//�����ṹ������struct stu 
//{
//	char num[9];
//	char name[20];
//	char sex;
//	int age;
//}//����ṹ����������г�ʼ�� 
//student[3]={{"006","liming",'M',23},{"007","sudaqiang",'M',75},{"009","lihua",'M',18}};
//int main()
//{
//	struct stu *p;		//����ָ��struct stu�ṹ�������ָ����� 
//	p=student;
//	for(;p<student+3;p++)
//	{
//		printf("%s\t%s\t%c\t%d\n",p->num ,p->name ,p->sex ,p->age );
//	}
//	return 0;
//}

////�ýṹ������ͽṹ�������ָ������������
////��n���ṹ��������ں�ѧ��ѧ�ţ�������3�ſγ̳ɼ���Ҫ�����ƽ���ɼ���ߵ�ѧ����Ϣ 
//#include <stdio.h> 
//#define n 3		//ѧ����Ϊ3 
//struct student	//�����ṹ������struct student 
//{
//	char num[6];	//ѧ�� 
//	char name[10];	//���� 
//	float score[3];	//	���ųɼ� 
//	float aver;		//ƽ���� 
//};
//int main()
//{
//	void input(struct student stu[]);		//�������� 
//	struct student max(struct student stu[]);//�������� 
//	void print(struct student stu);			//�������� 
//	struct student stu[n],*p=stu;	//����ṹ�������ָ�� 
//	input(p);		//����input���� 
//	print(max(p));	//����print��������max�����ķ���ֵ��Ϊʵ�� 
//	return 0;
//}
//void input(struct student stu[])	//����input���� 
//{
//	int i;
//	printf("�������ѧ������Ϣ��ѧ�š����������ųɼ���\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%s %s %f %f %f",stu[i].num,stu[i].name,
//		&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);//�������� 
//		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;//��ƽ���ɼ� 
//	}
//}
//struct student max(struct student stu[])		//����max���� 
//{
//	int i,m=0;			//��m����ųɼ���ߵ�ѧ���������е���� 
//	for(i=0;i<n;i++)
//	{
//		if(stu[i].aver>stu[m].aver)	//�ҳ�ƽ���ɼ���ߵ�ѧ���������е���� 
//		m=i;
//	}
//	return stu[m];	//���ذ���������Ϣ�Ľṹ��Ԫ�� 
//}
//void print(struct student stud)	//����print���� 
//{
//	printf("\n�ɼ���ߵ�ѧ���ǣ�\n");
//	printf("ѧ��:%s\n����:%s\n���ųɼ�:%5.2f\t%5.2f\t%5.2f\nƽ����:%5.2f\n",
//	stud.num ,stud.name ,stud.score[0],stud.score [1],stud.score [2],stud.aver);
////}
//#include <stdio.h> 
//#define n 3
//struct student
//{
//	char num[5];
//	char name[10];
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
//		printf("�������%dλѧ��ѧ�š����ֺ����Ƴɼ���\n",i+1);
//		scanf("%s %s %f %f %f",stu[i].num,stu[i].name,
//		&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
//	}
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
//	printf("�ɼ���ߵ�ͬѧ��Ϣ���£�\n");
//	printf("\nѧ�ţ�%s\n������%s\n���Ƴɼ���%5.2f\t%5.2f\t%5.2f\tƽ���֣�%5.2f\n",
//	stud.num ,stud.name ,stud.score [0],stud.score [1],stud.score [2],stud.aver);
//}

//#include <stdio.h>
//#define n 3
//struct student
//{
//	char num[6];
//	char name[20];
//	float score[3];
//	float aver;
//}stu[n];
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
//		printf("��%dλѧ����ѧ�š����ֺ����Ƶĳɼ���\n",i+1);
//		scanf("%s %s %f %f %f",stu[i].num ,stu[i].name ,&stu[i].score [0],&stu[i].score [1],&stu[i].score [2]);
//		stu[i].aver =(stu[i].score [0]+stu[i].score [1]+stu[i].score [2])/3.0;
//	}
//}
//struct student max(struct student stu[])
//{
//	int i,m=0;
//	for(i=0;i<n;i++)
//	{
//		if(stu[i].aver >stu[m].aver )
//		m=i;
//	}
//	return stu[m];
//}
//void print(struct student stud)
//{
//	printf("�ɼ���ߵ���Ϣ���£�\n");
//	printf("\nѧ��:%s\n����:%s\n���Ƴɼ�:%5.2f\t%5.2f\t%5.2f\nƽ����:%5.2f\n",stud.num ,stud.name ,stud.score [0],stud.score [1],stud.score [2],stud.aver );
//}

#include <stdio.h>
struct student
{
	int num;
	float score;
	struct student *next;
};
int main()
{
	struct student a,b,c,*p,*head;
	a.num =10086;a.score =94.5;
	b.num =10000;b.score =97.6;
	c.num =10010;c.score =96.3;
	head=&a;
	a.next =&b;
	b.next =&c;
	a.next =NULL;
	p=head;
	do
	{
		printf("%d %5.1f\n",p->num ,p->score );
		p=p->next ;
	}while(p!=NULL);
	
	return 0;
}


























