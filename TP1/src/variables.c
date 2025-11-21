#include <stdio.h>

int main() {

    // ===== Types caractère =====
    signed char c_signed = -10;
    unsigned char c_unsigned = 250;

    // ===== Types short =====
    signed short s_signed = -2000;
    unsigned short s_unsigned = 40000;

    // ===== Types int =====
    signed int i_signed = -123456;
    unsigned int i_unsigned = 3000000000U;

    // ===== Types long int =====
    signed long int l_signed = -1234567890L;
    unsigned long int l_unsigned = 3000000000UL;

    // ===== Types long long int =====
    signed long long ll_signed = -5000000000LL;
    unsigned long long ll_unsigned = 9000000000ULL;

    // ===== Types à virgule =====
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793238L;

    // ===== Affichage =====
    printf("\n===== AFFICHAGE DES VARIABLES =====\n\n");

    printf("signed char          : %hhd\n", c_signed);
    printf("unsigned char        : %hhu\n", c_unsigned);

    printf("signed short         : %hd\n", s_signed);
    printf("unsigned short       : %hu\n", s_unsigned);

    printf("signed int           : %d\n", i_signed);
    printf("unsigned int         : %u\n", i_unsigned);

    printf("signed long int      : %ld\n", l_signed);
    printf("unsigned long int    : %lu\n", l_unsigned);

    printf("signed long long int : %lld\n", ll_signed);
    printf("unsigned long long   : %llu\n", ll_unsigned);

    printf("float                : %f\n", f);
    printf("double               : %lf\n", d);
    printf("long double          : %Lf\n", ld);

    return 0;
}

