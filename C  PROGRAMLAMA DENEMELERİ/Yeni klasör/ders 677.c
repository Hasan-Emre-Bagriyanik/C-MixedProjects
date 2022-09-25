#include <stdio.h>
#include <stdlib.h>
#define SINIF 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		
 int vize[SINIF],final[SINIF],YSnotu[SINIF];
    
        for (int sayac=0; sayac<3; sayac++){
            printf("\n%d. ogrencinin vize notunu giriniz: \t",sayac+1 );
            scanf("%d",&vize[sayac]);
            printf("\n%d. ogrencinin final notunu giriniz: \t",sayac+1);
            scanf("%d",&final[sayac]);
            YSnotu[sayac]=vize[sayac]*0.4+final[sayac]*0.6;
        }
        for(int sayac2=0; sayac2<3; sayac2++){
            printf("\n%d.ogrencinin yýl sonu not: %d",sayac2+1,YSnotu[sayac2]);
        }
	

	return 0;
}
