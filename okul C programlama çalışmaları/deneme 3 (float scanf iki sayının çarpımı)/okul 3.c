#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	/*Kullanýcý tarafýndan klavyeden girilen iki adet tamsayýnýn aritmetik ortalamasýný
hesaplayan ve ekrana yazan programý yazýnýz.*/
	
	
	float sayi1,sayi2,ort;

	
	printf("birinci sayiyi giriniz  ");
	scanf("%f",&sayi1);
	
	printf("ikinci sayiyi giriniz  ");
	scanf("%f",&sayi2);
	
	ort=(sayi1+sayi2)/2;
	
	printf("ortalama:  %f",ort);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
