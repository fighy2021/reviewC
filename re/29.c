#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float DU1 = 0, DU2 = 0, DU3 = 0;
    float DT = 0, AS = 0;
    printf("請輸入DU：");
    scanf("%f:%f:%f", &DU1, &DU2, &DU3);
    printf("請輸入DT：");
    scanf("%f", &DT);
	
	printf("\nDU: %02.0f:%02.0f:%02.0f\n", DU1, DU2, DU3);
	printf("DT: %04.2f\n\n", DT);
    
	AS = DT / (DU1+ DU2/60 + DU3/3600);
	printf("Duration: %02.0f:%02.0f:%02.0f\n", DU1, DU2, DU3);
	printf("Distance: %04.2fKM\n\n", DT);
	printf("AverageSpeed:%04.2fKM/H\n",AS);
	system("pause") ;
    return 0;
}
