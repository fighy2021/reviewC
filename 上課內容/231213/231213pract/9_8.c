#include<stdio.h> 
#include<stdlib.h>
#define SIZE 6 

int main (void){
	int i = 0, num = 0, flag = 0;
	int A[SIZE] = { 33, 75, 69, 41, 33, 19};
	
	printf("  A�}�C���Ȭ��G\n  ");
	for(i = 0; i < SIZE; i++)
		printf("%d  ",A[i]);
		
	printf("\n  �п�J���j�M���ơG");
	scanf("%d", &num);
		 
	for(i = 0; i < SIZE; i++)
		if(A[i] == num){
			printf("  ���F!!! A[%d] = %d\n", i, A[i]);
			flag = 1;
		}
	if(flag == 0)
		printf("  �S�����!!!\n  ");

	
	system("pause");
	return 0; 
} 
