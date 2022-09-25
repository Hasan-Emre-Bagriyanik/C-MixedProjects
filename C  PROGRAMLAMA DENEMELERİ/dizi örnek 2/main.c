#include <stdio.h>
#include <stdlib.h>

int main()
{



    int secim,faktor;
basla:

    faktor=1;
    printf("\n\n");
    printf("5,6,4,7,8,10\n");
    printf("faktoriyelini hesaplatmak istediginiz sayiyi giriniz: ");
    scanf("%d",&secim);


    switch(secim)
    {
    case 5:
        for (int i=1;i<=5;i++)
        {
            faktor=faktor*i;
        }
        printf("sonuc: %d\n",faktor);
        goto basla;
        break;


    case 6:
        for (int i=1;i<=6;i++)
        {
            faktor=faktor*i;
        }
        printf("sonuc: %d\n",faktor);
        goto basla;
        break;

    case 4:
        for (int i=1;i<=4;i++)
        {
            faktor=faktor*i;
        }
        printf("sonuc: %d\n",faktor);
        goto basla;
        break;


    case 7:
        for (int i=1;i<=7;i++)
        {
            faktor=faktor*i;
        }
        printf("sonuc: %d\n",faktor);
        goto basla;
        break;


    case 8:
        for (int i=1;i<=8;i++)
        {
            faktor=faktor*i;
        }
        printf("sonuc: %d\n",faktor);
        goto basla;
        break;

    case 10:
        for (int i=1;i<=10;i++)
        {
            faktor=faktor*i;
        }
        printf("sonuc: %d\n",faktor);
        goto basla;
        break;

    default:
        printf("hatali secim yaptiniz");
        goto basla;
        break;
    }























    return 0;
}
