#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("int hafizada %d byte yer tutar\n",sizeof(int));
	printf("char hafizada %d byte yer tutar\n",sizeof(char));
	printf("float hafizada %d byte yer tutar\n",sizeof(float));
	printf("double hafizada %d byte yer tutar\n",sizeof(double));
	int sayi=55;
	char harf='a';
	float sayi2=5.555;
	printf("sayi degiskeni hafizada %d byte yer tutar\n",sizeof(sayi));
	printf("sayi2 degiskeni hafizada %d byte yer tutar\n",sizeof(sayi2));
	printf("harf degiskeni hafizada %d byte yer tutar\n",sizeof(harf));
	return 0;
}
