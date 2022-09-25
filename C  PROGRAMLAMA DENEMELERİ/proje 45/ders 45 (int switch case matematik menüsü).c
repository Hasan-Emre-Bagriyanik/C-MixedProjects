#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	// klavyeden girilen bir sayý ile istediðin iþlemi yaptýran program
	
	int sayi1,sayi2,sonuc,islem;
	
	sayi1=12;
	sayi2=16;
	
	printf("      matematik menusu\n");
	printf("*********************************\n\n");
	printf("1-karede alan ve cevre hesabi\n");
	printf("2-girilen sayinin kupu\n");
	printf("3-cemberde alan ve cevre hesabi\n");
	printf("4-dikdortgende alan ve cevre hesabi\n");
	printf("istedigininiz bir islemi secin:  ");
	scanf("%d",&islem);
	
	switch(islem)
	{
		case 1:
			printf("karenin alani:  %d\n",(sayi1*sayi1));
			printf("karenin cevresi:  %d",(sayi1*4));
			break;
		case 2:
			printf("girilen sayinin kupu:  %d",(sayi2*sayi2*sayi2));
			break;
		case 3:
			printf("cemberde alan:  %d\n",(3*sayi1*sayi1));
			printf("cemberde cevre:   %d",(2*3*sayi1));
			break;
		case 4:
			printf("dikdortgende alan:  %d\n",(sayi1*sayi2));
			printf("dikdortgende cevre:  %d",((sayi1+sayi2)*2));
			break;
		default:
			printf("hatali sayi girisi ");
			break;
	}
	
	
	
	
	
	return 0;
}
