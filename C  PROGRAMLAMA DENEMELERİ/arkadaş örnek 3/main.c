#include <stdio.h>
#include <stdlib.h>



    void toplama (float a,float b){

        printf("birinci sayiyi giriniz: ");
        scanf("%f",&a);
        printf("ikinci sayiyi giriniz: ");
        scanf("%f",&b);


       printf("%f+%f=%f",a,b,a+b);
       printf("Toplama isleminizin sonucu: %f",a+b);
    }
   void bolum (float a,float b){

       printf("birinci sayiyi giriniz: ");
        scanf("%f",&a);
        printf("ikinci sayiyi giriniz: ");
        scanf("%f",&b);

       printf("%f/%f=%f",a,b,(float)a/b);

   }

int main()
{
   int secim;
   float bolum,toplama,cikarma,carpma;
   float a,b;

    baslangic:
      printf("\n\n");
      printf("Yapmak istediginiz islemi seciniz: \n");
      printf("Toplama icin 1\n");
      printf("Cikarma icin 2\n");
      printf("Carpma icin 3\n");
      printf("Bolme icin 4\n");
      scanf("%d",&secim);

    switch(secim){
      case 1:
          toplama(a,b)
          goto baslangic;
      break;

      case 2:
          goto cikarma;
      break;

      cikarma:

        printf("birinci sayiyi giriniz: ");
        scanf("%f",&a);
        printf("ikinci sayiyi giriniz: ");
        scanf("%f",&b);

          printf("Cikarma isleminizin sonucu: %f",a-b);
          goto baslangic;


      case 3:

        printf("birinci sayiyi giriniz: ");
        scanf("%f",&a);
        printf("ikinci sayiyi giriniz: ");
        scanf("%f",&b);

          printf("Carpma isleminizin sonucu: %f",a*b);
          goto baslangic;
      break;
      case 4:

          printf("Bolme isleminizin sonucu: %f",(float)a/b);
          goto baslangic;
       break;

      default:
          printf("Hatali secim yaptiniz.");
          goto baslangic;
       break;
    }



















    return 0;
}
