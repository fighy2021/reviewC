#include<stdio.h>
#include<stdlib.h>

double my_fun(int n);
int twopow(int m);

int main(void){
	int i = 0;
	
//	printf(" n = ? ");
//	scanf("%d",&i);
	
	printf("\n 3 ans = %lf\n\n", my_fun(3));
	printf("\n 4 ans = %lf\n\n", my_fun(4));
	printf("\n 5 ans = %lf\n\n", my_fun(5));
	printf("\n 6 ans = %lf\n\n", my_fun(6));

	do{
		i++;
		printf("\n i = %d , %lf\n\n", i, my_fun(i));
	}while( my_fun(i)<=0.99999 );
	
	system("pause");
	return 0;	
}

double my_fun(int n){
	double w = 0, e = 0;
	for(int q = 1; q <= n; q++){
		e = twopow(q);
		w = w + (1/e);
	}
	return w;	
}

int twopow(int m){
	int z = 1;
	for(int x = 1; x <= m; x++){
		z = z * 2;
	}
	return z;
}







