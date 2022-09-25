#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	// aylýk klavyeden girilen kadar maaþ alan birinin maaþýna yüzde 12 lik bir zam yapýlýrsa yeni maaþ ne kadar olur
	
	printf("**** yeni maas hesaplama **** ");
	printf("\n\n");
	
	float maas,yenimaas;
	
	printf("maasinizi giriniz  ");
	scanf("%f",&maas);
	
	yenimaas=maas+maas*12/100;
	printf("yeni maas:  %f",yenimaas);
	
	
	
	
	
	
	
	
	
	return 0;
}
