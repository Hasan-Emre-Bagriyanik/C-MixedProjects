#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// ygs 1 de puan türünü hesaplama 
	
	//türkçe:1.999
	//matematik:3.998 
	//sosyal bilgiler:1
	// fen bilimleri:2.999
	//taban:100.160
	
	float turkce,matematik,sosyal,fen,taban,toplampuan;
	
	printf("turkce netinizi giriniz  ");
	scanf("%f",&turkce);
	
	printf("matematik netinizi giriniz  ");
	scanf("%f",&matematik);
	
	printf("sosyal bilgileri netinizi giriniz  ");
	scanf("%f",&sosyal);
	
	printf("fen biliöleri netinizi giriniz  ");
	scanf("%f",&fen);
	
	toplampuan=turkce*1.999+matematik*3.998+sosyal*1+fen*2.999+100.160;
	
	printf("ygs 1 puan turunde sonucunuz:  %f",toplampuan);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
