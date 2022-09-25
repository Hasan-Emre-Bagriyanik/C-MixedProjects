#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
    // karenin alan ve çevresi
	// deðer: bir kenar
	// alan: kenar*kenar
	// çevre: kenar*4
	
	int kenar,alan,cevre;
	kenar=20;
	alan= kenar*kenar;
	cevre= kenar*4;
	
	printf("alan:  %d\n",alan);
	printf("cevre:  %d",cevre);
	
	
	return 0;
}
