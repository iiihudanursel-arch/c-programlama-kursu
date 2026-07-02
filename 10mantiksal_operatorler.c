#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//logical operators
	// && || ! 
	
	int x=25;
	int y=20;
	printf("%d\n",(x>10&&y>10));
	printf("%d\n",(x>30||y>30));
	printf("%d",!(x>30||y>30));

	return 0;
}
