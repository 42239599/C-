//#include <stdio.h> 
//int main()
//{
//	struct stu			//�����ṹ�庯�� 
//	{
//		int student_id;
//		char name[20];
//		char sex;
//		char addr[20];
//	}a={10010,"john",'M',"beijing"};//����ṹ�����a�����г�ʼ�� 
//	printf("NO.%d\nname:%s\nsex:%c\naddr:%s\n",a.student_id,a.name,a.sex,a.addr);
//	return 0;
//}

////��������ѧ����ѧ�������ɼ�������ɼ��ߵ�ѧ����Ϣ
//#include <stdio.h> 
//int main()
//{
//	struct Stu			//�����ṹ�����struct Stu 
//	{
//		int num;
//		char name[20];
//		float score;
//	}student1,student2;//���������ṹ�����student1\student2 
//	printf("������ѧ��1��ѧ�š������ͳɼ���\n");
//	scanf("%d %s %f",&student1.num,student1.name,&student1.score);//����ѧ��1������ 
//	printf("������ѧ��2��ѧ�š������ͳɼ���\n");
//	scanf("%d %s %f",&student2.num,student2.name,&student2.score);//����ѧ��2������ 
//	if(student1.score>student2.score)
//	{
//		printf("�ɼ��ϸߵ��ǣ�%d\t%s\t%5.2f\n",student1.num,student1.name,student1.score);
//	}
//	else if(student1.score>student2.score)
//	{
//		printf("�ɼ��ϸߵ��ǣ�%d\t%s\t%5.2f\n",student2.num,student2.name,student2.score);
//	}
//	else
//	{
//		printf("���߳ɼ���ȣ�\n");
//		printf("%d\t%s\t%5.2f\n",student1.num,student1.name,student1.score);
//		printf("%d\t%s\t%5.2f\n",student2.num,student2.name,student2.score);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct person			//�����ṹ������struct person 
//{
//	char name[10];		//��ѡ������ 
//	int count;			//��ѡ�˵�Ʊ�� 
//}leader[3]={"li",0,"chen",0,"sun",0};//����ṹ�����鲢��ʼ�� 
//int main()
//{
//	char name_leader[10];	//�����ַ����� 
//	int i,j;
//	printf("���������� ��\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%s",name_leader);	//������ѡ�ĺ�ѡ������ 
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(leader[j].name,name_leader)==0)
//			leader[j].count ++;
//		}
//	}
//	printf("ͶƱ������£�\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%5s:%d\n",leader[i].name ,leader[i].count);
//	}
//	return 0;
//}

//#include <string.h>
//#include <stdio.h> 
//struct person
//{
//	char name[20];
//	int count;
//}leader[3]={"chen",0,"sun",0,"li",0};
//int main()
//{
//	int i,j;
//	char leader_name[20];
//	printf("���������֣�\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%s",leader_name);
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(leader_name,leader[j].name)==0)
//			leader[j].count++;
//		}
//	}
//	printf("��Ʊ��������£�\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%5s:%d\n",leader[i].name ,leader[i].count);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct person
//{
//	char name[20];
//	int count;
//}leader[3]={"li",0,"chen",0,"sun",0};
//int main()
//{
//	int i,j;
//	char leader_name[20];
//	printf("���������֣�\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%s",leader_name);
//		for(j=0;j<3;j++)
//		{
//			if(strcmp(leader_name,leader[j] .name)== 0)
//			leader[j].count ++;
//		}
//	}
//	printf("������£�\n");
//	for(i=0;i<3;i++)
//	{
//		printf("%5s:%d\n",leader[i].name,leader[i].count);
//	}
//	
//	return 0;
//}


////��n��ѧ������Ϣ������ѧ�ţ��������ɼ���Ҫ���ճɼ��ĸߵ��������
//#include <stdio.h> 
//struct stu				//�����ṹ������struct stu 
//{
//	char num[10];
//	char name[20];
//	float score;
//}student[100];			//����ṹ������ 
//int main()
//{
//	int n,i,j;
//	printf("������ѧ��������\n");
//	scanf("%d",&n);		//ȷ��ѧ������ 
//	//����ѧ������Ϣ 
//	for(i=0;i<n;i++)
//	{
//		printf("��%dλѧ����ѧ�š������ͳɼ��ֱ��ǣ�\n",i+1);
//		scanf("%s %s %f",&student[i].num,student[i].name ,&student[i].score);
//	}
//	printf("�����ѧ�š������ͳɼ��ֱ����£�\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%s\t%s\t%5.2f\n",student[i].num ,student[i].name ,student[i].score ); 
//	}
//	printf("\n\n");
//	
//	struct stu t;		//����ṹ�����������������ʱ����ʱ���� 
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(student[i].score<student[j].score)	//���гɼ��ıȽ� 
//			{
//				t=student[i];
//				student[i]=student[j];
//				student[j]=t;
//			}
//		}	
//	}
//	printf("�����Ľ�����£�\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%s\t%s\t%5.2f\n",student[i].num ,student[i].name ,student[i].score ); 	
//	}
//	return 0;
//}

////ָ��ṹ�������ָ�� 
////ͨ��ָ��ṹ�������ָ���������ṹ������г�Ա����Ϣ
//#include <stdio.h> 
//#include <string.h>
//struct stu
//{
//	char num[20];
//	char name[20];
//	char sex;
//	float score;
//};
//int main()
//{
//	struct stu student;	//����struct stu ���͵ı���student 
//	struct stu *p;		//����ָ��struct stu �������ݵ�ָ�����p 
//	p=&student;			//pָ��student 
//	strcpy(student.num ,"007");	//�Խṹ���Ա���и�ֵ�� 
//	strcpy(student.name ,"liming");//���ַ������ƺ����� student.name��ֵ 
//	student.sex ='M';
//	student.score =98.5;
//	printf("%s\t%s\t%c\t%5.2f\n",student.num ,student.name,student.sex ,student.score );
//	printf("%s\t%s\t%c\t%5.2f\n",p->num,p->name,(*p).sex,(*p).score);
//	
//	return 0;
//}




































