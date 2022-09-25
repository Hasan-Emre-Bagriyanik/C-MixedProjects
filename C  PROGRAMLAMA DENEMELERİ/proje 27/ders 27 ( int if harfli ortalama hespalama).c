#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	// 3 sýnav ve 1 proje notu girilen öðrencinin not ortalamasýna göre...
	//ort < 50 ise ff
	//ort 50 / 60 ise dd
	//ort 60 / 70 ise cc
	//ort 70 / 85 ise bb
	//ort 85 / 100 ise aa    ortalamayý hesaplayan programý yazýnýnýz
	
	printf("***** donem notu hesaplama *****\n\n");
	
	int s1,s2,s3,p1,ort;
	
	printf("birinci sinav notunu giriniz  ");
	scanf("%d",&s1);
	
	printf("ikinci sinav notunu giriniz  ");
	scanf("%d",&s2);
	
	printf("ücüncü sinav notunu giriniz  ");
	scanf("%d",&s3);
	
	printf("proje notunuzu giriniz  ");
	scanf("%d",&p1);
	
	ort=(s1+s2+s3+p1)/4;	
	printf("ortalama:  %d\n",ort);
	
	
	if(ort<50)
	{printf("ortalamaniz: ff ");
	}
	if(50<=ort && ort<60)
	{printf("ortalamaniz: dd ");
	}
	if(60<=ort && ort<70)
	{printf("ortalamaniz: cc ");
	}
	if(70<=ort && ort<85)
	{printf("ortalamaniz: bb ");
	}
	if(85<=ort && ort<100)
	{printf("ortalamaniz: aa ");
	}
	
	
	
	return 0;
}
