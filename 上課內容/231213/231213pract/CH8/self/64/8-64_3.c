#include<stdio.h>
#include<stdlib.h>

int cube(int x);

int main(void){
	int i = 0;
	printf("num = ? ");
	scanf("%d",&i);	
	
	printf("\n ans = %d\n\n",cube(i));


	system("pause");
	return 0;	
}

int cube(int x){
	int p = 1;
//	p = pow(x,3);	
	for(int j = 1; j <= 3; j++){
		printf("\n j = %d\n\n",j);
		printf("\n x = %d\n\n",p);
		p = p * x;
	}
	return p;
}

