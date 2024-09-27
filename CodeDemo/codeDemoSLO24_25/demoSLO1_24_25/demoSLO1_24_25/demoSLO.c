/*---------------------------------------------------------------------------------- -//
// Nom du projet 		: demoSLO1_24_25
// Nom du fichier 		: demoSLO.c 
// Date de création 	: 19.09.2024
// Date de modification : 24.09.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo pour les slos 1 
//						  1) calculer différentes surfaces 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------*/
//-- CONSTANTE - WARNING à évité ici 
#define _USE_MATH_DEFINES				// pour utiliser certaines constante à redéfinir 

//-- librairies standards --//
#include <math.h>						// pour les différentes fonctions mathématique 

//-- appel de headerfile  -> vos fichier headerfile 

//-- prototypes - WARNING à évité ici 

//-- variables globales - WARNING à évité 

//-- déclaration de fonction 


/* ----------------------------------------------------------------------------------
// -> NOM FCT					:	main 
// -> PARAMETRES ENTRES			:	-
// -> PARAMETRE SORTIE			:   -
// -> PARAMETRE IN/OUT -> ptr	:   - 
// -> description				:	fonction principale -> début de programme 
 ----------------------------------------------------------------------------------*/
void main() 
{   
	//-- déclaration de variable --// 
	//-- type entier 
	int longueur_m = 100, largeur_m = 10, rayon = 1; 

	//-- type reel 
	float surfaceCarre_m2, surfaceRectangle_m2, surfaceTriangle_m2, surfaceCercle_m2; 

	//-- calculs surface --// 
	//-- carré 
	surfaceCarre_m2 = longueur_m * longueur_m; 
	surfaceCarre_m2 = powf(longueur_m, 2); 

	//-- rectangle 
	surfaceRectangle_m2 = longueur_m * largeur_m;
	
	//-- triangle 
	surfaceTriangle_m2 = (longueur_m * largeur_m) / 2; 
	
	//-- cercle 
	surfaceCercle_m2 = M_PI * (rayon * rayon); 
	surfaceCercle_m2 = M_PI * powf(rayon, 2); 

}

//-- déclaration de fonction 




	



