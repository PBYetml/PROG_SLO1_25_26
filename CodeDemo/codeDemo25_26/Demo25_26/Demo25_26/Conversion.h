//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: Conversion.h
// Date de création 	: 03.11.2025
// Date de modification : 14.11.2025
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 1.2
//
// Description          : demo pour SLO1 25-26
//						  -> déclaration #define numérique 
//						  -> prototype  
//						  -> démo énumération globale (plusieurs fichier) 
//						  -> déclaration #define sans valeur
// Remarques :        
//----------------------------------------------------------------------------------//

#ifndef CONVERSION_H  //-> par convention nomme le nom du fichier 
#define CONVERSION_H

//-- déclaration de définition sans valeur pour version logiciel
//#define METHODE_1
//#define METHODE_2
#define METHODE_3

//-- déclaration définition --// 
#define PI				3.14
#define NB_NOTES_MAX	3

//-- déclaration type énumération --// 
typedef enum { CERCLE, ELIPSE, CARRE, RECTANGLE, TRIANGLE } e_FORME;

//-- prototype --// 
float CalculPerimetreCercle(float rayon_m);
float CalculMoyenne(); 

#endif // !CONVERSION_H  //-> par convention nomme le nom du fichier 

