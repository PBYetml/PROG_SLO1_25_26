//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: demo.c
// Date de cr�ation 	: 29.09.2025
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo pour SLO1 25-26
//
//
// Remarques :            
//----------------------------------------------------------------------------------//
//-- librairie standard --// 
#include <stdio.h>

//-- librairie perso --//  


//-- d�finition --// 
#define FOIX_2 2
#define PI 3.14 

//-- constante gloable --// 


//----------------------------------------------------------------------------------//
//-- nom fct : main
//-- param�tre entr�e : -
//-- param�tre sortie : - 
//-- param�tre IN-OUT : - 
//-- description : programme principal =>
//----------------------------------------------------------------------------------//
void main() 
{
	//-- constante --// 
	//-- reel 
	//-- � �viter -> si possible -> raison gestion m�moire 
	/*const float PI_v1 = 3.14;
	const float FOIX_2_2 = 2;*/



	//-- variables --//
	//-- 

	//-- Reel
	float rayon_m = 10;          // _m => metre 
								 // cast implcite -> entier -> reel
	float perimetre1_m, perimetre2_m;



	//-- une imstruction  est compos� d'op�randes (variable) et d'op�rateur (signe) --//
	//-- cast => (type)variable 
	perimetre1_m = (float)FOIX_2 * (float)PI * rayon_m;

	//-- attention au cast implicite
	perimetre2_m = (float)(FOIX_2 * PI * rayon_m);

	//-- appel de fct 
	//--> printf 
	printf("%f \r\n %f", perimetre1_m, perimetre2_m);
	
}




