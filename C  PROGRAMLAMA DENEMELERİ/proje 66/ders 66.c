#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int vize,Final;
    float ortalama;

	printf("Vize notunuzu giriniz: ");
	scanf("Vize notunuz: %d",&vize);

	printf("Final notunuzu giriniz: ");
	scanf("Final notunuz: %d",&Final);




    ortalama=vize*0,4+Final*0,6;

	printf("ortalama: %f",ortalama);

     	if (ortalama<=45){
		printf("\nKaldiniz:(");
	}
	    else {
		printf("Gectiniz:)");
	}

	return 0;
}
