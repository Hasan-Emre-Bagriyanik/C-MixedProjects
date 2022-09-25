#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//atm de işlemleri yazdıran program
	
	int bakiye=1000;
	int tutar,islem;
	
	printf("\n\n*******atm islemleri*******\n\n");
	printf("1-para cekeme\n");
	printf("2-para yatırma\n");
	printf("3-bakiye bilgi\n");
	printf("4-kart iade\n");

	printf("yapmak istediginiz islemi seciniz:  ");
	scanf("%d",&islem);
	
	switch(islem)
	{
		case 1:
			printf("bakiyeniz:  %d\n",bakiye);
			printf("cekeceginiz tutari giriniz:  ");
			scanf("%d",&tutar);
			if(tutar>1000)
			{
				printf("yetersiz bakiye tekrar girin !!");
				scanf("%d",&tutar);
			}
			bakiye-=tutar;
			printf("yeni bakiyeniz:  %d\n",bakiye);
			break;
			
		case 2:
			printf("bakiyeniz:  %d\n",bakiye);
			printf("yatiracaginiz tutari giriniz:  ");
			scanf("%d",&tutar);
			
			bakiye+=tutar;
			printf("yeni bakiyeniz:  %d\n",bakiye);
			break;
			
		case 3:
			printf("bakiyeniz:  %d\n",bakiye);
			break;
		
		case 4:
			printf("kartinizi almayi unutmayin :)");
			break;
		
		default:
			printf("dogru islem sectiginize emin olun :(");
			break;
	}
	
	
	
	
	
	return 0;
}
