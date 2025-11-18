//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: ConversionPerso.c
// Date de création 	: 03.11.2025
// Date de modification : xx.xx.20xx
//
// Auteur 				: Noé Alam
//
// Version				: 0.1
//
// Description          : Demonstration programmation 
//
//
// Remarques :            
// 						  					
//----------------------------------------------------------------------------------//

//----------------------------------------------------------------------------------//
//-- Nom fonction : main
//-- Paramètre entrée : rayon_m 
//-- Paramètre sortie : perimetre_m  --> float
//-- Paramètre IN-OUT : -
//-- description : calculer le perimetre d'un cercle
//----------------------------------------------------------------------------------//

#define _USE_MATH_DEFINES

//-- librairie standard --//
#include <math.h>

//-- librairie personel --//
#include "Conversion.h"

float CalculPerimetreCercle(float rayon_m)
{
	//-- Déclaration et initialisation des constantes --//
	const float DEUX_PI = 2 * M_PI;

	//-- Déclaration des variables --//
	float perimetre_m;

	//-- Calcul perimetre --//
	perimetre_m = DEUX_PI * rayon_m;

	//-- Retour perimetre --//

	return (perimetre_m);
}