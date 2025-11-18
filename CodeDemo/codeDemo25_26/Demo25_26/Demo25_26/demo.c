//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: demo.c
// Date de création 	: 29.09.2025
// Date de modification : 14.11.2025
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 1.1
//
// Description          : demo pour SLO1 25-26
//
// Remarques			: une constante numérique entière -> ex 10 prend 4 octets 
//						  une constante numérique réelle -> ex 3.14 prend 8 octets             
//----------------------------------------------------------------------------------//

//-- librairie standard --// 
#include <stdio.h>				// lib pour les entrée - sortie (console - lecture clavier)
#include <stdint.h>				// lib pour le entier normalisé 
#include <stdbool.h>			// lib pour le type bool 

//-- librairie perso --//  
#include "Conversion.h"

//-- définition --// 
#define FOIX_2 2
#define ANNEES "25-26"
#define VERSION 1.1
 
//-- constante gloable --// 




//----------------------------------------------------------------------------------//
//-- nom fct : main
//-- paramètre entrée : -
//-- paramètre sortie : - 
//-- paramètre IN-OUT : - 
//-- description : programme principal =>
//----------------------------------------------------------------------------------//
void main()
{
	//-- constante --// 
	//-- reel 
	//-- à éviter -> si possible -> raison gestion mémoire 
	/*const float PI_v1 = 3.14;
	const float FOIX_2_2 = 2;*/

	//-- variables --//
	//--- Entier Standard 
	//--- Signé (+/-)
	char varI;		// 1 octet
	short varJ;		// 2 octets 
	int varK, i, j;			// 4 octets			int = long 
	long long varL;	// 8 octets 

	//--- Non signé (+) 
	unsigned char varM;		// 1 octet
	unsigned short varN;	// 2 octets 
	unsigned int varO;		// 4 octets			int = long 
	unsigned long long varP;	// 8 octets 


	//--- Entier Notrmalisé -> librairie stdint.h 
		//--- Signé (+/-)
	int8_t varA;		// 1 octet
	int16_t varB;		// 2 octets 
	int32_t varC;			// 4 octets			int = long 
	int64_t varD;	// 8 octets 

	//--- Non signé (+) 
	uint8_t varE;		// 1 octet
	uint16_t varF;		// 2 octets 
	uint32_t varG;			// 4 octets			int = long 
	uint64_t varH;	// 8 octets 

	//-- type entier type booléen --//
	bool varS;		// 1 octet

	//--> info user 
	printf("Code demo - SLO - %s - %2.1f \n", ANNEES, VERSION);

	//--> message user -> info taille 
	printf("\n-> taille d'un booleen %d [o]", sizeof(bool));

	//--définition d'un type enumération -> e_machineEtat -> locale --// 
					  //ETAT1 = 0, ETAT2 = 20, ETAT3 = 21
	enum e_machineEtat { AVANCE, RECULE = 20, TOURNE_G, TOURNE_D, ROTATION };
	enum e_machineEtat robot = AVANCE;

	//-- utilisation d'une énumération globale -> e_FORME --// 
	e_FORME formeGeo = RECTANGLE;

	//-- MAJ de la variable enum
	robot = RECULE;

	printf("\n-> taille de l'enum robot %d [o]", sizeof(robot));

	//--- Reel 
	//-> taille 4 octets
	float perimetre1_m, perimetre2_m, perimetre3_m, vF;
	float moyenne;

	// cast implcite -> entier -> reel
	float rayon_m = 10;          // _m => metre 

	//-> taille 8 octets 
	double varR;

	//-- une imstruction  est composé d'opérandes (variable) et d'opérateur (signe) --//
	//-- cast => (type)variable 
	perimetre1_m = (float)FOIX_2 * (float)PI * rayon_m;

	//-- attention au cast implicite
	perimetre2_m = (float)(FOIX_2 * PI * rayon_m);

	//-- appel de fct 
	//--> calcul perimetre ccercle 
	perimetre3_m = CalculPerimetreCercle(rayon_m);

	//--> calcul d'une moyenne
	moyenne = CalculMoyenne();

	//-> message user 
	//--> perimètre 
	printf("\n->demo calcul permimetre perimetre1 : %f \n", perimetre1_m);
	printf("perimetre2 %f \n", perimetre2_m);
	printf("perimetre3 %f", perimetre3_m);

	//--> moyenne
	printf("\n-> calul moyenne %3.2f", moyenne);

	//-- condition -> expression
	varI = 'C';
	varJ = 10;

	//-- condition prioritaire 
	if (varI > varJ)
	{
		//-- condition secondaire 
		//if (0);
		varJ++;				//post incrémentation 
		varI = varJ;
		--varJ;				//pre incrémentation
		varJ += 1;			// varJ = varJ + 1

	}
	else if (varI == varJ)
	{

	}
	else
	{
		varJ--;
	}


	//-- machine état --//
	switch (formeGeo)
	{
	case CERCLE:
		//-- instruction 1... 
		//-- instruction 2... 
		break;

	case TRIANGLE:
		break;

	case RECTANGLE:
	case CARRE:
		//-- instruction 1... 
		//-- instruction 2... 

		break;

	default:
		break;
	}


	//-- itération  --// 

	//--> 1 contion  -> 2 execution si vrai 
	//-- boucle infinie 
	//while (1) {}

	i = 0; 
	j = 100; 
	while(i < j)
	{ 
		i++; 
		j--; 
	}

	//-- au minium une fois dans la boucle
	i = 0;
	j = 100;
	do 
	{
		i++;
		j--;
	} while (i < j);

			
	//-- pour les compteur --> connait le nombre d'itération
	//-- boucle à l'infini --// 
	//for (;;)
	{

	}

	//->1) initialisation plusieurs variables 2) condition 3) 
	for(i = 0, j = 100; i < j; i++, j--)
	{
	
	}




}









