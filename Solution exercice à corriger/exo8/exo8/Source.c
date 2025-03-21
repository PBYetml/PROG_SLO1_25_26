//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: 30.09.2015
// Date de modification : 07.01.2016
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: x.x
//
// Description          : 
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
#include <stdlib.h>  // Nouveauté du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf

#include "MesFonction.h" // include the header file

int main(void) {
    
    int ValA = 0;
    int ValB = 0;
    char Ftest = 0;
    char buffer = 0;

    printf("Exercice 8 : Zitouni Bilal \n");
    printf("quel teste voulez vous utiliser A B ou C, D pour quitter");
    scanf_s(" %c", &Ftest );
    while (getchar() != '\n');
    switch(Ftest) {
        case 'A':
            printf("TestA : entrez un nombre entre 1 et 15");
            scanf_s(" %d", &ValA);
            FtestA((int)ValA);

            printf("Test A.B ou C. D pour Quitter");
            break;
        case 'B':
            printf("TestB : entrez un nombre entre 1 et 15");
            scanf_s(" %c", (int*)&ValA);
            FtestA((int)ValA);

            printf("Test A.B ou C. D pour Quitter");
    }

        

        return 0;
}