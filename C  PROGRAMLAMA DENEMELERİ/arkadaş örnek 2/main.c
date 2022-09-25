#include <stdio.h>
#include <stdlib.h>




  void toplama (int a,int b){
        printf("%d+%d=%d",a,b,a+b);
  }
  void bolme (float a,float b){
        printf("%f/%f=%f",a,b,(float)a/b);
   }

  int main(){


  int secim,toplama,cikarma,carpma;
  float bolme,a,b;
  a=16;
  b=3;

  baslangic:
      printf("Lutfen yapmak istediginiz islemi seciniz: \n");
      printf("Toplama icin 1\n");
      printf("Cikarma icin 2\n");
      printf("Carpma icin 3\n");
      printf("Bolme icin 4\n");
      scanf("%d",&secim);

   switch(secim){

   case 1:

    toplama=a+b;
    printf("Toplama sonucunuz: %d\n",toplama);
    goto baslangic;
   break;

   case 2:
   goto cikarma;
   break;

     cikarma:
     cikarma=a-b;
     printf("Cikarma sonucunuz: %d\n",cikarma);
     goto baslangic;


   case 3:
       carpma=a*b;
       printf("Carpma sonucunuz: %d\n",carpma);
       goto baslangic;
     break;

   case 4:
       bolme=a/b;
       printf("Bolme sonucunuz: %f\n",(float)bolme);
       goto baslangic;
    break;

   default:
       printf("Hatali secim yaptiniz.\n");
       goto baslangic;
    break;

  }




    return 0;
}
