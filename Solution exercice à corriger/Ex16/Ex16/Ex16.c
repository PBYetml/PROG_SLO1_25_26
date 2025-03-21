// Ex16.c Christian HUBER 21.03.2016
// Canevas pour l'exercice 16 SL124_LOGA

#include <stdio.h>

// ZipDate
// Cette fonction recoit une date sous forme unsigned char jour, unsigned char mois et short ans
// Elle retourne un unsigned short organisé de tel manière que l'année et codée sur 7 bits, le mois sur 4 
// et le jour sur 5 
// La valeur codée de l'année correspond à la différence à 1950
// Utilisez une union pour obtenir la valeur unsigned short, la fonction retourne le 
// 
typedef union JMA {
	unsigned short jour : 5;
	unsigned short mois : 4;
	unsigned short années : 7;
	
}JMA;

unsigned short ZipDate(JMA, ) {

}

int main (void)
{
	char  UserAnswer;
	short sortie;

	// Taille minimum = short, même avec préfixe h dans scanf
	unsigned short day, month;
	unsigned short year;
	
	// A adapter !!
	printf ("Ex16 Zitouni Bilal\n");
	
	sortie = 0; // faux, reste dans la boucle
	do {
		printf("T pour test, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer,2);
		
		switch (UserAnswer) {
			
			case 'T':
			case 't':
				// Test (Exercice champs de bit)
				printf("Entrez jour mois annee ! \n");
				scanf_s("%hd%hd%hd%*c", &day, &month, &year);
				// introduisez l'appel de ZipDate ICI


				// Affichage du résultat


			break;

			case 'Q':
			case 'q':
				sortie = 1;
			break;
		}
	
	} while (sortie == 0);

	return (0);
}