#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int count(char str[]);

int main(void){
	char str1[SIZE];
	
	printf("請輸入字串內容: ");
	gets(str1);	
	printf("  a, e, i, o, u %d times", count(str1));
 
	system("pause");
	return 0;
}

int count(char str[]){
	int i, j, count = 0;
	char que[] = {'a','e','i','o','u'};
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < 5; j++){
			printf("    %c\n",que[j]);
			if(str[i] == que[j])
				count+=1;
		}				
	}
	printf("  %d\n",count);
	return count;
}

