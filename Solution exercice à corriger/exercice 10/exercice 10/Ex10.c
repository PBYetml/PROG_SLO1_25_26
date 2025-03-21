// Canevas Ex10  C. HUBER 

#include <stdio.h>
#include <math.h>	// pour ceil et floor
#include "fonction.h"

// Fonction FtestA


// Fonction Extract



int main (void)
{
	char UserAnswer;
	// Variables pour test A
	double ValA;
	
	// Variables pour test B
	unsigned long ValB;
	

	printf("Ex10 Prenom Nom \n");
	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez un nombre float  \n");
				scanf_s("%lf%*c", &ValA);
				// suite TestA à introduire ICI				
				
				
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValB);
				// suite TestB à introduire ICI


				break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}