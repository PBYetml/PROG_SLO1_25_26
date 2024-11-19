//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: 20.09.2024
// Date de modification : 20.09.2024
//
// Auteur 				: Kirian Gruber
//
// Version				: 0.x
//
// Description          : Projet Exercice ayant pour but de crée un code permettant de calculer la surface d'un carré, d'un triangle et d'un triangle.
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//


//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s
                    // Nouveauté du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf
#include <math.h>
#include <corecrt_math_defines.h>

#define _USE_MATH_DEFINES
//-- ancienne methode de déclaration des constantes --//
/*
#define carre 1
#define rectangle 2
#define triangle 3
#define cercle 4
*/

//-- liste des enumérations --//
typedef enum SURFACE
{
    carre = 1,
    rectangle,
    triangle,
    cercle,
};

//-- début de la fonction main --//
int main(void)
{
    //-- Déclaration de variables --//
    //type nom_variable
    //type entier
    int longueurCarre_m = 0, largeurCarre_m = 0, rayon_m = 0, base_m = 0, hauteur_m = 0, longueurRectangle_m = 0, largeurRectangle_m = 0;
    
    //-- ancienne variable locale utilisée pour le selon. A été remplacée par l'enumération --//
    
    int surfaceVoulue;
    
    
    // type réel
    float surfaceCarre_m2 = 0, surfaceRectangle_m2 = 0, surfaceTriangle_m2 = 0, surfaceCercle_m2 = 0;

    while (1)
    {

        //-- Séléction de quel surface nous voulons calculer entre les quatres options disponible. --//
        printf("Choisissez le calcul de surface voulu entre le carre, le rectangle, le triangle et le cercle");
        printf("\nPour le carre ecrivez 1");
        printf("\nPour le rectangle ecrivez 2");
        printf("\nPour le triangle ecrivez 3");
        printf("\nPour le cercle ecrivez 4");
        printf("\nEntrer le chiffre de la surface voulue : ");
        scanf_s("%d", &surfaceVoulue);                          


        switch(surfaceVoulue)
        {
            case carre:

                printf("Entrer la valeur de la longueur du carre : ");
                scanf_s("%d", &longueurCarre_m);
                printf("longueurCarre_m = %d", longueurCarre_m);
                largeurCarre_m = longueurCarre_m;
                /*
                printf("\nEntrer la valeur de la largeur du carre : ");
                scanf_s("%d", &largeurCarre_m);
                */
                printf("\nlargeurCarre_m = %d", largeurCarre_m);

                //Calcule de la surface du carré
                surfaceCarre_m2 = longueurCarre_m * largeurCarre_m;
                //surfaceCarre_m2 = powf(longueurCarre_m, 2); // voici comment faire pour calculer avec un carré

                //Affiche la valeur de la surface du carré
                printf("\nsurfaceCarre_m2 = %f", surfaceCarre_m2);

                break;

            case rectangle:

                printf("\nEntrer la valeur de la longueur du rectangle : ");
                scanf_s("%d", &longueurRectangle_m);
                printf("longueurRectangle_m = %d", longueurRectangle_m);
                printf("\nEntrer la valeur de la largeur du rectangle : ");
                scanf_s("%d", &largeurRectangle_m);
                printf("largeurRectangle_m = %d", largeurRectangle_m);

                //Calcule de la surface du rectangle
                surfaceRectangle_m2 = longueurRectangle_m * largeurRectangle_m;

                //Affiche la valeur de la surface du rectangle
                printf("\nsurfaceRectangle_m2 = %f", surfaceRectangle_m2);

                break;

            case triangle:

                printf("\nEntrer la valeur de la base : ");
                scanf_s("%d", &base_m);
                printf("base_m = %d", base_m);
                printf("\nEntrer la valeur de la hauteur : ");
                scanf_s("%d", &hauteur_m);
                printf("hauteur_m = %d", hauteur_m);

                //Calcule de la surface du triangle
                surfaceTriangle_m2 = (base_m * hauteur_m) / 2;

                //Affiche la valeur de la surface du triangle
                printf("\nsurfaceTriangle_m2 = %f", surfaceTriangle_m2);

                break;

            case cercle:

                printf("\nEntrer la valeur du rayon : ");
                scanf_s("%d", &rayon_m);
                printf("rayon_m = %d", rayon_m);

                //Calcule de la surface du cercle
                surfaceCercle_m2 = M_PI * (rayon_m * rayon_m);
                //surfaceCercle_m2 = M_PI * powf(rayon_m, 2);
                //Affiche la valeur de la surface du cercle
                printf("\nsurfaceCercle_m2 = %f", surfaceCercle_m2);

                break;

            default:

                printf("Une erreur est survenue, veuillez recommencer l'operation et bien suivre les instructions donnees.");

                break;

        }return(surfaceCercle_m2, surfaceTriangle_m2, surfaceCarre_m2, surfaceRectangle_m2);
        
    }

 
}