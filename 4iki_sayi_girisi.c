#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//kullanýcýdan iki adet sayý alýp ekrana yazdýran program
	int sayi1,sayi2;
	printf("birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("girdiginiz sayilar: %d - %d",sayi1,sayi2);
	
	return 0;
}
