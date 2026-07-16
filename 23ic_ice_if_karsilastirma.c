#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* kullanýcýdan ýký adet sayý gýrýlmesýný 2 tam sayýdan ýlkýyle ýkýncýsýný karsýlastýrýp esýt olup 
	olmadýgýný eger esýt degýlse ýkýncýsýnden buyuk mu kucuk mu old ekrana yazdýran program*/
	
	
	int s1,s2;
	printf("karsilastirmak istediginiz birinci sayiyi giriniz:");
	scanf("%d",&s1);
	printf("karsilastirmak istediginiz ikinci sayiyi giriniz:");
	scanf("%d",&s2);
	if(s1==s2){
		printf("iki sayiniz birbirine esittir ");
	}
	else{
		printf("iki sayiniz birbirine esit degildir\n");
		if(s1>s2){
			printf("%d sayiniz %d sayinizdan daha buyuktur",s1,s2);
		}
		else{
			printf("%d sayiniz %d sayinizdan daha buyuktur",s2,s1);
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}
