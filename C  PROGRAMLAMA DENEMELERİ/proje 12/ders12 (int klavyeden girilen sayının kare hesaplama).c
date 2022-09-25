#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	printf("karenin alanini ve cevresini hesaplama \n\n");
	
	int kenar,alan,cevre;
	
	printf("bir kenar giriniz:  ");
	scanf("%d",&kenar);
	
	alan=kenar*kenar;
	cevre=kenar*4;
	
	printf("alan:  %d\n",alan);
	printf("cevre:  %d\n",cevre);
	
	
	
	
	
	return 0;
}
