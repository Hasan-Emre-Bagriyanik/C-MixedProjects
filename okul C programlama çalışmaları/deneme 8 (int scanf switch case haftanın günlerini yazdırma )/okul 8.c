#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	//Kullan�c�dan  1  ile  7  aras�nda  bir  say�  girmesini  isteyiniz. 
	// Girilen  de�ere  g�re  hangi  g�noldu�unu ekrana yazd�ran program� yaz�n�z.
	
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
