#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	// klavyeden girilen eleman sayýsýna göre dizilerin toplamý ve ortalamasýný hesaplayan program
	
	int dizi[100];
	int i,sayi,ort;
	int toplam=0;


	printf("eleman sayisini giriniz:  ");
	scanf("%d",&sayi);
	
	for (i=0;i<sayi;i++)
	{
		printf("dizinin %d. degerini giriniz:  ",i+1);
		scanf("%d",&dizi[i]);
	
	}
	
	for(i=0;i<sayi;i++)
	{
		{
			printf(" %d\n",dizi[i]);
		}
	
	toplam=toplam+dizi[i];
}
	ort=toplam/sayi;
	
	printf("toplami:  %d\n",toplam);
	printf("ortlama:  %d",ort);
	
	
	
	
	
	
	return 0;
}
