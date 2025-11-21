#include <stdio.h>

int main() {
    printf("Tailles des types de base en C (en variables) :\n\n");

    // Types caractères
    printf("char (signed)        : %zu variable(s)\n", unite(signed char));
    printf("char (unsigned)      : %zu variable(s)\n", unite(unsigned char));

    // Types entiers courts
    printf("short (signed)       : %zu variable(s)\n", unite(signed short));
    printf("short (unsigned)     : %zu variable(s)\n", unite(unsigned short));

    // Types entiers
    printf("int (signed)         : %zu variable(s)\n", unite(signed int));
    printf("int (unsigned)       : %zu variable(s)\n", unite(unsigned int));

    // Types long
    printf("long int (signed)    : %zu variable(s)\n", unite(signed long int));
    printf("long int (unsigned)  : %zu variable(s)\n", unite(unsigned long int));

    // Types long long
    printf("long long (signed)   : %zu variable(s)\n", unite(signed long long int));
    printf("long long (unsigned) : %zu variable(s)\n", unite(unsigned long long int));

    // Types à virgule flottante
    printf("float                : %zu variable(s)\n", unite(float));
    printf("double               : %zu variable(s)\n", unite(double));
    printf("long double          : %zu variable(s)\n", unite(long double));

    return 0;
}

