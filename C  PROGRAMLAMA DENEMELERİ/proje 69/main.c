#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Klavyeden girlen �� adet kenar uzunlu�u ile
    a-bir ��genin �izilip �izilemeyece�ini,
    b-e�er ��gen �izilirse ��genin �e�idini(ikizkenar, �e�itkenar, e�kenar),
    c-�izilen ��genin alan ve �evresini bulup ekrana yazd�ran kod*/

    int a,b,c,secim;

basla:
    printf("\n\n ucgen hesap islemleri\n\n");
    printf("1-bir ucgenin cizilip cizilemeyecegini bulma\n");
    printf("2-eger ucgen cizilirse ucgenin cesidini bulma(ikizkenar, cesitkenar, eskenar)\n");
    printf("3-cizilen ucgenin alan ve cevresini bulma\n");
    printf("yapmak istediginiz bir islem seciniz ");
    scanf("%d",&secim);

    switch(secim)
    {
    case 1:
        printf("\n\n");
        kenarlar(a,b,c);
        if((a-b)>0)
        {
          if(a-b<=c<=a+b)
        }

        else if((a-b)==0)
        {
          if(a-b<=c<=a+b)
        }

        goto basla;
        break;



    case 3:




    }













    return 0;
}

    void kenarlar (int a,int b,int c)
    {
    printf("ucgenin 1. kenarinin uzunlugunu giriniz: ");
    scanf("%d",&a);
    printf("ucgenin 2. kenarinin uzunlugunu giriniz: ");
    scanf("%d",&b);
    printf("ucgenin 3. kenarinin uzunlugunu giriniz: ");
    scanf("%d",&c);
    }

