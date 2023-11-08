#include <stdio.h>
#include <float.h>

int main() {
	char ch1[20], ch2[20];
    printf("First Name = ");
    scanf("%s",ch1);
    
	printf("Last Name = ");
    scanf("%s",ch2);
    
	printf("%s %s",ch2,ch1);
	
	
    return 0;
}

