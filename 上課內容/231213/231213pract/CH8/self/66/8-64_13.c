#include<stdio.h>
#include<stdlib.h>

double my_fun(int n);
int twopow(int m);

int main(void){
	int i = 0, j = 0;
	
//	printf(" n = ? ");
//	scanf("%d",&i);
	
	printf("\n 5 ans = %lf\n\n", my_fun(5));
	printf("\n 8 ans = %lf\n\n", my_fun(8));
	printf("\n 10 ans = %lf\n\n", my_fun(10));

	do{
		i++;
		j = i + 1;
		printf("\n i = %d , %lf\n\n", i, my_fun(i));		
		printf("\n j = %d , %lf\n\n", j, my_fun(j));
	}while( my_fun(j)-my_fun(i) >=0.00001 );
	
	system("pause");
	return 0;	
}

double my_fun(int n){
	double w = 0, e = 0;
	for(int q = 1; q <= n; q++){
		e = level(q);
		w = w + (1/e);
	}
	return w;	
}

int level(int m){
	int z = 1;
	for(int x = 1; x <= m; x++){
		z = z * x;
	}
	return z;
}







