/*---------------------------------------------------------------------------------- -//
// Projet Name 			: demoSLO1_24_25
// File Name 			: fonctionsSLO.h
// Creation Date 		: 03.10.2024
// Modification Date	: 21.11.2024
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : Declaration headerfile : 
//						  - prototypes 
//						  - constantes 
//						  - enumeration
//
// RemarK				:            
//----------------------------------------------------------------------------------*/
#ifndef FUNCTIONS_SLO_H
#define FUNCTIONS_SLO_H

//-- constantes --// 
#define PI_2 3.14     // no memory space

//-- enumeration --//
typedef enum { square, rectangle2 = 6, triangle2, circle } e_surfaceChoice;

//-- prototypes --//
/* -----------------------------------------------------------------------------------
* Function Name                     : slo
* Input - Ouput - I/O parameters    : void - int - N/A
* Description                       : demonstrating the declaration of types
                                      (integer, real, enumration) and the use of
                                      operators
----------------------------------------------------------------------------------- */
int slo(void); 

/* -----------------------------------------------------------------------------------
* Function Name                     : DemonstrationSlo1
* Input - Ouput - I/O parameters    : int, char, double - e_surfaceChoice - N/A
* Description                       : demonstrating the declaration of types
                                      (integer, real, enumration) and the use of
                                      operators
----------------------------------------------------------------------------------- */
e_surfaceChoice DemonstrationSlo1(int A, char B, double DD);






#endif // !FONCTIONS_SLO_H

