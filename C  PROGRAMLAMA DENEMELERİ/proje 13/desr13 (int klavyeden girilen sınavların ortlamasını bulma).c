#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	
	int sinav1,sinav2,sinav3,ortalama;
	
	printf("ogrencinin not ortalamasý hesaplama\n\n");
	
	printf("ilk sinav notunu giriniz:  ");
	scanf("%d",&sinav1);
	
	printf("ikinci sinav notunu giriniz:  ");
	scanf("%d",&sinav2);
	
	printf("ucuncu sinav notunu giriniz:  ");
	scanf("%d",&sinav3);
	
	ortalama=(sinav1+sinav2+sinav3)/3;
	
	printf("ortalama:  %d",ortalama);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
