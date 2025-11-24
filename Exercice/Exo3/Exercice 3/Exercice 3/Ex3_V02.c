//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice 3
// Nom du fichier 		: Ex3_V02.c
// Date de création 	: 10.11.2025
// Date de modification : 10.11.2025
//
// Auteur 				: NAM
//                        
//
// Description          : Exercice 3 --> voir donnée
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>   // pour usage printf
#include <stdint.h>  // uniformisation du type entier

//-- Déclaration globales des constantes --//
const int16_t VMAX = 10000;       // 16 bits signé
const int16_t VMIN = -10000;      // 16 bits signé
const double  PI = 3.14159;     // réel 64 bits

int main(void)
{
    //-- Déclarations locales des variables sans affectation --//
    double surface;   // réel 64 bits
    double rayon;     // réel 64 bits
    char lettre;      // caractère

    //-- Déclarations locales des variables avec affectations --//
    int16_t  tension = VMAX;           // 16 bits signé
    uint32_t bigVal = 0x12345678;      // valeur hexadécimale

    //-- Déclaration d’un type énuméré --//
    enum e_TypeFigure { CERCLE, ELLIPSE, CARRE, RECTANGLE, TRIANGLE };
    enum e_TypeFigure figure = CARRE;

    //-- Affectations --//
    tension = 9500;
    lettre = 66;     // ASCII = 'B'
    rayon = 8.5;   
    surface = PI * rayon * rayon;

    //-- Affichages pour contrôle --//
    printf("Tension = %d \n", tension);
    printf("BigVal = %lx \n", bigVal);
    printf("Lettre = %c \n", lettre);
    printf("Figure = %d \n", figure);
    printf("Rayon = %8.3f   Surface = %8.3f \n", rayon, surface);

    return 0;
}
