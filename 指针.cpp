//#include <stdio.h> 
//int main()
//{
//	
//	void average(float (*p)[5]);
//	void search(float (*p)[5]);
//	void find_out(float (*p)[5]);
//	float score[4][5];
//	int i,j;
//	for(i=0;i<4;i++)
//	{
//		printf("�������%d��ѧ���ĳɼ���\n",i+1);
//		for(j=0;j<5;j++)
//		{
//			scanf("%f",&score[i][j]);
//		}
//		printf("\n");
//	}
//
//	average(score);
//	search(score); 
//	find_out(score);
//	
//	return 0;
//}
//void average(float (*p)[5])
//{
//	float sum=0,aver;
//	int i,j;
//	for(i=0;i<4;i++)
//	{
//		for(j=0;j<1;j++)
//		{
//			sum+=*(*(p+i)+j);
//		}
//		
//	}
//	aver=sum/4;
//	printf("��һ�ſγɼ�ƽ�����ǣ�%5.2f\n",aver);
//	printf("\n\n");
//}
//void search(float (*p)[5])
//{
//	int i,j,count;
//	float aver,sum=0,a[5];
//	for(i=0;i<4;i++)
//	{
//		int k=0;
//		aver=0;
//		count=0;
//		sum=0;
//		for(j=0;j<5;j++)
//		{
//			a[k]=*(*(p+i)+j);
//			if(*(*(p+i)+j)<60)
//			count++;
//			k++;	
//		}
//		
//		if(count>=2)
//		{
//			printf("���Ϊ%d��ѧ����2�����ϵĳɼ������񣬸���ɼ����£�\n",i+1);
//			for(k=0;k<5;k++)
//			{
//				printf("%8.2f",a[k]);
//				sum+=a[k]; 
//			}
//			printf("\n");
//			aver=sum/5;
//			printf("ƽ���ɼ��ǣ�%6.2f\n",aver);
//		}	
//	}
//	printf("\n\n");
//}
//
//void find_out(float (*p)[5])
//{
//	int i,j,mark;
//	float aver,sum=0;
//	for(i=0;i<4;i++)
//	{
//		aver=0;
//		sum=0;
//		mark=0;
//		for(j=0;j<5;j++)
//		{
//			sum+=*(*(p+i)+j);
//			if(*(*(p+i)+j)>85)
//			mark++;
//		}
//		aver=sum/5;
//		if(aver>90 || mark==5)
//		{
//			printf("���Ϊ%d��ͬѧ��ƽ���ɼ���90���ϻ���ȫ���γ̳ɼ���85�����ϣ�ֵ�ñ��",i+1);
//		}	
//		printf("\n");
//	}
//}
//
//#include <stdio.h>
//int main()
//{
//	void average(float (*p)[5]);
//	void search(float (*p)[5]);
//	void find(float (*p)[5]);
//	int i,j;
//	float score[4][5];
//	for(i=0;i<4;i++)
//	{
//		printf("�������%d��ѧ���ĳɼ���\n",i+1);	
//		for(j=0;j<5;j++)
//		{
//			scanf("%f",&score[i][j]);
//		}
//		printf("\n");
//	}
//	average(score);
//	search(score);
//	find(score);
//	return 0;
//}
//void average(float (*p)[5])
//{
//	int i,j;
//	float sum=0,aver;
//	for(i=0;i<4;i++)
//	{
//		for(j=0;j<1;j++)
//		{
//			sum+=*(*(p+i)+j);
//		}
//	}
//	aver=sum/4;
//	printf("��һ�ſγ̵�ƽ�����ǣ�%5.2f\n\n",aver);
//}
//
//void search(float (*p)[5])
//{
//	int i,j,count;
//	float aver,sum=0;
//	for(i=0;i<4;i++)
//	{
//		sum=0;
//		aver=0;
//		count=0;
//		for(j=0;j<5;j++)
//		{
//			if(*(*(p+i)+j)<60)
//			count++;
//			sum+=*(*(p+i)+j);
//		}
//		if(count>=2)
//		{
//			aver=sum/5;
//			printf("ѧ��Ϊ%d��ͬѧ���������ųɼ���������ƽ����Ϊ��%5.2f\n",i+1,aver);
//		}
//	}
//	printf("\n\n");
//}
//
//void find(float (*p)[5])
//{
//	int i,j,count;
//	float sum=0,aver;
//	for(i=0;i<4;i++)
//	{
//		sum=0;
//		aver=0;
//		count=0;
//		for(j=0;j<5;j++)
//		{
//			sum+=*(*(p+i)+j);
//			if(*(*(p+i)+j)>85)
//			count++;
//		}
//		aver=sum/5;
//		if(aver>90)
//		printf("ѧ��Ϊ%d��ͬѧƽ������90���ϣ�ֵ�ñ����\n",i+1);
//		if(count==5)
//		printf("ѧ��Ϊ%d��ͬѧ5�ſ�Ŀ����85���ϣ�ֵ�ñ����\n",i+1);
//	}
//	
//}

//#include <stdio.h>
//int main()
//{
//	void trans(int *p);
//	int year,*p;
//	p=&year;
//	printf("������Ҫת�����·ݣ����������֣���\n");
//	scanf("%d",&year);
//	trans(p);
//	return 0;
//}
//void trans(int *p)
//{
//	switch(*p)
//	{
//		case 1:printf("January\n");
//			break;
//		case 2:printf("February\n");
//			break;
//		case 3:printf("March\n");
//			break;
//		case 4:printf("April\n");
//			break;
//		case 5:printf("May\n");
//			break;
//		case 6:printf("June\n");
//			break;
//		case 7:printf("July\n");
//			break;
//		case 8:printf("August\n");
//			break;
//		case 9:printf("September\n");
//			break;
//		case 10:printf("October\n");
//			break;
//		case 11:printf("November\n");
//			break;
//		case 12:printf("December\n");
//			break;
//		default:printf("��������ȷ���·ݣ���\n");
//	}
//}
//
//#include <stdio.h>
//int main()
//{
//	void trans(int year);
//	int year;
//	printf("�������·ݣ�\n");
//	scanf("%d",&year);
//	trans(year);
//	return 0;
//}
//void trans(int year)
//{
//	switch(year)
//	{
//		case 1:printf("January\n");
//			break;
//		case 2:printf("February\n");
//			break;
//		case 3:printf("March\n");
//			break;
//		case 4:printf("April\n");
//			break;
//		case 5:printf("May\n");
//			break;
//		case 6:printf("June\n");
//			break;
//		case 7:printf("July\n");
//			break;
//		case 8:printf("August\n");
//			break;
//		case 9:printf("September\n");
//			break;
//		case 10:printf("October\n");
//			break;
//		case 11:printf("November\n");
//			break;
//		case 12:printf("December\n");
//			break;
//		default:printf("��������ȷ���·ݣ���\n");
//	}
//}






























































