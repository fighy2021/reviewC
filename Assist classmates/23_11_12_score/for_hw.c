#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main(void){
	int j;
	int temp,rank[10],
		score[10][6] = { //�� (0) �^ (1) �� (2) �`�� (3) �Ǹ� (4) �ƦW (5)  �Ƨ�
		{  80,  80,  80},
		{  90,  90,  90},
		{  90, 100, 100},
		{  80,  80,  90},
		{  80,  70,  70},
		{  80,  80,  80},
		{  90,  90,  90},
		{  90, 100, 100},
		{  80,  80,  90},
		{  70,  70,  90}
	};
	float Average[10];
	
//	���հ� 
	
	for(int i = 0; i <= 9; i++ ){
//		printf("%6d\t", ++i);
		score[i][4] = ++i;
		i--;  
		for(int j = 0; j <= 2; j++ ){
//			printf("%3d\t", score[i][j]);
			score[i][3] += score[i][j];
			Average[i] = score[i][3];
			Average[i] = Average[i]/3;
		}
//		printf("%5d\t", score[i][3]);
//		printf("%7.2f\t", Average[i]);
//		printf("%5d\t", ++score[i][4]);
		++score[i][4];
//		printf("\n");
	};
//	printf("\n");
	
//	�Ƨǰ� 	

	//�� (0) �^ (1) �� (2) �`�� (3) �Ǹ� (4)  �Ƨ�
	for(int i = 0; i <= 10; i++){
		for(int j = 0; j <= (10-i); j++){
			if(score[j][3] < score[j + 1][3]){
				for(int s = 0; s <= 4; s++){ 
					temp = score[j][s];
					score[j][s] = score[j + 1][s];
					score[j + 1][s] = temp;
				}
			}
			temp = 0;	
		}
	}
	
	//�ƦW (5) �Ƨ�
	for(int i = 0; i <= 10; i++){
		if(score[i][3] > score[i + 1][3]){
			score[i][5] = i;			
		}
		else{			
			score[i][5] = i;
			score[i + 1][5] = i;
			i += 1;
		}			
	}
	
//	��X�� 
	printf("No.\tChi\tEng\tAri\tTotal\tAverage\tOrder\n");
	printf("------\t---\t---\t---\t-----\t-------\t-----\n");
	
	for(int i = 0; i <= 9; i++ ){
		printf("%6d\t", score[i][4]);
		for(j = 0; j <= 2; j++ ){
			printf("%3d\t", score[i][j]);
			Average[i] = score[i][3];
			Average[i] = Average[i]/3;
		}
		printf("%5d\t", score[i][3]);	
		printf("%7.2f\t", Average[i]);		
		printf("%5d\t", ++score[i][5]);
		printf("\n");
	};
	printf("\n\n");


	system("pause");
	return 0;
}
