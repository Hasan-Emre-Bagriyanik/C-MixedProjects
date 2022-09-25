#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// 3 basamaklý sayýyý basamaklarýna ayýran programý c dilinde kodlayýn 
	
	int sayi,yuzler,onlar,birler;
	
	sayi=368;
	
	yuzler=(sayi/100);
	sayi=sayi-(100*3);
	onlar=sayi/10;
	sayi=sayi-(10*6);
	birler=sayi;
	
	printf("yuzler basamagi:  %d\n",yuzler);
	printf("onlar basamagi:  %d\n",onlar);
	printf("birler basamagi:  %d",birler);
	
	
	
	
	
	
	
	
	return 0;
}
