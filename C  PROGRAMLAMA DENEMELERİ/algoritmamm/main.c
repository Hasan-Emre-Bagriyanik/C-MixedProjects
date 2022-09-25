#include <stdio.h>
#include <stdlib.h>





int main() {



    int toplam=0;
    float carpýmý=0;
	float sonuc;

	for(float n=1;n<=20;n++){

		for(float i=1;i<=n;i++)
        {

            sonuc=(i-n)/(i+n);
		    toplam = toplam+sonuc;
		}

		carpýmý=toplam*n;
		printf("%f\n",carpýmý);
}





	return 0;
}


