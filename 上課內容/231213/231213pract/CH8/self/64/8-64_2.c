#include<stdio.h>
#include<stdlib.h>

void kitty(int i);

int main(void){
	int i = 0;
	printf("num = ? ");
	scanf("%d",&i);	
	
	printf("\n");
	kitty(i);
	printf("\n");

	system("pause");
	return 0;	
}
void kitty(int i){
	for(int j = 1; j <= i; j++){
		printf(" Hello Kitty\n");
	}
	
	return ;
}
