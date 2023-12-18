#include<stdio.h>
#include<stdlib.h>

int find(int n);

int main(void){
	int i = 0;
	
	printf(" n = ? ");
	scanf("%d",&i);
	
	printf("\n ans = %d\n\n", find(i) );

	system("pause");
	return 0;	
}

int find(int n){
	int q = 0, w = 0, e = 0, num = 0;
	do{
		num++;
		if( (num % 3 == 2)&&(num % 5 == 3)&&(num % 7 == 2) ){
			q++;
			printf("num = %d\n",num);
		}
	}while(q < n);
	return num;
}







