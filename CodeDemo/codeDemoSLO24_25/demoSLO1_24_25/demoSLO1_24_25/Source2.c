//-----------------------------------------------------------------------------------//
// Projet Name 			: demoSLO1_24_25
// File Name 			: Source2.c 
// Creation Date 		: 19.09.2024
// Modification Date	: 10.10.2024
//
// Authors 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo for SLO 1 students  
//                        - use of standard libraries and personal headerfiles  
//                        - Integer, Real, enumeration types 
//                        - function declaration 
// Remarks              :       
//----------------------------------------------------------------------------------//

//-- Standard libraries --//
#include <stdio.h>	// used for the printf and scanf functions 
                    // VC++ News (since 2005, 2008, 2010 et 2015) : scanf_s function replaces the scanf
#include <limits.h>
#include <stdint.h> // normalized Integer Type 

//-- using Personnal HeaderFile --//
#include "fonctionsSLO.h"

//-- Globale constante --// 
const double PI = 3.14;     // no memory optimization  




/* ----------------------------------------------------------------------------------- 
* Function Name                     : slo
* Input - Ouput - I/O parameters    : void - int - N/A
* Description                       : demonstrating the declaration of types 
                                      (integer, real, enumration) and the use of 
                                      operators 
* Modification Date                 : 10.10.2024
* Notes                             : 
----------------------------------------------------------------------------------- */
int slo(void)
{
    //-- déclaration possible --//
    //-- type + name ; 
    //-- type entier standart --//
    //-- signé  
    char a = 10;         // -- 8bits / 1 byte
    short b = 10;        // -- 16bits / 2 bytes 
    int c = 10;          // -- 32bits / 4 bytes - ATTENTION : dépend soit du processeur ou du compilateur 
    long long d;    // -- 64bits ? 

    //-- non signé  
    unsigned char a1;  // -- 8bits 
    unsigned b2 = 3.14; // A EVITER !!!!  

    //-- constante numérique
    // 3.14 -> mémoire 8 octets
    // 3    -> mémoire 4 octets

    //-- type entier normalisé - ATTENTION LIBRAIRIE --//
    //-- signé  
    int8_t a2;     // -- 8bits 
    int16_t b3;    // -- 16bits 
    int32_t c2;     // -- 32bits 
    int64_t d2;     // -- 64bits ? 

    //-- non signé
    uint8_t a3;     // -- 8bits 
    uint16_t b4;    // -- 16bits 
    uint32_t c3;     // -- 32bits 
    uint64_t d3;   // -- 64bits ? 

    //-- type réel 
    float r1;     // -- 32bits 
    double r2;    // -- 64bits 

    //-- appel de fonction pour connaître la taille d'un type ou variable 
    // sizeof(long)

    printf("valeur long : %d octet", sizeof(3));
    printf("\n valeur de b2 : %d", b2); 

    //-- oppérateur -- 
    //-> affectation
    a2 = b3 = c2 = 100; // <- lecture
    
    //-> cast
    //-> cast implicite 
    a2 = b3 = c2 = 100; // a2(int8_t - 1 octet) - b3(int16_t - 2 octets) - c2(int32_t - 4 octets) - 100 (4 octets) 

    //-> cast normale 
    a2 = (int8_t)b3 = (char)c2 = (int8_t)1000; // a2(int8_t - 1 octet) - b3(int16_t - 2 octets) - c2(int32_t - 4 octets) - 100 (4 octets) 

    //-> arithmétique 
    // addition (+)
    c = a + b; 
    a = a + b; 
    a += b; 

    //soustraction (-)
    c = a - b;
    a = a - b;
    a -= b;


    // multiplication (*) 
    c = a * b;
    a = a * b;
    a *= b;
    
    // division (/) - WARNING -> ici b ne doit pas être égale à zéro (entier ou réel) 
    c = a / b;
    a = a / b;
    a /= b;

    // modulo (%) -> recuperation du reste - WARNING : utilsiation uniquement avec des types entiers 
    c = a % 2;  // valeur possible possible de c ?  => 0 - 1 
    c = b % 16; // valeur possible possible de c ? => 0 à 15 

    //-> logique (bit à bit) 
    // OU - OR (|)
    a = a | b; 
    a |= b; 

    // ET - AND (&)
    a = a & b;
    a &= b; 

    // OU-ECLUSIF - XOR (^)
    a = a ^ b;
    a ^= b; 

    // Inverseur - NO (~) 
    a = ~a;

    // décalage 
    // droite ( >> ) décalage en bit 
    // non signé 
    a3 = (uint8_t)255; 
    a3 = a3 >> 9;  

    // signé 
    a = (char)127; 
    a = a >> 4;

    // gauche ( << ) décalage en bit 
    // non signé 
    a3 = (uint8_t)255;
    a3 = a3 << 9;

    // signé 
    a = (char)127;
    a = a << 4;

    //-- post incérmentationn 
    a = 10; 
    b = 1;

    c = a + b++;            

    d = a + (b++); 

    a = 10;
    b = 1;

    c = a + ++b;



    // si a faut 0 => paranthèse retourne 0 
    // si a différent de 0 => parenthèse retourne 1
    if (a) {}
 
    //-> logique (test) à utiliser dans des condition => généralement avec if
    //-- Test ET/AND (&&)  -> 2 condition
    if ((a < b) && (a != b))
    {
    }

    //-- Test OU/OR (||)  -> 2 condition
    if ((a < b) || (a != b))
    {
    }

    //-- TEST inversion (!)
    if (!(a < b))
    {}


    //if(a && b == 10) // A évité !!!!

    //-> relationnel (test) à utiliser dans des condition => généralement avec if
    // test d'égalité (==)
    if (a == b) 
    {

    }
    // test d'inégalité (!=)  
    else if (a != b)
    {
    }
    // test plus petit 
    else if (a < b)
    {
    }
    // test plus petit ou égal 
    else if (a <= b)
    {
    }
    // test plus grand 
    else if (a > b)
    {
    }
    // test plus grand ou égal 
    else if (a >= b)
    {

    }



    switch (a)
    {
        case 10 : 
        case 100 : 
            // instruction à la valeur 10 

            break; 

        case 1000 : 
            // instrcution  lié au cas 100 

        default : 
            break; 

    }


  return(0);
}