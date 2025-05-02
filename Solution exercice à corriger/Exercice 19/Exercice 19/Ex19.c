// Canevas  Ex19  SL124_LOGA  C. HUBER 


#include <stdio.h>
#include <string.h>  // pour manipulation de String
#include "Header.h"
// Fonction ShowInfo



// Fonction ShowFrame


// Programme principal
int main (void)
{
	S_DefRectangle Rectangle_user;
	char UserAnswer;
	char tb[16];
	// Variables pour test A
	

	// Variables pour test B
	

	// A adapter !!!
	printf("Ex19 Prenom NOM \n ");

	do {
		printf("Test A ou B, Q pour Quitter \n ");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA:  \n ");
				// Initialisation champ par champ
				// Pour DefRect1 :  "Surface" , 22.5, 37.2  surface par calcul
				printf("choisir une largeur \n ");
				scanf("%lf", &(Rectangle_user.Rectangle.rs.l)); // union que je mette .rs ou .rp ça change rien

				printf("choisir une hauteur \n ");
				scanf("%lf", &(Rectangle_user.Rectangle.rs.h));

				printf("entrée surface ou perimetre \n ");
				//scanf_s("%s", Rectangle_user.Text);
				scanf("%s", tb);

				strcpy(Rectangle_user.Text, tb);

				if (strcmp(D_S,Rectangle_user.Text)==0)
				{
					CalculeSurface(&Rectangle_user);
				}
				else {
					CalculePerimetre(&Rectangle_user);
				}
				// Pour DefRect2 :  "Perimetre" , 19.4, 57.1 périmètre par calcul 
				

				// Appel 2x de la fonction pour affichage
				ShowInfo(Rectangle_user);
				while (getchar() != '\n');
			break;

			case 'B':
			case 'b':
				printf("TestB:  \n ");
				// Frame1 :  Message = "Hello !"
				

				
				// Frame2 :  Message = "Ecole Superieure"
				

				// Affiche la taille de la structure
				
				// Appel de 2x ShowFrame
				
			break;



		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}