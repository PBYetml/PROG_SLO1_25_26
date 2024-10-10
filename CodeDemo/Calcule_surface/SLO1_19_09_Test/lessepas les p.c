//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: Sourec.c
// Date de création 	: 30.09.2015
// Date de modification : 07.01.2016
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: x.x
//
// Description          :CDC avancé : 
//						toujours dans la fonction main reprendre le principe minimal, 
//						ajout des fcts permettant de faire des demandes utilisateurs (affichage + saisie clavier) 
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
//Ta mère :D 

#define _USE_MATH_DEFINES


//-- apple de librairies
#include <math.h> //
//pour la popup
#include <stdio.h>

//-- apple de headerfile -> vos fisher
//#define _USE_MATH_DEFINES;

//-- prototype - WARNING not here

//-- variable globale - WARNING à évité

//-- déclaration de fonction

//-- fonction principale -> main

// type_de_sortie nom_fct (param_entree1, param_entree2, ...)


void main()
{
	while (1)
	{
		//-- déclaration de variable --//
			//type nom_variable
			//type entier
		int shape, Hight_m, lenght_m, radius_m, pi_m = 3.14;

		//For the surface aria
		float surfacetriangle_m2, surfaceCarre_m2, circle_m2;

		// intruction 1
		// Formats what we get to a single chatacter
		int scanf(const char* format);

		//First question
		printf("Make a choise: Triangle(0), Square(1), or circle(2):\n ");

		//Wait for shape to come
		scanf("%d", &shape);
		//Feed-back on what shape chosen
		switch (shape)
		{
		case 0:
			printf("shape chosen = Triangle\n");
			break;

		case 1:
			printf("shape chosen = Square\n");
			break;

		case 2:
			printf("shape chosen = circle\n");
			break;

		default:
			break;
		}

		//-------------------------------------

		// triangle
		if (shape == 0)
		{
			//Second question
			printf("Hight ?\n ");
			//Wait for dimentions
			scanf("%d", &Hight_m);
			//Feed-back on what longeur chosen
			printf("Hight = %d\n", Hight_m);

			//-------------------------------------

			//Second question
			printf("lenght ?\n ");
			//Wait for dimentions
			scanf("%d", &lenght_m);
			//Feed-back on what largeur chosen
			printf("lenght = %d\n", lenght_m);

			//Result
			surfacetriangle_m2 = (lenght_m * Hight_m / 2);
			printf("surfacetriangle %f\n", surfacetriangle_m2);
			printf("Done :DD\n");

			//-------------------------------------
		}

		// square
		if (shape == 1)
		{
			//-------------------------------------

			//Second question
			printf("Hight ?\n ");
			//Wait for dimentions
			scanf("%d", &Hight_m);
			//Feed-back on what longeur chosen
			printf("Hight = %d\n", Hight_m);

			//-------------------------------------

			//Second question
			printf("largeur ?\n ");
			//Wait for dimentions
			scanf("%d", &lenght_m);
			//Feed-back on what largeur chosen
			printf("longeur = %d\n", lenght_m);

			//Result
			surfaceCarre_m2 = (lenght_m * Hight_m);
			printf("surfaceCarre %f\n", surfaceCarre_m2);
			printf("Done :P\n");

			//-------------------------------------
		}

		// circle
		if (shape == 2)
		{

			//Second question
			printf("radius ?\n ");
			//Wait for dimentions
			scanf("%d", &radius_m);
			//Feed-back on what radius chosen
			printf("radius %d\n", radius_m);

			//Result
			circle_m2 = (radius_m * pi_m);
			printf("circle %f\n", circle_m2);
			printf("Done :0\n");

			//-------------------------------------
		}

	}
	
}