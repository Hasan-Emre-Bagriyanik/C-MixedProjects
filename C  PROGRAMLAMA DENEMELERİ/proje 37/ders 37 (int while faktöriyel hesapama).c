#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	// klavyeden girilen say�n�n fakt�riyelini while ile hesaplayan program�n yaz�n�z 
	
	int sayi,faktoryel;
	
	faktoryel=1;
	
	printf("faktoryelini alacaginiz sayiyi giriniz  ");
	scanf("%d",&sayi);
	
	while(sayi>1)
	{
		faktoryel=faktoryel*sayi;
		sayi--;
	}
	 printf("sonuc:  %d",faktoryel);
	
	
	
	
	
	
	
	
	return 0;
}
