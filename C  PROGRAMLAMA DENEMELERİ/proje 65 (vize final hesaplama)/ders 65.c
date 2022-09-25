#include <stdio.h>
#include <stdlib.h>
#define sinif 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int vize[SINIF], Final[SINIF], YSnotu[SINIF];

	for (int sayac=0; sayac<3 ; sayac++)
	{
		printf("\n%d. ogrencinin vize notunu giriniz: \t",sayac+1);
		scanf("%d",&vize[sayac]);
		printf("\n%d. ogrencinin final notunu giriniz: \t",sayac+1);
		scanf("%d",&Final[sayac]);

		YSnotu[sayac]=vize[sayac]*0.4+Final[sayac]*0.6;
	}

	for (int sayac2=0; sayac2<3; sayac2++)
	{
		printf("\n %d. ogrencinin yil sonu notu: %d",sayac2+1,YSnotu[sayac2]);
	}



















        float vize[sinif],final[sinif],YSnotu[sinif];

        int sayac,sayac2;


        for(sayac=0;sayac<5;sayac++)
        {
            printf("\n%d.ogrencinin vize notunu giriniz: ",sayac+1);
            scanf("%f",&vize[sayac]);
            printf("\n%d.ogrencinin final notunu giriniz: ",sayac+1);
            scanf("%f",&final[sayac]);

            YSnotu[sayac]=vize[sayac]*0.4+final[sayac]*0.6;

        }

        for (sayac2=0;sayac2<5;sayac2++)
    {

        if (YSnotu[sayac2]>=50)
        {
            printf("\n%d.ogrencinin yil sonu notu: %f\n",sayac2+1,YSnotu[sayac2]);
            printf("\n%d.ogrenci gecmistir ",sayac2+1);
        }

        else
        {
            printf("\n%d.ogrencinin yil sonu notu: %f\n",sayac2+1,YSnotu[sayac2]);
            printf("\n%d.ogrenci kalmisdir ",sayac2+1);
        }





        }






















	return 0;
}
