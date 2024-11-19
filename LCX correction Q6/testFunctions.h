/*---------------------------------------------------------------------------------- -//
// Projet Name 			: SolusQ6_decoupageInfo
// File Name 			: testFunction.h
// Creation Date 		: 31.10.2024
// Modification Date	: 12.11.2024
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.3
//
// Description          : headerfile to implement different protoype 
//
// Remarks				: complet programm
//----------------------------------------------------------------------------------*/
//-- Standard libraries delcaration--//
#include <stdint.h>		//-- standard library of integer 

#ifndef TESTS_FUNCTIONS_H
#define TESTS_FUNCTIONS_H

//-- declaration of constants or definitions --//
#define CLASS			"SLO1"
#define NUMBER_QUESTION	6
#define YEAR			2024
#define VERSION			01

//-- prototype declaration --// 
int8_t ClearBufferKeyBoard();																		// clear the Buffer KeyBoard
int AssembyDatas(int8_t voltageData, int8_t currentData, int8_t powerData, int8_t resistorData); 	// assembly of 4 bytes in an only variable
void DatasCutting(int frame);																		// divinding frame into 4 parts



#endif // !TESTS_FUNCTIONS_H

