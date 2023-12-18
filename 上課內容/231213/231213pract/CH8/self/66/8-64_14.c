#include<stdio.h>
#include<stdlib.h>

double my_fun(double x, int n);
int fac(int m);
double power(double c, int v);


int main(void){
	int i = 0, j = 0;
	
//	printf(" n = ? ");
//	scanf("%d",&i);
	
	printf("\n 0.1, 5 ans = %lf\n\n", my_fun(0.1, 5));
	printf("\n 0.1, 8 ans = %lf\n\n", my_fun(0.1, 8));
	printf("\n 0.2, 8 ans = %lf\n\n", my_fun(0.2, 8));

	do{
		i++;
		j = i + 1;
		printf("\n i = %d , %lf\n\n", i, my_fun(0.1, i));		
		printf("\n j = %d , %lf\n\n", j, my_fun(0.1, j));
	}while( my_fun(0.1, j)-my_fun(0.1, i) >=0.00001 );
	
	system("pause");
	return 0;	
}


double my_fun(double x, int n){
	double q = 0, w = 0, e = 0;
	for(int r = 1; r <= n; r++){
		q = fac(r);
		w = power( x, r);
		e += w / q;
	}
	return e;
}
int fac(int m){
	int a = 1; 
	for(int s = 1; s <= m; s++){
		a = a * s;
	}
	return a;
}
double power(double c, int v){
	double z = 1;
	for(int x = 1; x <= v; x++){
		z = z * c;
	}
	return z;
}




