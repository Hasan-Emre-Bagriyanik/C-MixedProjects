#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ag,eb,db,total,bakiye2,miktar,ef,sf,dgf,bakiye,tutar;
    int sifre,secim,secim2,secim3,secim4,i;
    i=1;
    bakiye=5000;
    bakiye2=3800;

    printf("***** ATM ISLEMLERINE HOS GELDINIZ *****\n\n");
    printf("lutfen kartinizi giris yerine sokunuz \n\n");

tekrar_basla:

    printf("\n\nsifrenizi lutfen giriniz: ");
    scanf("%d",&sifre);

    if(sifre==2003)
    {
        printf("sifreniz dogru :)\n");
        printf("\n\n***** HOS GELDINIZ EMRE BEY *****\n\n");
        goto basla;
    }
    else
    {
       printf("sifreniz hatali :(\n");
       while (i<3)
       {
         i++;
         goto tekrar_basla;
       }

       printf("\nkartiniz bloke edilmistir \n");
       printf("lutfen en yakindaki subemize gidiniz\n");
       return 0;
    }



basla:
    printf("\n\n");
    printf("1-para cekme islemi\n");
    printf("2-para yatirma islemi\n");
    printf("3-doviz islemleri\n");
    printf("4-havale islemi\n");
    printf("5-bakiye bilgi islemi\n");
    printf("6-kart iade islemi\n");
    printf("7-fatura odeme islemleri\n");
    printf("yapmak istediginiz islemi seciniz: ");
    scanf("%d",&secim);


    switch(secim)
    {
    case 1:

        printf("\n\npara cekme islemini sectiniz \n\n");
        printf("hesabinizdaki toplam para: %.2f TL\n\n",bakiye);
geri:
        printf("lutfen cekmek istediginiz tutari giriniz: ");
        scanf("%f",&tutar);
        if(bakiye<tutar)
            {
                printf("yetersiz bakiye :(\n");
                goto geri;
            }
        else
        {
            bakiye-=tutar;
            printf("yeni bakiyeniniz: %.2f TL\n",bakiye);
            printf("para cekme isleminiz basari ile gerceklestirilmistir \n");
            printf("lutfen paranizi almayi unutmayin\n");
        }

        goto basla;
        break;

    case 2:

        printf("para yatirma islemini sectiniz \n\n");
        printf("hesapinizdaki toplam para:  %.2f TL \n\n",bakiye);

        printf("lutfen yatirmak istediginiz para tutarini giriniz: ");
        scanf("%f",&tutar);

        bakiye+=tutar;
        printf("yeni bakiyeniz: %.2f TL\n",bakiye);
        printf("para yatirma isleminiz basari ile gerceklestirilmistir \n");
        goto basla;
        break;


    case 3:
       printf("\n\ndoviz islemlerini sectiniz \n\n");
       printf("dolar= alis:13.38 TL   satis:13.59 TL \n");
       printf("euro= alis:15.09 TL    satis:15.33 TL \n");
       printf("altin= alis:775.73 TL    satis:785.08 TL \n");

       printf("\n\n");
       printf("1-altin satin alma \n");
       printf("2-altin bozdurma \n");
       printf("3-euro satin alma \n");
       printf("4-euro bozdurma \n");
       printf("5-dolar satin alma \n");
       printf("6-dolar bozdurma \n");
       printf("yapmak istediginiz islemi seciniz: ");
       scanf("%d",&secim2);

        switch(secim2)
       {
            case 1:
                printf("\n\naltin alma islemini sectiniz \n\n");
                printf("altinin gramini 785.08 TL ile alinacak \n");
                printf("bakiyenizdeki toplam para: %.2f TL\n",bakiye);
        geri_don:
                printf("alacaginizin altin grami giriniz: ");
                scanf("%f",&ag);

                total=785.08*ag;
                if(total<=bakiye)
                {
                    bakiye-=total;
                    printf("altin icin harcadiginiz para: %.2f Tl\n",total);
                    printf("yeni bakiyeniz: %.2f\n",bakiye);
                    printf(" altin alma isleminiz basari ile gerceklestirilmistir\n");
                }

                else
                {
                    printf("yetersiz bakiye\n");
                    goto geri_don;
                }

                break;

            case 2:
                printf("\n\naltin bozdurma islemini sectiniz \n\n");
                printf("altinin gramini 775.73 TL ile bozduracaksiniz \n");
                printf("bakiyenizdeki toplam para: %.2f TL\n",bakiye);

                printf("bozduracaginiz altin gramini giriniz: ");
                scanf("%f",&ag);

                total=775.73*ag;
                bakiye+=total;
                printf("altindan aldiginiz para: %.2f TL \n",total);
                printf("yeni bakiyeiniz: %.2f\n",bakiye);
                printf("altin bozdurma isleminiz basari ile gerceklestirilmistir\n");

                break;

            case 3:
                printf("\n\neuro satin alma islemini sectiniz \n\n");
                printf("euro nun birimi 15.33 Tl ile satin alinacak \n");
                printf("bakiyenizdeki toplam para: %.2f TL \n",bakiye);
            geri_bak:
                printf("satin alacaginiz euro birimini giriniz: ");
                scanf("%f",&eb);

                total=15.33*eb;

                if(total<=bakiye)
                {
                    bakiye-=total;
                    printf("euro ya verdiginiz para: %.2f TL \n",total);
                    printf("yeni bakiyeniz: %.2f TL\n",bakiye);
                    printf("euro satin alma isleminiz basari ile gerceklestirilmistir\n");
                }
                else
                {
                    printf("yetersiz bakiye \n");
                    goto geri_bak;
                }

                break;

            case 4:
                printf("\n\neuro bozdurma islemini sectiniz \n\n");
                printf("euro nun birimi 15.09 Tl ile bozdurulacaktir\n");
                printf("bakiyenizdeki toplam para: %.2f TL \n",bakiye);

                printf("bozdurulacak euro birimini giriniz: ");
                scanf("%f",&eb);

                total=15.09*eb;
                bakiye+=total;
                printf("euro dan aldiginiz para: %.2f TL\n",total);
                printf("yeni bakiyeniz: %.2f Tl \n",bakiye);
                printf("euro bozdurma islemi basari ile gerceklestirilmistir\n");

                break;

            case 5:
                printf("\n\ndolar satin alma islemini sectiniz \n\n");
                printf("dolarin birimi 13.59 TL ile satin alinacaktir \n");
                printf("bakiyenizdeki toplam para: %.2f TL \n",bakiye);
        tekrar_git:
                printf("satin alinacak dolar birimini giriniz: ");
                scanf("%f",&db);

                total=13.59*db;

                if (total<=bakiye)
                {
                    bakiye-=total;
                    printf("dolara verdiginiz para: %.2f TL\n",total);
                    printf("yeni bakiyeniz: %.2f Tl \n",bakiye);
                    printf("dolar satin alma islemi basari ile gerceklestirilmistir\n");
                }

                else
                {
                    printf("yetersiz bakiye \n");
                    goto tekrar_git;
                }
                break;

            case 6:
                printf("\n\ndolar bozdurma islemini sectiniz \n\n");
                printf("dolar birimini 13.38 Tl ile bozdurulacaktir\n");
                printf("bakiyenizdeki toplam para: %.2f Tl\n",bakiye);

                printf("bozdurulacak dolar birimini giriniz: ");
                scanf("%f",&db);

                total=13.38*db;
                bakiye+=total;
                printf("dolar dan aldiginiz para: %.2f TL\n",total);
                printf("yeni bakiyeniz: %.2f TL\n",bakiye);
                printf("doalr bozdurma islemi basari ile gerceklestirilmistir\n");

                break;

            default:
                printf("yanlýs secim yaptiniz \n");
                break;

       }

        goto basla;

            case 4:
                printf("\n\nhavale islemini sectiniz\n\n");
                printf("karsi hesaba para yatirilacak kisi Mehmet Ali\n");
            geri_gel:
                printf("karsi hesaba yatirilacak para tutarini giriniz: ");
                scanf("%f",&miktar);

                if(miktar<=bakiye)
                {
                    bakiye-=miktar;
                    bakiye2+=miktar;
                    printf("yatirdiginiz para miktari: %.2f TL \n",miktar);
                    printf("yeni bakiyeniz: %.2f TL\n",bakiye);
                    printf("havale isleminiz basari ile gerceklestirilmistir\n");
                }

                else
                {
                    printf("yetersiz bakiye\n");
                    goto geri_gel;
                }
                goto basla;
                break;

            case 5:
                goto bakiye;
                break;

            case 6:
                printf("\n\nkart iade islemini sectiniz\n\n");
            gel:
                printf("1-evet\n");
                printf("2-hayir\n");
                printf("hesabinizdan cikmak istiyor musunuz: ");
                scanf("%d",&secim3);

                switch(secim3)
                {
                    case 1:
                        printf("kartinizi almyi unutmayiniz \n");
                        break;

                    case 2:
                        goto basla;
                        break;
                    default:
                        printf("yanlis secim yaptiniz\n");
                        goto gel;

                }
                return 0;
                break;

            case 7:
                printf("\n\nfatura odeme islemini seciniz\n\n");
            don:
                printf("1-elektrik fatura odeme islemi\n");
                printf("2-su fatura odeme islemi\n");
                printf("3-dogal gaz fatura odeme islemi\n");
                printf("yapmak istediginiz islemi seciniz: ");
                scanf("%d",&secim4);

                switch(secim4)
                {
                case 1:
                    printf("\n\nelektrik fatura odeme islemini sectiniz\n\n");
                    printf("elektrik fatura tutarini giriniz: ");
                    scanf("%f",&ef);

                    if(ef<=bakiye)
                    {
                        bakiye-=ef;
                        printf("yeni bakiyeniz: %.2f Tl \n",bakiye);
                        printf("elektrik fatura odeme islemi basari ile gerceklestirilmistir\n");
                    }
                    else
                    {
                        printf("yetersiz bakiye\n");
                        goto basla;
                    }
                    goto basla;
                    break;

                case 2:
                    printf("\n\nsu fatura odeme islemini sectiniz\n\n");
                    printf("su fatura tutarini giriniz: ");
                    scanf("%f",&sf);

                    if(sf<=bakiye)
                    {
                        bakiye-=sf;
                        printf("yeni bakiyeniz: %.2f TL \n",bakiye);
                        printf("su fatura odeme islemi basari ile gerceklestirilmistir\n");
                    }
                    else
                    {
                        printf("yetersiz bakiye \n");
                        goto basla;
                    }
                    goto basla;
                    break;

                case 3:
                    printf("\n\ndogal gaz fatura odeme islemini sectiniz\n\n");
                    printf("dogal gaz fatura tutarini giriniz: ");
                    scanf("%f",&dgf);

                    if(dgf<=bakiye)
                    {
                        bakiye-=dgf;
                        printf("yeni bakiyeniz: %.2f Tl \n",bakiye);
                        printf("dogal gaz fatura odeme islemi basari ile gerceklestirilmistir\n");
                    }
                    else
                    {
                        printf("yetersiz bakiye\n");
                        goto basla;
                    }
                    goto basla;
                    break;

                default:
                    printf("hatali islem sectiniz\n");
                    goto don;
                    break;
                }

                default:
                    printf("hatali secim yaptiniz\n");
                    goto basla;
                    break;

    }

    bakiye:
        {
          printf("\n\nbakiye ogrenme islemini sectiniz\n\n");
          printf("bakiyeniz: %.2f TL \n",bakiye);
          goto basla;
        }

    return 0;
}

















