//#include <stdio.h> 
//#include <string.h>
//int main()
//{
//	void input(char na[][20],int nu[]);
//	void sorts(char na[][20],int nu[]);
//	void search(char na[][20],int nu[],int x);
//	char name[10][20];
//	int num[10],i,numb;
//	input(name,num);
//	sorts(name,num);
//	for(i=0;i<10;i++)
//	{
//		printf("%8s",name[i]);
//		printf("%d\n",num[i]);
//	}
//	printf("������Ҫ���ҵ�ְ���ţ�\n");
//	scanf("%d",&numb);
//	search(name,num,numb);
//
//	return 0;
//}
////���� 
//void input(char na[][20],int nu[])
//{
//	int i;
//	for(i=0;i<10;i++)
//	{
//		printf("�������%d��ְ��������\n",i+1);
//		scanf("%s",&na[i]);
//		printf("�������%d��ְ�����ţ�\n",i+1);
//		scanf("%d",&nu[i]);
//	 } 	
//}
////����
//void sorts(char na[][20],int nu[])
//{
//	int i,j,temp;
//	char tm[10];
//	for(j=0;j<9;j++)
//	{
//		for(i=0;i<9-j;i++)
//		{
//			if(nu[i]>nu[i+1])
//			{
//				temp=nu[i];
//				nu[i]=nu[i+1];
//				nu[i+1]=temp;
//				strcpy(tm,na[i]);
//				strcpy(na[i],na[i+1]);
//				strcpy(na[i+1],tm);
//			}
//		}
//	}
// } 
////����
//void search(char na[][20],int nu[],int x) 
//{
//	int mid,high,low;
//	low=0;
//	high=9;
//	while (low<=high)
//	{
//		mid=(low+high)/2;
//		if(x<nu[mid])
//			high=mid-1;
//		else if(x>nu[mid])
//			low=mid+1;
//		else if(x == nu[mid])
//			printf("���ҹ��ŵ������ǣ�%s",na[mid]);
//			break;
//	}
//	if(x != nu[mid])
//		printf("���޴��ˣ�\n");
//}

//#include <stdio.h> 
//#include <math.h>
//#include <string.h>
//int main()
//{
//	void conver(char arr[]);
//	char arr[10];
//	printf("������ʮ����������\n");
//	gets(arr);
//	conver(arr);
//	return 0;
//}
//void conver(char arr[])
//{
//	int i,j=0,n=strlen(arr),sum=0;
//	int num[100];
//	for(i=0;i<n;i++)
//	{
//		switch(arr[i])
//		{
//			case 'A':num[j++]=10;
//				break;
//			case 'B':num[j++]=11;
//				break;
//			case 'C':num[j++]=12;
//				break; 
//			case 'D':num[j++]=13;
//				break;
//			case 'E':num[j++]=14;
//				break;
//			case 'F':num[j++]=15;
//				break;
//			default:num[j++]=(int)(arr[i]-'0');
//				break;
//		}	
//	}
//	for(i=n-1;i>=0;i--)
//	{
//		sum+=num[i]*pow(16,n-1-i);
//	}
//	printf("����ǣ�%d\n",sum);	
//}


//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//int main()
//{
//	void conver(char arr[]);
//	char arr[10];
//	printf("������ʮ�����Ƶ�����\n");
//	gets(arr);
//	conver(arr);
//	return 0;
//}
//void conver(char arr[])
//{
//	int i,j=0,n=strlen(arr);
//	int num[100],sum=0;
//	for(i=0;i<n;i++)
//	{
//		switch(arr[i])
//		{
//			case 'A':num[j++]=10;
//				break;
//			case 'B':num[j++]=11;
//				break;
//			case 'C':num[j++]=12;
//				break;
//			case 'D':num[j++]=13;
//				break;
//			case 'E':num[j++]=14;
//				break;
//			case 'F':num[j++]=15;
//				break;
//			default:num[j++]=(int)(arr[i]-'0');
//				break;
//		}
//	}
//	for(i=n-1;i>=0;i--)
//	{
//		sum+=num[i]*pow(16,n-1-i);
//	}
//	printf("����ǣ�%d",sum);
//}

//#include <stdio.h>
//int main(){
//	void exchange(int n);
//	int n;
// 	printf("please enter an integer\n");
// 	scanf("%d",&n);
// 	printf("the correct is��\n");
// 	if(n<0){               
// 		putchar('-');
// 		n=-n;
// 	}              
// 	exchange(n);            
// 	printf("\n");
//}
//	void exchange(int n){
// 	int i;
// 	if((i=n/10)!=0) exchange(i);
// 	putchar(n%10+'0');
//	}

//#include <stdio.h>
//int main()
//{
//	void exchange(int n);
//	int n;
//	printf("���������֣�\n");
//	scanf("%d",&n);
//	if(n<0)
//	{
//		putchar('-');
//		n=-n;
//	}
//	exchange(n);
//	return 0;
//}
//void exchange(int n)
//{
//	int i;
//	if((i=n/10)!= 0)
//	exchange(i);
//	putchar(n%10 +'0');
//}


//#include <stdio.h>
//int main()
//{
//	int  year, month, day;
//	int  s=0;
//	scanf("%d%d%d", &year,&month,&day);
//    printf("��������Ϊ��%d",year);
//    printf("������·�Ϊ��%d",month);
//    printf("���������Ϊ��%d",day);
//	switch(month)
//	{
//		case 12:  s+=30;      //����11�µ�30��
//		case 11:  s+=31;      //����10�µ�31��
//		case 10:  s+=30;      //���� 9�µ�30��
//		case  9:  s+=31; 
//		case  8:  s+=31; 
//		case  7:  s+=30;
//		case  6:  s+=31; 
//		case  5:  s+=30;
//		case  4:  s+=31; 
//		case  3:  s+=28;      //�Ȱ�ƽ���㣬����2�µ�28��
//		case  2:  s+=31;      //���� 1�µ�31��
//		case  1:  s+=day;     //���ϵ�������
//	}
//	if((year%4==0 && year%100!=0 || year%400==0) && month>=3) 
//         s++;
//	printf("%d\n",s);
//	return 0;
//}
//#include <stdio.h>
//int main()
// {
// 	int year,month,day,sum_day=0;
// 	printf("�����������գ�\n");
// 	scanf("%d %d %d",&year,&month,&day);
// 	if(month<1 || month>12 || day<1 || day >31 ||(month==2 && day>29) ||year<0)
//	 	printf("�������󣡣�\n");
//	else
//	{
// 	switch(month)
// 	{
// 		case 12:sum_day+=31;	//����11�µ�30��
// 		case 11:sum_day+=30;
// 		case 10:sum_day+=31;
// 		case 9:sum_day+=30;
// 		case 8:sum_day+=31;
// 		case 7:sum_day+=31;
// 		case 6:sum_day+=30;
// 		case 5:sum_day+=31;
// 		case 4:sum_day+=30;
// 		case 3:sum_day+=31;		//�Ȱ�ƽ���㣬����2�µ�28��
// 		case 2:sum_day+=28;		//���� 1�µ�31��
// 		case 1:sum_day+=day;	//���ϵ�������
//	 }
// 	if((year%4==0 && year%100 != 0 || year%400 == 0) && month>=3)
// 	sum_day++;
// 	printf("%d��%d��%d���Ǹ���ĵ�%d��",year,month,day,sum_day);		
//	 } 
// 	return 0;
// }
 



































