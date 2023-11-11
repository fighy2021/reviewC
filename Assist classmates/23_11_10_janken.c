#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main(void){
	srand(time(NULL));
	char u, exit = 'y';
	int iu, r = rand() % (3 - 1 + 1) + 1;
	do{
		printf("請輸入(剪刀:1，石頭:2，布:3): ");
		u = getche();
		r = rand() % (3 - 1 + 1) + 1;
		switch(r){
			case 1:
				printf("\n電腦:剪刀");
				break;
			case 2:
				printf("\n電腦:石頭");
				break;
			case 3:
				printf("\n電腦:布");
				break;
		}
		switch(u){
			case '1':
				printf("，使用者:剪刀");
				iu = 1;
				break;
			case '2':
				printf("，使用者:石頭");
				iu = 2;
				break;
			case '3':
				printf("，使用者:布");
				iu = 3;
				break;
			default:
				printf("\n");
				continue;
		}
//		1 123 0 -1 -2
//		2 123 1  0 -1
//		3 123 2  1  0
		switch(iu-r){
			case -2:
				printf("==>使用者贏\n\n");
				break;
			case -1:
				printf("==>電腦贏\n\n");
				break;
			case 0:
				printf("==>平手\n\n");
				break;
			case 1:
				printf("==>使用者贏\n\n");
				break;
			case 2:
				printf("==>電腦贏\n\n");
				break;
		}
		
				
		printf("繼續請按 y");
		exit = getche();
		printf("\n\n");					
						
	}while(exit=='y');
	

	printf("\n");
	
	system("pause");
	return 0;
}
