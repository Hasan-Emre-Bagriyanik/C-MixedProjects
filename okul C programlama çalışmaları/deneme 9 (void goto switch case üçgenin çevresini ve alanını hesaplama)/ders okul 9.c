#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void cevre (int taban, int kenar1, int kenar2)
{
	printf("ucgenin cevresi=taban+kenar1+kenar2= %d+%d+%d=%d \n\n",taban,kenar1,kenar2,taban+kenar1+kenar2);
	
}




int main(int argc, char *argv[]) {
	
	
	/*UYGULAMA 4 ��genin �evresini ve alan�n� hesaplayanprogram� a�a��daki belirtilen foksiyonlara dikkat ederek yaz�n�z.
	 1-��genin taban uzunlu�u10cm, ikinci kenar�5cm ,���nc� kenar�4cm vey�ksekli�i3 cm�dir.
	 2-Kullan�c�yayapmak istedi�i i�lemi se�tiriniz.(goto foksiyonu)
	 3-��genin�evresini hesaplat�n�z.(de�er d�nd�rmeyen fonksiyon)
	4-��genin alan hesaplamas�n� yap�n�z. (goto foksiyonu) */
	
	
	int taban = 10;
	int kenar1= 5;
	int kenar2 = 4;
	int yukseklik=3;
	int secim;

tekrar_basla:
	
	printf("******* ucgende cevre ve alan hesaplama *******\n\n");
	printf("1- ucgenin cevresini hesaplama: \n");
	printf("2- ucgenin alanini hesaplama:  \n");
	scanf("%d",&secim);
	

	
	switch(secim)
	{
		case 1 :
		cevre(taban,kenar1,kenar2);
		goto tekrar_basla;
		break;
		
		case 2 : 
		goto ucgen_alani;
	
		break;
		
		default:
		goto tekrar_basla;
		break;
}
	
	
ucgen_alani: 
	printf("ucgenin alani=(taban*yukseklik)/2= (%d*%d)/2=%d \n",taban,yukseklik,(taban*yukseklik)/2);
	goto tekrar_basla;
	
	
	return 0;
}
