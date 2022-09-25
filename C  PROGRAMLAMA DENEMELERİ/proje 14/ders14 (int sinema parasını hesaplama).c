#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	int misir,kola,su,bilet,toplam;
	

	
	printf("misir adetini giriniz:  ");
	scanf("%d",&misir);

	
	printf("kola adetini giriniz:  ");
	scanf("%d",&kola);
	

	printf("su adetini giriniz:  ");
	scanf("%d",&su);
	
	printf("bilet adetini giriniz:  ");	
	scanf("%d",&bilet);
	
	
	toplam=misir*2+kola*2+su*1+bilet*8;
	
	
	printf("toplam borcunuz:  %d",toplam);
	printf(" TL...");
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
