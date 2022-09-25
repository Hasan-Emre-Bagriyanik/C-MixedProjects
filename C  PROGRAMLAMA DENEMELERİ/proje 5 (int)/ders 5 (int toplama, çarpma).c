#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or a your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int sayi1,sayi2,toplam,fark,carpi,bolum;
	
	sayi1=120;
	sayi2=40;
	
	
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carpi=sayi1*sayi2;
	bolum=sayi1/sayi2;
	
	
	
	printf("toplam sonuc:  %d\n",toplam);
	printf("farki:  %d\n",fark);
	printf("carpimi:  %d\n",carpi);
	printf("bolumu:  %d\n",bolum);
	
	return 0;
}
