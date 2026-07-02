#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// kullanýcýdan bilgilerini isteyen program
	char ad[20];
	printf("kullanici adini giriniz:");
	scanf("%s",&ad);
	printf("kullanici adi:%s\n",ad);
	int tc;
	printf("kimlik numaranizi giriniz:");
	scanf("%d",&tc);
	printf("tc kimlik numaraniz:%d\n",tc);
	float ort;
	printf("not ortalamanizi giriniz:");
	scanf("%f",&ort);
	printf("not ortalamaniz:%f",ort);
	return 0;
}
