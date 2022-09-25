#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dizi[]={90,85,48,65,56,75,70,60};
    int secim,carpimi,toplami;
    float topla,ort;

basla:
    carpimi=1;
    printf("\n\n");
    printf("1-dizilerin ortalamasini bulma\n");
    printf("2-dizilerin carpimini bulma\n");
    printf("3-son 5 diziyi yazdirma\n");
    printf("4-dizilerin toplamini bulma\n");
    printf("5-5'e tam bolunebilen dizileri yazdirma\n");
    printf("yapmak istediginiz islemi seciniz ");
    scanf("%d",&secim);


    switch(secim)
    {
    case 1:
        ortalama(topla,ort);
        goto basla;
        break;

    case 2:
        goto carpim;
        break;

    case 3:
        son_sayi();
        goto basla;
        break;

    case 4:
        toplam(toplami);
        goto basla;
        break;

    case 5:
        for(int i=0;i<8;i++)
        {
            if (dizi[i]%5==0)
            {
                printf("5'e tam bolunur: %d\n",dizi[i]);
            }

        }
        goto basla;
            break;
    }



carpim:
    {
        for(int i=0;i<8;i++)
        {
            carpimi=carpimi*dizi[i];
        }
        printf("sonucu: %d",carpimi);
        goto basla;
    }

    return 0;
}



    void ortalama(float topla,float ort)
    {
        int dizi[]={90,85,48,65,56,75,70,60};
        for(int i=0;i<8;i++)
        {
            topla=topla+dizi[i];
            ort=topla/8;
        }
        printf("sonuc: %f\n",ort);
    }


    int son_sayi ()
    {
        int dizi[]={90,85,48,65,56,75,70,60};

        for(int i=3;i<8;i++)
        {

            printf("%d\n",dizi[i]);
        }

        return 0;
    }



    void toplam(int toplami)
    {
        int dizi[]={90,85,48,65,56,75,70,60};

        for (int i=0;i<8;i++)
        {
            toplami=toplami+dizi[i];
        }
        printf("sonuc: %d\n",toplami);
    }












