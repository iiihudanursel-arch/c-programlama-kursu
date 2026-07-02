#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("hello world\n");
	int sayi=5;
	printf("sayimiz:%d\n",sayi);
	float sayi2=5.5661;
	printf("2.sayimiz:%.4f\n",sayi2);
	double sayi3=5.6565456;
	printf("3.sayiniz:%.4lf",sayi3);
	char kitap[20]="malefiz";
	printf("kitap adiniz %s\n",kitap);
	char adbas='a';
	printf("bas harfiniz:%c\n",adbas);
	printf("1.sayiniz:%d  2.sayiniz:%.4f  3.sayiniz:%.7lf  bas harfiniz:%c",sayi,sayi2,sayi3,adbas);
	
	
	return 0;
}
