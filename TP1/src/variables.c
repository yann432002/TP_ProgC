#include <stdio.h>

int main() {
    printf("Tailles des types de base en C (en variables) :\n\n");

    printf("char (signed)        : %zu %s\n", size_signed_char, unite);
    printf("char (unsigned)      : %zu %s\n", size_unsigned_char, unite);

    printf("short (signed)       : %zu %s\n", size_signed_short, unite);
    printf("short (unsigned)     : %zu %s\n", size_unsigned_short, unite);

    printf("int (signed)         : %zu %s\n", size_signed_int, unite);
    printf("int (unsigned)       : %zu %s\n", size_unsigned_int, unite);

    printf("long int (signed)    : %zu %s\n", size_signed_long, unite);
    printf("long int (unsigned)  : %zu %s\n", size_unsigned_long, unite);

    printf("long long (signed)   : %zu %s\n", size_signed_long_long, unite);
    printf("long long (unsigned) : %zu %s\n", size_unsigned_long_long, unite);

    printf("float                : %zu %s\n", size_float, unite);
    printf("double               : %zu %s\n", size_double, unite);
    printf("long double          : %zu %s\n", size_long_double, unite);

    return 0;
}
