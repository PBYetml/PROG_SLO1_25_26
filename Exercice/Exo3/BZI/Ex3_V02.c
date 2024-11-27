//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 08.11.2024
//
// Auteur 				: MBZ (Mohamad Bilal Zitouni )
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


enum e_Typefigure { cercle, ellipse, carre, rectangle, triangle, };
// Déclaration globales des constantes
// -----------------------------------
const short VMAX = 10000;
const short VMIN = -10000;
const double PI = 3.14159;
int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	double rayon = 8.5000;
	double Surface = 0;
	char lettre = 'B';

	// déclaration/Affectations
	// ------------
	short tension = 0;
	int bigVal = 0XBC614E;


	//instruction

	Surface = 2 * PI * (rayon * rayon);
	tension =VMAX-500;
    
	// Affichages pour controle
	printf ("Tension = %d \n",tension);
 	printf ("BigVal = %d \n",bigVal);
	printf ("Lettre  = %c \n",lettre);
	printf ("Figure = %d \n",carre );
	printf ("Rayon = %8.3f Surface = %8.3f \n",rayon,Surface );

  return(0);
}
