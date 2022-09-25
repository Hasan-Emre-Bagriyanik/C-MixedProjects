#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	// girilen harflere göre karakter bulma
	
	char ders;
	
	printf("harf kodunu giriniz:  ");
	scanf("%s",&ders);
	
	switch (ders)
	{
		case 't':printf("turkce");
		break;
		case 'm': printf("matematik");
		break;
		case 's':printf("sosyal bilimler");
		break;
		case 'f':printf("fen bilimleri");
		break;
		default:printf("hatali harf ya da buyuk harf girisi");
		break;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
