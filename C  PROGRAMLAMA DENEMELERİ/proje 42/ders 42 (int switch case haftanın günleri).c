#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	// hafranýn günlerini yazdýran program
	
	int sayi;
	
	printf("1`den 7`ye kadar bir sayi giriniz:  ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1:printf("pazartesi");break;
		case 2:printf("sali");break;
		case 3:printf("carsamba");break;
		case 4:printf("persembe");break;
		case 5:printf("cuma");break;
		case 6:printf("cumartesi");break;
		case 7:printf("pazar");break;
		default:printf("hatali sayi girisi");break;	
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
