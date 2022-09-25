#include <stdio.h>
#include <stdlib.h>

int main()
{


    float ucgenin_alani=15.3;
    int secim,cevresi,kalan;
    float kenar=6,yukseklik=10,hacmi,alani;


basla:

    printf("\n\n");
    printf("1-ucgen dik prizmanin hacmini bulma\n");
    printf("2-ucgen dik prizmanin yuzey alanini bulma\n");
    printf("3-ucgen dik prizmanin cevresini bulunuz\n");
    printf("4-ucgen dik prizmanin icine 100 metrekup su konursa su tasar mý tasarsa ne kadar tasar hesaplayýn\n");
    printf("yapmak istediginiz islemi seciniz: ");
    scanf("%d",&secim);


    switch(secim)
    {
    case 1:
        goto hacim;
        break;

    case 2:
        alan(alani,kenar,yukseklik,ucgenin_alani);
        goto basla;
        break;

    case 3:
        cevre(kenar,yukseklik,cevresi);
        goto basla;
        break;

    case 4:
        hacim_farki(hacmi,ucgenin_alani,yukseklik);
        goto basla;
        break;

    default:
        printf("hatali secim hyaptiniz");
        goto basla;
        break;
    }


    hacim:
        {
            hacmi=9*1.7*yukseklik;
            printf("sonuc: %f\n",hacmi);
            goto basla;
        }
        return 0;}

        void alan(float alani, float kenar,float yukseklik, float ucgenin_alani)


        {
            alani=(9*1.7*2)+(6*10*3);
            printf("sonuc: %f\n",alani);

        }


        int cevre(int kenar,int yukseklik,int cevresi)
        {
            cevresi=((6+10)*6-(10*3));
            printf("sonuc: %d\n",cevresi);
            return 0;
        }


        int hacim_farki(int hacmi,int ucgenin_alani,int yukseklik,int kalan)
        {
            hacmi=9*1.7*10;
            if(hacmi>=100)
            {
                printf("su tasar\n");
               kalan=hacmi-100;
                printf("tasan su: %d\n",kalan);


            }
            else printf("su tasmaz");

            return 0;
        }







