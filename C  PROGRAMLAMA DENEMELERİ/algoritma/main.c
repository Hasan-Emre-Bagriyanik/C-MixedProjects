#include <stdio.h>
#include <stdlib.h>
#define eleman_sayisi 10


   void ortalama(float ort,float toplam,int d){
   	toplam=0;
   	ort=0;
    int sayi_dizisi[eleman_sayisi]={30,25,22,17,98,47,3,55,126,10};
   	for(d=5; d<10; d++)
        {

   		toplam=toplam+sayi_dizisi[d];
   		ort=toplam/5;
	   }
	    printf("Ortalama sonucunuz: %.3f",ort);
		printf("\n\n");
   }

int main() {

	  int tercih;
	  float ort;
	  int d,s;
	  int toplama_sonucu,toplam;

	  int sayi_dizisi [eleman_sayisi]={30,25,22,17,98,47,3,55,126,10};

	seciminiz:

        printf("\n\n");
		printf ("Toplama hesaplamak icin 1\n");
		printf ("Ortalama hesaplamak icin 2\n");
		printf ("Yapmak istediginiz islemi seciniz: ");
		scanf ("%d",&tercih);

	switch (tercih){
		case 1:
			goto toplama_sonucu;
			break;

		case 2:
            ortalama(ort,toplam,d);
		    goto seciminiz;
		    break;

        default:
		    	printf("Hatali secim:");
		    	goto seciminiz;
		    	break;
	}

	toplama_sonucu:
		{
		    toplam=0;
            for(s=0; s<5; s++)
            {
                toplam=toplam+sayi_dizisi[s];

			}
			printf("toplama sonucunuz: %d\n\n",toplam);
            goto seciminiz;
		}





    return 0;
}
