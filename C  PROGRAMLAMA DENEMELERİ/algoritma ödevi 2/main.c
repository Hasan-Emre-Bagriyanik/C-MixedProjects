#include <stdio.h>
#include <stdlib.h>
#define sayi_adeti 10




    void ortalama (float ort, float toplam, int x,int elemanlar)
    {


        for (x=5;x<10;x++)
        {
            int elemanlar[sayi_adeti]={30,25,22,17,98,47,3,55,126,10};
            toplam=toplam+elemanlar[x];
            ort=toplam/5;

        }
            printf("ortalama: %.2f\n",ort);
    }


int main()
{
    int secim;
    float ort;
    int x,toplam;


    int elemanlar[sayi_adeti]={30,25,22,17,98,47,3,55,126,10};

tekrar_basla:

    printf("\n\n");
    printf("1-toplama hesaplama icin \n");// goto
    printf("2-ortalama hesaplama icin\n");// void
    printf("isteginiz bir islem seciniz: ");
    scanf("%d",&secim);

    switch (secim)
    {
        case 1 :
             goto toplam ;

             break;

        case 2 :
            ortalama(ort,toplam,x,elemanlar);
            goto tekrar_basla;
            break;

        default :
            printf("yanlis secim yaptiniz!   tekrar deneyiniz :(  ");
            goto tekrar_basla;
            break;

    }


toplam:
        {
            toplam=0;
            for (int j=0;j<5;j++)
                {
                    toplam=toplam+elemanlar[j];

                }
                printf("toplam: %d\n",toplam);
                goto tekrar_basla;
        }


    return 0;
}
