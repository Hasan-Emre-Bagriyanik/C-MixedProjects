#include <stdio.h>
#include <stdlib.h>

int main()
{

    int secim,bkup,kkup,fark,alan,hacmi,cevresi;


basla:
    printf("\n\n");
    printf("1-kupun hacmini bulma \n");
    printf("2-kupun yuzey alanini bulma \n");
    printf("3-kupun bir yuzeyinin cevresini bulma \n");
    printf("4-kupun icinde bir kenari 4 cm olan baska bir kup yerlestirilirse hacmi ne kadar kalir\n");
    printf("yapmak istediginiz islemi seciniz: ");
    scanf("%d",&secim);



    switch(secim)
    {
    case 1:
        hacim(hacmi);
        goto basla;
        break;

    case 2:
        goto yuzey_alani;
        break;

    case 3:
        cevre(cevresi);
        goto basla;
        break;

    case 4:
        bkup=8*8*8;
        kkup=4*4*4;
        fark=bkup-kkup;
        printf("sonuc: %d\n",fark);

        goto basla;
        break;

    default:
        printf("hatali secim yaptiniz ");
        goto basla;
        break;
    }


yuzey_alani:
    {
        alan=8*8*6;
        printf("sonucu: %d\n",alan);
        goto basla;
    }

    return 0;
}


    void hacim(int hacmi)
    {
        hacmi=8*8*8;
        printf("sonuc: %d\n",hacmi);

    }

    int cevre (int cevresi)
    {
        cevresi=8*4;
        printf("sonuc: %d\n",cevresi);

    return 0;  }





