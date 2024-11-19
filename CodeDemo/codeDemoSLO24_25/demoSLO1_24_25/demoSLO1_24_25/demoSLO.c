/*---------------------------------------------------------------------------------- -//
// Projet Name 			: demoSLO1_24_25
// File Name 			: demoSLO.c
// Creation Date 		: 19.09.2024
// Modification Date	: 10.10.2024
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo pour les slos 1 
//						  1) calculer différentes surfaces 
//
//
// Remarks				: lien pour la table ASCII :
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
#include "fonctionsSLO.h"

//-- prototypes - WARNING à évité ici 


//-- variables globales - WARNING à évité 


//-- enumération globale --//
enum e_choixSurface { carre, rectangle = 6, triangle, cercle }; // 0 - 6 - 7 - 8


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
	enum e_choixSurface choixUser;	//-- WARNING : enum uniquement si enumération déclarée dans le source .c 

	e_surfaceChoice choixUser2;		//-- lié au typedef du headerFile; 

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
	surfaceCercle_m2 = PI_2 * powf(rayon, 2); 

	//-- appel de fonction 
	slo(); 



 
}

//-- déclaration de fonction 
void ftc_test()
{

}



	



