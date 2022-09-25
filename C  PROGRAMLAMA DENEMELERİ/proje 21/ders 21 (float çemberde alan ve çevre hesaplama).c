#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//çemberde alan: pi*r*r
	//çemberde çevre: 2*pi*r
	
	printf("cemberde alan ve cevre hesaplama \n\n");
	
	float yaricap,pi,alan,cevre;
	
	pi=3.14;
	printf("yaricao degeri  ");
	scanf("%f",&yaricap);
	
	alan=pi*yaricap*yaricap;
	cevre=2*pi*yaricap;
	
	printf("cemberin alani:  %f \n",alan);
	printf("cemberin cevresi:  %f",cevre);	
	
	
	
	
	
	
	
	
	return 0;
}
