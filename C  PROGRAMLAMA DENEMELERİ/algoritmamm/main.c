#include <stdio.h>
#include <stdlib.h>





int main() {



    int toplam=0;
    float carp�m�=0;
	float sonuc;

	for(float n=1;n<=20;n++){

		for(float i=1;i<=n;i++)
        {

            sonuc=(i-n)/(i+n);
		    toplam = toplam+sonuc;
		}

		carp�m�=toplam*n;
		printf("%f\n",carp�m�);
}





	return 0;
}


