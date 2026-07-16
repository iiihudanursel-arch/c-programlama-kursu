#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//while dongusu kullanarak kullanýcýdan pozitif bir deger alýn girilen degerden 1 e kadar olan degerleri ekrana yazdýrýn
	int sayi;
	printf("bir deger giriniz:");
	scanf("%d",&sayi);
	while(sayi>=1){
		printf("%d\n",sayi);
		sayi-=1;
	}
	      
	return 0;
}
