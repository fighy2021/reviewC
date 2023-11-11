#include<stdio.h>
#include<stdlib.h>
int main(void){
	int s,s_1,s2,s3,s3_1,s4,s5,s6,s6_1,r1,r2;
	printf("請輸入圖形範圍(2-15) :  ");
	scanf("%d",&s);
	
	//01 正方 
	for(r1 = 0; r1 < s; r1++)
	{
		for(r2 = 0; r2 < s; r2++)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
	//02 左上三角 
	s2 = s;
	for(r1 = 0; r1 < s; r1++)
	{
		for(r2 = 0; r2 < s2; r2++)
		{
			printf(" *");
		}
		s2-=1;
		printf("\n");
	}
	printf("\n\n");
	system("pause");
	//03 左下三角 
	s3 = s;
	for(r1 = 0; r1 <= s; r1++)
	{
		for(r2 = 0; r2 < r1; r2++)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
	//04 右上三角 
	s4 = s;
	for(r1 = 0; r1 <= s; r1++)
	{
		for(r2 = 0; r2 < r1; r2++)
		{
			printf("  ");
		}
		for(r2 = 0; r2 < s4; r2++)
		{
			printf(" *");
		}
		s4-=1;
		printf("\n");
	}
	printf("\n\n");
	system("pause");
	//05 右下三角 
	s5 = s;
	for(r1 = 0; r1 <= s; r1++)
	{
		for(r2 = 0; r2 < s5; r2++)
		{
			printf("  ");
		}
		for(r2 = 0; r2 < r1; r2++)
		{
			printf(" *");
		}		
		s5-=1;
		printf("\n");
	}
	printf("\n\n");
	system("pause");
	//06 置中三角 
	s6 = s;
	s6_1 = s6;
//	s6-=1;
	for(r1 = 0; r1 <= s; r1++)
	{
		for(r2 = 0; r2 < s6; r2++)
		{
			printf(" ");
		}
		s6-=1;
		for(r2 = 0; r2 < r1; r2++)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
	return 0;
}
