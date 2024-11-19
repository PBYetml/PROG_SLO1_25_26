/*---------------------------------------------------------------------------------- -//
// Projet Name 			: SolusQ6_decoupageInfo
// File Name 			: main.c
// Creation Date 		: 31.10.2024
// Modification Date	: 12.11.2024
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.2
//
// Description          : main programm to use the "demoCode.." source file 
//
// Remarks				: complet programm 
//----------------------------------------------------------------------------------*/
//-- preprocessor directive to delete warnings --//
#pragma warning(disable : 4996)		//-- the number corresponds at the warning linked with the scanf function 

//-- standard library declaration --// 
#include <stdio.h>					// for the Input-Ouput system 
#include <stdlib.h>					// to use the OS commands 

//-- personnal library declaration --// 
#include "testFunctions.h"

//-- main programm --// 
void main()
{
	//-- variable declarations --//
	char voltage, current, power, resistor;
	char bufferInfoTb[4], iteration = 0;

	int assembledFrame; 

	//-- welcome message to the user --// 
	printf("Solution Complete pour la question %d - TEST%d - Classe %s - Annee : %d \n", NUMBER_QUESTION, VERSION, CLASS, YEAR);

	//-- loop to manage the keyboard buffer --// 
	do
	{
		//-- user's message and data recovery --//
		printf("\ninserer une valeur de tension : ");
		scanf("%d", (int*)&voltage);

		//-- clear buffer --// 
		bufferInfoTb[iteration] = ClearBufferKeyBoard(); 
		iteration += 1; 
		
		//-- user's message and data recovery --//
		printf("\ninserer une valeur de courant : ");
		scanf("%d", (int*)&current);

		//-- clear buffer --// 
		bufferInfoTb[iteration] = ClearBufferKeyBoard();
		iteration += 1;

		//-- user's message and data recovery --//
		printf("\ninserer une valeur de puissance : ");
		scanf("%d", (int*)&power);

		//-- clear buffer --// 
		bufferInfoTb[iteration] = ClearBufferKeyBoard();
		iteration += 1;

		//-- user's message and data recovery --//
		printf("\ninserer une valeur de resistance : ");
		scanf("%d", (int*)&resistor);

		//-- clear buffer --// 
		bufferInfoTb[iteration] = ClearBufferKeyBoard();
		
	} while (!((bufferInfoTb[0] == 0) && (bufferInfoTb[1] == 0) && (bufferInfoTb[2] == 0) && (bufferInfoTb[3] == 0)));

	//-- function call --// 
	assembledFrame = AssembyDatas(voltage, current, power, resistor); 

	DatasCutting(assembledFrame);

	//-- pausing --//
	system("pause");

}
