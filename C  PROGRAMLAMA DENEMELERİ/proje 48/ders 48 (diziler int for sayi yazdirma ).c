#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	/*int sayilar[]={10,20,30,40,50,60,70};
	int i;
	
	for(i=0;i<7;i++)
	{
		printf("%d\n",sayilar[i]);
	}
	

	
	int sayilar[]={10,15,20,35};
	int toplam=0;
	int i;
	
	for (i=0;i<4;i++)
	{
		toplam=toplam+sayilar[i];
		
	}
		printf("toplam:  %d",toplam );
	*/
	
	
	
	int sayilar[]={1,2,3,4,5,6,7};
	int faktoriyel=1;
	int i;
	
	for (i=0;i<7;i++)
	{
		faktoriyel=faktoriyel*sayilar[i];
		
	}
	 
	 	printf("istenilen sayinin faktoriyeli:  %d",faktoriyel );
	
	
	
	
	return 0;
}
