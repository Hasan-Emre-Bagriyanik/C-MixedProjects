#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	char ad[15],soyad[15],yas[2],meslek[15],sehir[15];
	
	printf("   adiniz:  ");
	scanf("%s",ad);	
	
	printf("   soyadiniz:  ");
	scanf("%s",soyad);
	
	printf("   yasiniz:   ");
	scanf("%s",yas);
	
	printf("   mesleginiz:  ");
	scanf("%s",meslek);
	
	printf("   sehriniz:   ");
	scanf("%s",sehir);	
	
	printf("\n\n");
	
	
	printf("   adi: %s\n",ad);
	
	printf("   soyadi:  %s\n",soyad);
	
	printf("   yas:  %s\n",yas);
	
	printf("   meslegi:  %s\n",meslek);
	
	printf("   sehri:  %s\n",sehir);
	
	
	
	
	
	
	return 0;
}
