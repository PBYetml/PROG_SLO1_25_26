//-----------------------------------------------------------------------------------//
// Nom du projet 		: EX5
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 24.11.2024
//
// Auteur 				: MBY (mathéo bonny)
//                        Philou (Ph. Bovey)
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 
#include <math.h>

// Déclaration globales des constantes
// -----------------------------------

int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	int valA = 0;			//gat value entrée par user
	char int8Val  = 125;
	unsigned char uint8Val = 125;

	// Affectations
	// ------------
	if (valA>9)
	{
		printf ("ValA limitee à 9");
	}
	else 
	{
		if (valA > 0)
		{
			for (char i = 0; i < valA; i++)
			{
				printf ("i = %d", i);
			}
		}
	}
	for (char i = 0; i < 10; i++)
	{
		printf ("int8Val = %+3d uint8Val = %+3d", int8Val, uint8Val);
		int8Val++;
		uint8Val++;
	}

	
  return(0);
}
