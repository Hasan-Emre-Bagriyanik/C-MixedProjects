#include <stdio.h>
#include <stdlib.h>

    struct ogrenci
    {
        char ad[15];
        char soyad[20];
        int numara;
        char bolum[30];
    }ogr;

int main()
{

    printf("adinizi giriniz: ");
    scanf("%s",&ogr.ad);
    printf("soyadinizi giriniz: ");
    scanf("%s",&ogr.soyad);
    printf("numaranizi giriniz: ");
    scanf("%d",&ogr.numara);
    printf("bolumunuzu giriniz: ");
    scanf("%s",&ogr.bolum);

    printf("\n\n");
    printf("adi: %s\n",ogr.ad);
    printf("soyadi: %s\n",ogr.soyad);
    printf("numarasi: %d\n",ogr.numara);
    printf("bolumu: %s",ogr.bolum);



    return 0;
}
