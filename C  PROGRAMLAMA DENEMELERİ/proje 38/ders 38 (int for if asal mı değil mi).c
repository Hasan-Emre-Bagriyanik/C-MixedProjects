#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	/* bir say�n�n asal olup olmad���n� bulmak i�in �e�itli metodlar vard�r. a�a��da bu metodlardan bir tanesi yaz�lm��t�r.
	 Say�n�n yar�sn�na kadar kontrol etmek bir say�n�n asal olup olamd��� belli olacakt�r*/
	
	
	
	int sayi,i;
	int asal_mi=1;

	// Klavyeden test etmek i�in bir sayi istiyoruz
	printf("bir sayi giriniz  ");
	scanf("%d",&sayi);
	
	/* Girilen say�n�n, ba�ka say�lara g�re s�rayla modunu al�yoruz.
	 Bir say�n�n modunu ald���n�zda, kalan s�f�ra e�it ise bu say�n�n b�l�nebildi�ine ve asal olmad���na dair bir bilgi verir.
	 Bu i�lemi yapabilmek i�in 2'den ba�layarak, sayn�n�n yar�s�na kadar olan b�t�n de�erleri deniyoruz.*/
	
	for( i=2; i<=sayi/2;i++)
	{
		if( sayi%i==0)
		{
			//say� i de�i�kenine kalans�z b�l�n�yordur.
			// dolay�syla say� asal de�ildir ve d�ng�y� s�rd�rmeye gerek yoktur.
			asal_mi = 0;
			break;
			
		}
	}
	 
	 // Say�n�n asal olup olamd���na g�re ��kt� yazd�r�yoruz
	  
	  if( asal_mi==1)
	  {
	  	printf("%d sayi asaldir.\n ",sayi);
	  	
	  }
	  else
	  {
	  	printf("%d sayi asal degildir.",sayi);
	  }
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
