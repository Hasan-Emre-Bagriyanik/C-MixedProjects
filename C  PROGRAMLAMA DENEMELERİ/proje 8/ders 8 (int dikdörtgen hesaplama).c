#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 


//dikdörtgenin alaný ve cevresi 
//deðer:kýsa kenar,uzun kenar 
//alan:uzun kenar*kýsa kenar 
//çevre:kýsa kenar+uzun kenar+kýsa kenar+uzun kenar

int kisa,uzun,alan,cevre;
kisa=8;
uzun=12;
alan=kisa*uzun;
cevre=2*(kisa+uzun);

printf("alan:  %d\n",alan);
printf("cevre:  %d",cevre);



	return 0;
}
