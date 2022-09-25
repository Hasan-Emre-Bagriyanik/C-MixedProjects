#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	/* dört basamaklý bir sayýnýný rakamlarý, ters yazýlýp, 4 ile çarpýlýrsa, sayýnýn kendisine eþit olmaktadýr.
	bu program, bahsedilen dört basamaklý sayýyý bulmaktadýr.*/
	
	int a,b,c,d;
	int sayi,sayinin_tersi;
	
	for ( a=0; a<10; a++)
		for ( b=0; b<10; b++)
			for ( c=0; c<10; c++)
				for ( d=0; d<10; d++)
				{
					sayi= a*1000+b*100+c*10+d*1; 
					sayinin_tersi= d*1000+c*100+b*10+a*1;
					
  						if (sayi==4*sayinin_tersi )
					{
						printf("sayi:  %d\n",sayi);
						printf("sayinin tersi:  %d",sayinin_tersi);
					}
				}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
