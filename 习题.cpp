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
//	printf("请输入要查找的职工号：\n");
//	scanf("%d",&numb);
//	search(name,num,numb);
//
//	return 0;
//}
////输入 
//void input(char na[][20],int nu[])
//{
//	int i;
//	for(i=0;i<10;i++)
//	{
//		printf("请输入第%d名职工姓名：\n",i+1);
//		scanf("%s",&na[i]);
//		printf("请输入第%d名职工工号：\n",i+1);
//		scanf("%d",&nu[i]);
//	 } 	
//}
////排序
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
////查找
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
//			printf("查找工号的名字是：%s",na[mid]);
//			break;
//	}
//	if(x != nu[mid])
//		printf("查无此人！\n");
//}

//#include <stdio.h> 
//#include <math.h>
//#include <string.h>
//int main()
//{
//	void conver(char arr[]);
//	char arr[10];
//	printf("请输入十六进制数：\n");
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
//	printf("结果是：%d\n",sum);	
//}


//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//int main()
//{
//	void conver(char arr[]);
//	char arr[10];
//	printf("请输入十六进制的数：\n");
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
//	printf("结果是：%d",sum);
//}

//#include <stdio.h>
//int main(){
//	void exchange(int n);
//	int n;
// 	printf("please enter an integer\n");
// 	scanf("%d",&n);
// 	printf("the correct is：\n");
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
//	printf("请输入数字：\n");
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
//    printf("输入的年份为：%d",year);
//    printf("输入的月份为：%d",month);
//    printf("输入的日期为：%d",day);
//	switch(month)
//	{
//		case 12:  s+=30;      //加上11月的30天
//		case 11:  s+=31;      //加上10月的31天
//		case 10:  s+=30;      //加上 9月的30天
//		case  9:  s+=31; 
//		case  8:  s+=31; 
//		case  7:  s+=30;
//		case  6:  s+=31; 
//		case  5:  s+=30;
//		case  4:  s+=31; 
//		case  3:  s+=28;      //先按平年算，加上2月的28天
//		case  2:  s+=31;      //加上 1月的31天
//		case  1:  s+=day;     //加上当月天数
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
// 	printf("请输入年月日：\n");
// 	scanf("%d %d %d",&year,&month,&day);
// 	if(month<1 || month>12 || day<1 || day >31 ||(month==2 && day>29) ||year<0)
//	 	printf("输入有误！！\n");
//	else
//	{
// 	switch(month)
// 	{
// 		case 12:sum_day+=31;	//加上11月的30天
// 		case 11:sum_day+=30;
// 		case 10:sum_day+=31;
// 		case 9:sum_day+=30;
// 		case 8:sum_day+=31;
// 		case 7:sum_day+=31;
// 		case 6:sum_day+=30;
// 		case 5:sum_day+=31;
// 		case 4:sum_day+=30;
// 		case 3:sum_day+=31;		//先按平年算，加上2月的28天
// 		case 2:sum_day+=28;		//加上 1月的31天
// 		case 1:sum_day+=day;	//加上当月天数
//	 }
// 	if((year%4==0 && year%100 != 0 || year%400 == 0) && month>=3)
// 	sum_day++;
// 	printf("%d年%d月%d日是该年的第%d天",year,month,day,sum_day);		
//	 } 
// 	return 0;
// }
 



































