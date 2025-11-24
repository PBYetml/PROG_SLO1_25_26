//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 28.09.2021
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Version 				: 0.3
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>	// pour usage printf


int main(void)
{
	// Déclaration cas A
	short A1 = 400;

	short A2 = 500;

	short ResA1;

	long ResA2;

	// Déclaration cas B
	unsigned short ValB;
	
	unsigned char HighValB;

	unsigned char LowValB;

	// Déclaration cas C
	unsigned short C1;

	unsigned short C2;

	unsigned short ResC;


	// Déclaration cas D
	short D1;

	short D2;

	short ResD1;

	short ResD2;

	// Traitement cas A
	ResA1 = A1 * A2;

	ResA2 = A1 * A2;

	printf ("Traitement cas A \n");

	printf ("ResA1 = A1 * A2 soit  %d * %d = %d \n",A1, A2, ResA1);
	printf ("ResA2 = A1 * A2 soit  %d * %d = %d \n",A1, A2, ResA2);
	
	
	// Traitement cas B
	ValB = 0x1234;

	HighValB = ValB >> 8;

	LowValB = ValB & 0x00FF;

	printf ("Traitement cas B \n");

	printf ("ValB %04x HighValB = %02x LowValB = %02x\n",ValB, HighValB, LowValB);
	
	
	// Traitement cas C
	C1 = 0x5555;

	C2 = 0x0F0F;

	printf ("Traitement cas C \n");

	ResC = C1 | C2;
	printf ("ResC = %04x OU %04x = %04x \n",C1, C2, ResC);

	ResC = C1 & C2;
	printf ("ResC = %04x ET %04x = %04x \n",C1, C2, ResC);

	
	// Traitement cas D
	D1 = 1325;

	D2 = 7;

	ResD1 = D1 / D2; // Division 

	ResD2 = D1 % D2; //Stockage du rest 

	printf ("Traitement cas D \n");

	printf ("Division de %4d par %4d = %4d Reste = %4d \n",D1, D2, ResD1, ResD2);
	
  return(0);
}
