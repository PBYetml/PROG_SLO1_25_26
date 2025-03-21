// union sert a séparer un gros paquet en plusieur donnée et vise versa

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "Header.h"

int main() {
	int i;
	u_vision dataSerial; //variable de type union u_vision
	for (i = 0; i < 8; i++) {
		dataSerial.tab[i] = 'A'+i;
		printf("%c\n", dataSerial.tab[i]);
	}

	printf(" %lf\n", dataSerial.value);
	printf(" %llx\n", dataSerial.value);

	system("pause");
	return 0; 
}