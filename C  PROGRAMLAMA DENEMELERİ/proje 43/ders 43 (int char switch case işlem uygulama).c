#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int sayi1,sayi2,sonuc;
	char islem;
	
	sayi1=75;
	sayi2=15;
	
	printf("yapacaginiz islemi giriniz:  ");
	scanf("%s",&islem);
	
	switch (islem)
	{
		case '+':
			sonuc=sayi1+sayi2;
			printf("Sonuc:  %d",sonuc);
			break;
		case '-':
			sonuc=sayi1-sayi2;
			printf("Sonuc:  %d",sonuc);
			break;
		case '*':
			sonuc=sayi1*sayi2;
			printf("Sonuc:  %d",sonuc);
			break;
		case '/':
			sonuc=sayi1/sayi2;
			printf("Sonuc:  %d",sonuc);
			break;
		default:printf("hatali islem girisi");
			break;
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
