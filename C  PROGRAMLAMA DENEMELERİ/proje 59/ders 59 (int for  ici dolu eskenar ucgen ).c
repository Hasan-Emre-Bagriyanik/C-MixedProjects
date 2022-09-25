#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	// yildizlarla içi dolu üçgen yapimi

	int i,j,boy;

    printf("taban degerini giriniz: ");
    scanf("%d",&boy);
    printf("\n\n");

	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=boy-i;j++)
		{
			printf(" ");
		}
        //burdaki j yi 2'den baslatma sebebim 1 yaptigim zaman
        //ucgenin en ust tepesin de 2 tane yıldız olur ama 2'den baslatırsak
        //1 tane yıldız olur
		for(j=2;j<=i;j++)
		{
			printf("*");
		}
        //bu araya kadar ters dik ucgen yaptık
        //buraya kadar zaten sen yapmistin burdan sonrasini ise senin usteki for dongulerini
        //yer degisitirerek aldım cok zor bisey degil deneme yanılma yolu ile yapilir

		for(j=1;j<=i;j++)
		{
			printf("*");
		}

		for(j=1;j<=boy-i;j++)
		{
			printf(" ");
		}

        //buraya kadar da düz dik ucgeni ters dik ucgenin yanına koyduk
		printf("\n");
	}





	return 0;
}
