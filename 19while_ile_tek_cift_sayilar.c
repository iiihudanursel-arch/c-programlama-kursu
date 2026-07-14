#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/* sýfýrdan ona kadar olan tek ve çift sayýlarý whýle dongusuyle ekrana bastýrma
	*/ 
	printf("sifirdan ona kadar olan cift sayilar:\n");
	int i=0;
	while(i<=10){
		printf("%d\n",i);
		i+=2;
	}
	int h=1;
	printf("sifirdan ona kadar olan tek sayilar:\n");
	while(h<=10){
		
		printf("%d\n",h);
		h+=2;
	}
	
	return 0;
}
