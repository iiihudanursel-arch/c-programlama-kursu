#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//iç içe if kullanýmý
	//kullanýcýdan ýký adet sayý alýp buyukluk kucukluk durumuna gore ekrana yazdýrma
	int a;
	int b;
	printf("2 adet sayi giriniz:\n");
	scanf("%d%d",&a,&b);
	if(a>=b)
	{
		if(a>b)
		{
			printf("%d sayiniz %d saayinizdan buyuktur.",a,b);
		}
		else
		{
			printf("%d sayiniz %d sayiniza esittir.",a,b);
		}
		
	}
	else
	{
		printf("%d sayiniz %d sayinizdan buyuktur.",b,a);
	}

	
	
	
	
	
	
	
	
	return 0;
}
