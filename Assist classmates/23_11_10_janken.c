#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main(void){
	srand(time(NULL));
	char u, exit = 'y';
	int iu, r = rand() % (3 - 1 + 1) + 1;
	do{
		printf("�п�J(�ŤM:1�A���Y:2�A��:3): ");
		u = getche();
		r = rand() % (3 - 1 + 1) + 1;
		switch(r){
			case 1:
				printf("\n�q��:�ŤM");
				break;
			case 2:
				printf("\n�q��:���Y");
				break;
			case 3:
				printf("\n�q��:��");
				break;
		}
		switch(u){
			case '1':
				printf("�A�ϥΪ�:�ŤM");
				iu = 1;
				break;
			case '2':
				printf("�A�ϥΪ�:���Y");
				iu = 2;
				break;
			case '3':
				printf("�A�ϥΪ�:��");
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
				printf("==>�ϥΪ�Ĺ\n\n");
				break;
			case -1:
				printf("==>�q��Ĺ\n\n");
				break;
			case 0:
				printf("==>����\n\n");
				break;
			case 1:
				printf("==>�ϥΪ�Ĺ\n\n");
				break;
			case 2:
				printf("==>�q��Ĺ\n\n");
				break;
		}
		
				
		printf("�~��Ы� y");
		exit = getche();
		printf("\n\n");					
						
	}while(exit=='y');
	

	printf("\n");
	
	system("pause");
	return 0;
}
