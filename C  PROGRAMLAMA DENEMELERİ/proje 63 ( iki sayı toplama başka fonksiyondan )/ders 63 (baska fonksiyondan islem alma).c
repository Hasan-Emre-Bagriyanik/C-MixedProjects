#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int toplam (int s1,int s2)
	{
		int s3;
		s3=s1+s2;
		return s3;
	}
	



int main(int argc, char *argv[]) {
	
	int s1,s2;
	
	printf("toplayacaginiz ilk sayiyi giriniz:  ");
	scanf("%d",&s1);
	printf("toplayacaginiz ikinci sayiyi giriniz:  ");
	scanf("%d",&s2);
	
	int a;
	
	a=toplam(s1,s2);
	printf("toplam:  %d",a);
	
	
	
	
	
	
	
	return 0;
}
