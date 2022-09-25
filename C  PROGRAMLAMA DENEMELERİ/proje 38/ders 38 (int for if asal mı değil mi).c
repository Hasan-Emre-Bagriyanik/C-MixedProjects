#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	/* bir sayýnýn asal olup olmadýðýný bulmak için çeþitli metodlar vardýr. aþaðýda bu metodlardan bir tanesi yazýlmýþtýr.
	 Sayýnýn yarýsnýna kadar kontrol etmek bir sayýnýn asal olup olamdýðý belli olacaktýr*/
	
	
	
	int sayi,i;
	int asal_mi=1;

	// Klavyeden test etmek için bir sayi istiyoruz
	printf("bir sayi giriniz  ");
	scanf("%d",&sayi);
	
	/* Girilen sayýnýn, baþka sayýlara göre sýrayla modunu alýyoruz.
	 Bir sayýnýn modunu aldýðýnýzda, kalan sýfýra eþit ise bu sayýnýn bölünebildiðine ve asal olmadýðýna dair bir bilgi verir.
	 Bu iþlemi yapabilmek için 2'den baþlayarak, saynýnýn yarýsýna kadar olan bütün deðerleri deniyoruz.*/
	
	for( i=2; i<=sayi/2;i++)
	{
		if( sayi%i==0)
		{
			//sayý i deðiþkenine kalansýz bölünüyordur.
			// dolayýsyla sayý asal deðildir ve döngüyü sürdürmeye gerek yoktur.
			asal_mi = 0;
			break;
			
		}
	}
	 
	 // Sayýnýn asal olup olamdýðýna göre çýktý yazdýrýyoruz
	  
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
