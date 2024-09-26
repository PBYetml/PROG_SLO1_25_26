// commentaire sur une ligne
// date creation : 25.09.2024

// commenter la ligne

/*

ceci est un commentaire
sur plusieur ligne

*/
//-- appel de librairies
#include <math.h> //librairie standard
#include <stdio.h>

//utilistion
#include <corecrt_math_defines.h>

//-- appel de headfile -> nos fichier headerfile





//-- Prototype -WARNING à éviter ici

//--variable globale -WARNING à éviter

//-- CONSTANTE - WARNING à évité ici
enum SURFACE{ Carre = 1, Rectangle = 2, Triangle = 3, Cercle = 4  }geometrie;
//-- déclaration de fonction

//-- fonction pricipale -> main
// type_de_sortie nom_fct (param-entrée1,param-entrée2,...
void main() {
  
    //--décalration de variable--//
    // type nom_variable
    //type entier
    int longueur_m, largeur_m, hauteur_m, rayon_m;
    int geometrie;
    //type reel
    float surfaceCarre_m2 , surfaceRectangle_m2 , surfacetriangle_m2 , surfaceCercle_m2 ;
    while (1) {
        //instruction 1
        printf("Choisez quel objet géometrique vous vouler calculer la surface ?\n\n\n");
        printf("pour la surface d'un carré taper 1\n");
        printf("pour la surface d'un rectangle taper 2\n");
        printf("pour la surface d'un triangle taper 3\n");
        printf("pour la surface d'un rectangle taper 4\n");
        scanf("%d", &geometrie);
        switch (geometrie) {
        case Carre:
            printf("Quel cote veux-tu mesurer ?\n");
            scanf("%d", &longueur_m);
            surfaceCarre_m2 = longueur_m * longueur_m;
            printf("l'air du carré est de %f \n", surfaceCarre_m2);
            break;

        }
        switch (geometrie) {
        case Rectangle:
            printf("Quel longueur veux-tu mesurer ?\n");
            scanf("%d", &longueur_m);
            printf("Quel largeur veux-tu mesurer ?\n");
            scanf("%d", &largeur_m);
            surfaceRectangle_m2 = longueur_m * largeur_m;
            printf("l'air du rectangle est de %f \n", surfaceRectangle_m2);
            break;

        }
        switch (geometrie) {
        case Triangle:
            printf("Quel Base veux-tu mesurer ?\n");
            scanf("%d", &longueur_m);
            printf("Quel hauteur veux-tu mesurer ?\n");
            scanf("%d", &hauteur_m);
            surfacetriangle_m2 = (longueur_m * hauteur_m) / 2;
            printf("l'air du triangle est de %f \n", surfacetriangle_m2);
            break;

        }

        switch (geometrie) {
        case Cercle:
            printf("Quel rayon veux-tu mesurer ?\n");
            scanf("%d", &rayon_m);
            surfaceCercle_m2 = M_PI * (rayon_m * rayon_m);
            printf("l'air du cercle est de %f \n", surfaceCercle_m2);
            break;

        }
        switch (geometrie) {
        default:
            break;
        }
    }
    return 0;
}
