#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	// klavyeden al�nan boy de�erine g�re dik ��gen yap�m�
	
	int i,j,boy;
	
	printf("boy degerini giriniz:  ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	return 0;
}
