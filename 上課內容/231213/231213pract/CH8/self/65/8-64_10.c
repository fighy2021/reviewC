#include<stdio.h>
#include<stdlib.h>

int prime(int n);
int mar(int a);

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
			q += mar(num);
		e = 0;
		num++;
		num1 = 1;
	}while(q < n);
	return --num;
}

int mar(int a){
//	system("pause");
	double s = 0;
	s = a+1;
	do{
		s/=2;		
	}while(s > 1);
	if( (s == 1)||(s == 0)){
		printf(" a = %d",a);
		printf("\n s = %lf\n",s);
		system("pause");	
		return 1;
	}
	if(0 < s < 1)
		return 0;	
}






