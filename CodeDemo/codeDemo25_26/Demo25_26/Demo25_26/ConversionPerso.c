//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: ConversionPerso.c
// Date de création 	: 03.11.2025
// Date de modification : 14.11.2025
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 1.1
//
// Description          : demo pour SLO1 25-26
//
// Remarques			: exemple d'opérateur : 
//						  opérateur mathémnatique		   : +, -, *, /					-> avec E ou R 
//														   : %							-> modulo avec uniquement E
//						  opérateur logique				   : &, |, !, ^, ~, << , >>		-> ET - OU - NOT - /!\ XOR - inversion binaire 	 
//						  opérateur de condition numérique : ==, !=, <, <=, >, >=   
//						  opérateur de condition logique   : ||, && 
//----------------------------------------------------------------------------------//
#define _USE_MATH_DEFINES		// pour utiliser des constantes liés à la librairie 
								// math 

//-- librairie standard --// 
#include <math.h>
//#include <corecrt_math_defines.h>		// autre possibilité pour utiliser les cst de
										// de la librairie math

//-- librairie perso --//  
#include "Conversion.h"


//----------------------------------------------------------------------------------//
//-- nom fct : CalculPerimetreCercle
//-- paramètre entrée : rayon_m (reel)
//-- paramètre sortie : perimetre_m (reel)
//-- paramètre IN-OUT : - 
//-- description	  : calculer le perimètre d'un cercle
//----------------------------------------------------------------------------------//
float CalculPerimetreCercle(float rayon_m)
{
	//-- déclaration et initialisation cst --// 
	const float DEUX_PI = 2 * M_PI;

	//-- déclaration variable --// 
	float perimetre_m;

	//-- calcul perimetre --//
	perimetre_m = DEUX_PI * rayon_m;

	//-- retour perimetre --// 
	return (perimetre_m);
}

//----------------------------------------------------------------------------------//
//-- nom fct : CalculMoyenne
//-- paramètre entrée : - 
//-- paramètre sortie : moyenne (reel 4 octet) 
//-- paramètre IN-OUT : - 
//-- description	  : calcul la moyenne d'une nombre de notes définis 
//----------------------------------------------------------------------------------//
float CalculMoyenne()
{
	//-- déclaration de variables --// 
	float note1 = 3, note2 = 4.5, note3 = 6.0, somme = 0, moyenne; 

	//-- calcul de la somme 
	//-- méthode 1 
	#if defined (METHODE_1)					//-> début pragma pour du versionning de soft
	somme = note1 + note2 + note3; 

	#elif defined (METHODE_2)				//-> pragma pour du versionning de soft
	//-- méthode 2 
	somme = somme + note1; 
	somme = somme + note2; 
	somme = somme + note3; 

	#elif defined (METHODE_3)				//-> pragma pour du versionning de soft
	//-- méthode 3
	somme += note1; 
	somme += note2;
	somme += note3;
	#endif									//-> fin pragma pour du versionning de soft

	//-- calcul de la moyenne prédéfini
	moyenne = somme / NB_NOTES_MAX; 
	
	return moyenne; 
}

