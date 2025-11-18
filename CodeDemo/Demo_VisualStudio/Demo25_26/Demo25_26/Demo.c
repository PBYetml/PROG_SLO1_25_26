//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: Demo.c
// Date de création 	: 29.09.2025
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

//-- librairie standard --//
#include <stdio.h>
#include <stdint.h>		//-- lib pour le entier normalisé --//
#include <stdbool.h>

//-- librairie personel --//
#include "Conversion.h"

//-- librairie personel --//
// include librairie perso --> #include ""


//-- définition --//
#define FOIX_2 2
#define PI 3.1415926535

//-- constante globale --//


//----------------------------------------------------------------------------------//
//-- Nom fonction : main
//-- Paramètre entrée : - 
//-- Paramètre sortie : -
//-- Paramètre IN-OUT : -
//-- description : Programme principale
//----------------------------------------------------------------------------------//

void main()
{
	//-- Constantes --//
	//-- Réel --//

	//const float PI_v1 = 3.1415926535;
	//const float FOIX_2_2 = 2;

	//-- variables --//
	//--- Entier Standard
	//--- Signé (+/-)
	char varA;		 // 1 octet
	short varB;		 // 2 octet
	int varC;	     // 4 octet
	long long varD; // 8 octet

	//-- Non signé (+) --//
	unsigned char varE;		 // 1 octet
	unsigned short varF;	 // 2 octet
	unsigned int varG;		 // 4 octet
	unsigned long long varH; // 8 octet


	//-- Entier Normalisé --> librairie stdint.h --//
	//--- Signé (+/-)
	int8_t varI;  // 1 octet
	int16_t varJ; // 2 octet
	int32_t varK; // 4 octet
	int64_t varL; // 8 octet

	//-- Non signé (+) --//
	uint8_t varM;  // 1 octet
	uint16_t varN; // 2 octet
	uint32_t varO; // 4 octet
	uint64_t varP; // 8 octet

	//-- Type entier type booléen --//
	bool varQ;

	printf("taille d' un booléen %d [octet]", sizeof(bool));

	//-- Définition d'un type enumération locale --> e_machineEtat --> locale --//
					   //ETAT1 = 0, ETAT2 = 20, ETAT3 = 21
	enum e_machineEtat { AVANCE, RECULE = 20, TOURNE_G, TOURNE_D };

	enum e_machineEtat robot = AVANCE;

	//--Utilisation d'une énumération globale --//
	e_FORME formGeo = RECTANGLE;

	printf("\ntaille de l'enum robot %d [octet]", sizeof(robot));

	//-- Réel --//
	float varR;  // 4 octet
	double varS; // 8 octet

	//-- Déclaration des variables --//
	//-- Réel --//
	float rayon_m = 10;		// _m => metre 
							// cast implicite --> entier --> réel
	float perimetre1_m, perimetre2_m, perimetre3_m;

	//-- Instruction --// => Une instruction est composée d'opérandes (variables) et d'opérateurs (signes)
	//-- cast => (type)variable --//
	perimetre1_m = (float)FOIX_2 * (float)PI * rayon_m;

	//-- attention au cast implicite --//
	perimetre2_m = (float)(FOIX_2 * PI * rayon_m);

	//-- Appel de fonction --//
	//-- Calcul perimetre cercle --//
	perimetre3_m = CalculPerimetreCercle(rayon_m);
	
	//-- printf --//
	printf("%f \r\n %f \n", perimetre1_m, perimetre2_m, perimetre3_m);

	robot = RECULE;

	//-- Condition expression --//
	varI = 'C';
	varJ = 10;

	//-- Condition prioritair --//
	if (varI > varJ)
	{
		//-- Condition secondaire --//
		//if(0)

		varJ++; //-- post incrémentation --//
		varI = varJ;
		--varJ;
		varJ += 1;
	}
	else if (varI == varJ)
	{
		
	}
	else
	{
		varJ--;
	}

	//--Machine d'état --//
	switch (formGeo)
	{
	case TRIANGLE : 

		//instruction 1
		//instruction 2
		break;

	case TRIANGLE : 
		break;

	case RECTANGLE:
	case CARRE: 
		//instruction 1
		//instruction 2

		break;
	}

	//-- Itération --//

	//-- Boucle infini --//
	//while (1) {}
	
	i = 0;
	j = 100;

	while(i < j)
	{
		i++;
		j--; 
	}

	//-- Au minimum une fois dans la boucle --//
	i = 0;
	j = 100;

	do
	{
		i++;
		j--;

	}while (i < j);
			
	//-- pour les compteur --> connait le nombre d'itération --//
	//-- Boucle à l'infini --//
	for (;;)
	{

	}

	//-- --> 1) initialisation plusieur variables --> 2) Condition --> 3)
	for (int i = 0, j = 100; i < j; i++, j--) //-- int i --> c++ !
	{
					
	}


}

//--- fonction ---//
//----------------------------------------------------------------------------------//
//-- Nom fonction : main
//-- Paramètre entrée : rayon_m 
//-- Paramètre sortie : perimetre_m  --> float
//-- Paramètre IN-OUT : -
//-- description : calculer le perimetre d'un cercle
//----------------------------------------------------------------------------------//

float CalculPerimetreCercle(float rayon_m)
{
	//-- Déclaration et initialisation des constantes --//
	const float DEUX_PI = 2 * (float)3.1415926535;

	//-- Déclaration des variables --//
	float perimetre_m;

	//-- Calcul perimetre --//
	perimetre_m = DEUX_PI * rayon_m;

	//-- Retour perimetre --//

	return (perimetre_m);
}