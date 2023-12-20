#include <stdio.h>
#include <stdlib.h>
void reverse(char str[]);

int main(void){
	char str1[5];
	
	printf("請輸入字串內容: ");
	gets(str1);
	reverse(str1);
	puts(str1);
 
	system("pause");
	return 0;
}

void reverse(char str[]){
	char TE;
	
	for(int i = 0; i < 2; i++){
		TE = str[i];
		str[i] = str[4-i];
		str[4-i] = TE;
	}
	
}

