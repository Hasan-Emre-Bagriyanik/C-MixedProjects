#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	//Kullanýcýdan  1  ile  7  arasýnda  bir  sayý  girmesini  isteyiniz. 
	// Girilen  deðere  göre  hangi  günolduðunu ekrana yazdýran programý yazýnýz.
	
		int sayi;
	
	printf("1`den 7`ye kadar bir sayi giriniz:  ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1:printf("pazartesi gununu sectiniz ");
		break;
		case 2:printf("sali gununu sectiniz ");
		break;
		case 3:printf("carsamba gununu sectiniz ");
		break;
		case 4:printf("persembe gununu sectiniz ");
		break;
		case 5:printf("cuma gununu sectiniz ");
		break;
		case 6:printf("cumartesi gununu sectiniz ");
		break;
		case 7:printf("pazar gununu sectiniz ");
		break;
		default:printf("hatali sayi girisi");
		break;	
	}
	
	
	
	return 0;
}
