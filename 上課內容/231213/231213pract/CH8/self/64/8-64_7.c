#include<stdio.h>
#include<stdlib.h>

int prime(int n);

int main(void){
	int i = 0;
	
	printf(" n = ? ");
	scanf("%d",&i);
	
	printf("\n ans = %d\n\n", prime(i) );

	system("pause");
	return 0;	
}

int prime(int n){
	int q = 0, w = 1, e = 0, num = 2, num1 = 1;
	do{			
		do{
			w = 1;
			w = num % num1;			
			if(w == 0)
				e++;
			num1++;
		}while(num >= num1);	
		if(e == 2)
			q++;
		e = 0;
		num++;
		num1 = 1;
	}while(q < n);
	return --num;
}

