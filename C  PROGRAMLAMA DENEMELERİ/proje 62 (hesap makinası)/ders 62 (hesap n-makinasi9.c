#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	void toplam (float a,float b)
	{
		printf("toplam = a+b = %.2f+%.2f=%.2f \n",a,b,a+b);
	}


	int bolme (float a,float b,float c)
	{
		c= a/b;
		printf("bolme:  %f",c);

		return c;
	}





int main(int argc, char *argv[]) {


	int a,b;
	int secim;
	int secin;
	float c;

tekrar_basla:

	printf("\n\n");

	printf("******* Hesap Makinasi *******\n\n");




		printf("1-toplama islemi \n");
		printf("2-cikarma islemi \n");
		printf("3-carpma islemi \n");
		printf("4-bolme islemi \n");
		scanf("%d",&secim);

		printf("a degerini giriniz= ");
		scanf("%f",&a);
		printf("b degerini giriniz= ");
		scanf("%f",&b);




		switch (secim)
		{
			case 1 :
				toplam(a,b);
				goto tekrar_basla;
				break;

			case 2 :
				goto cikarma;
				goto tekrar_basla;
				break;

			case 3 :
				goto carpma;
				goto tekrar_basla;
				break;

			case 4 :
				bolme(a,b,c);
				goto tekrar_basla;
				break;

			default :
				printf("hatali sayi girdiniz: ");
				goto tekrar_basla;
				break;


		}


	cikarma:


			printf("cikarma = a-b = %.2f-%.2f=%.2f \n",a,b,a-b);




	carpma:

	printf("carpma = a*b = %.2f*%.2f=%.2f \n",a,b,a*b);












	return 0;
}
