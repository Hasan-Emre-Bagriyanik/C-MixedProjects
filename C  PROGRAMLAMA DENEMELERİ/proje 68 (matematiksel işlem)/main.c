#include <stdio.h>
#include <stdlib.h>


    void para_cekme (int bakiye,int tutar)
    {

        printf("\n\nHos geldiniz EMRE BEY \n");
        printf("toplam bakiyeniz:  %d\n",bakiye);
tekrar_dene:
        printf("cekmek istediginiz tutari giriniz:  ");
        scanf("%d",&tutar);
        if (tutar>bakiye)
        {
            printf("yetersiz bakiye :( \n");
            goto tekrar_dene;
        }
        bakiye-=tutar;
        printf("yeni bakiyeniz: %d\n",bakiye);
    }




    int bakiye_bilgi (int bakiye)
    {
        printf("\n\nHos geldiniz EMRE BEY \n");
        printf("toplam bakiyeniz:  %d\n",bakiye);
        return 0;

    }





int main()
{
    int secim;
    int bakiye=3000;
    int tutar;
    int sifre;



    printf("************ ATM ISLEMLERI **************\n\n");

geri_don:
    printf("sifrenizi giriniz: ");
    scanf("%d",&sifre);
    printf("\n");


    if(sifre==203941)
    {
        goto basla;
    }
    else
    {
        printf("yanlis sifre tekrar deneyiniz: ");
        goto geri_don;
        printf("\n");
    }


basla:

    printf("\n\n");
    printf("1-para cekme:  \n");
    printf("2-para yatirma:  \n");
    printf("3-bakiye bilgi:  \n");
    printf("4-kart iade:  \n");
    printf("yapmak istediginiz islemi seciniz:  ");
    scanf("%d",&secim);




    switch(secim)
    {


        case 1 :
            para_cekme(bakiye,tutar);
            goto basla;
            break;

        case 2 :
            goto para_yatirma;
            break;

        case 3 :
            bakiye_bilgi(bakiye);
            goto basla;
            break;

        case 4 :
            goto kart_iade;
            break;

        default:
            printf("yanlis secim yaptiniz tekrar deneyin ");
            goto basla;
            break;


    }


    para_yatirma:
        {
             printf("\n\nHos geldiniz EMRE BEY \n");
             printf("toplam bakiyeniz:  %d\n",bakiye);
             printf("yatirmak istediginiz tutari giriniz:  ");
             scanf("%d",&tutar);
             bakiye+=tutar;
             printf("yeni bakiyeniz:  %d\n",bakiye);
             goto basla;



        }


    kart_iade:
        {
             printf("\n\n gule gule  EMRE BEY \n");
             printf("kartinizi alamyi unutmayin :)\n");


        }










    return 0;
}
