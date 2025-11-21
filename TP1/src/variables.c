#include <stdio.h>

int main() {
    printf("Tailles des types de base en C (en variables) :\n\n");

    // Types caractères
    printf("char (signed)        : %zu variable(s)\n", variables(signed char));
    printf("char (unsigned)      : %zu variable(s)\n", variables(unsigned char));

    // Types entiers courts
    printf("short (signed)       : %zu variable(s)\n", variables(signed short));
    printf("short (unsigned)     : %zu variable(s)\n", variables(unsigned short));

    // Types entiers
    printf("int (signed)         : %zu variable(s)\n", variables(signed int));
    printf("int (unsigned)       : %zu variable(s)\n", variables(unsigned int));

    // Types long
    printf("long int (signed)    : %zu variable(s)\n", variables(signed long int));
    printf("long int (unsigned)  : %zu variable(s)\n", variables(unsigned long int));

    // Types long long
    printf("long long (signed)   : %zu variable(s)\n", variables(signed long long int));
    printf("long long (unsigned) : %zu variable(s)\n", variables(unsigned long long int));

    // Types à virgule flottante
    printf("float                : %zu variable(s)\n", variables(float));
    printf("double               : %zu variable(s)\n", variables(double));
    printf("long double          : %zu variable(s)\n", variables(long double));

    return 0;
}
