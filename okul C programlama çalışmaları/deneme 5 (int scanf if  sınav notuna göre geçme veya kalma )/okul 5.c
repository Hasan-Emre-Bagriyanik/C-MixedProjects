#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	/*Kullanýcýdan sýnav notunu girmesini isteyiniz.
	 Notu 50 den büyükse “Dersi Geçtiniz” ,eðer þartý saðlamýyorsa“Dersten kaldýnýz” yazdýrýnýz.*/
	
	
	int sinav1;
	
	printf("sinav notunuzu giriniz:  ");
	scanf("%d",&sinav1);
	
	if(sinav1>=50)
	{
		printf("dersi gectiniz :)");
	}
	else
	{
		printf("dersten kaldiniz  :(");
	}
	
	
	
	
	
	
	
	return 0;
}
