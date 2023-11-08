#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int DU1 = 0,DU2 = 0,DU3 = 0;
    float DT = 0;
    printf("請輸入DU：");
    scanf("%d:%d:%d", &DU1, &DU2, &DU3);
    printf("請輸入DT：");
    scanf("%f", &DT);
	
	printf("\nDU: %02d:%02d:%02d\n", DU1, DU2, DU3);
	printf("DT: %04.2f\n", DT);
    
	system("pause") ;
    return 0;
}
