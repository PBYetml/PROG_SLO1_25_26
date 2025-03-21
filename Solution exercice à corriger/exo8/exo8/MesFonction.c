#include <stdio.h>

unsigned short FtestA(int a) {
    int i = 0;
    int code = 0;
    for (i = 0; i < a; i++) {
        printf("*");
    }
    printf("\n");

    if (1 < a < 15) {
        code = 1;
        printf("code d'éxecution = %d\n", code);
    }
    else if (a > 15) {
        code = 2;
        printf("code d'éxecution = %d\n", code);
    }
    else if (a <= 0) {
        code = 0;
        printf("code d'éxecution = %d\n", code);
    } 
    else {
        printf("t'est teuber \n");
    }
    return code;
}


