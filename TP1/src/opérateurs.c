#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // ===== Opérations arithmétiques =====
    int somme = a + b;
    int difference = a - b;
    int produit = a * b;
    int division = a / b;
    int reste = a % b;

    printf("a = %d, b = %d\n\n", a, b);

    printf("Addition a + b       : %d\n", somme);
    printf("Soustraction a - b   : %d\n", difference);
    printf("Multiplication a * b : %d\n", produit);
    printf("Division a / b       : %d\n", division);
    printf("Modulo a %% b         : %d\n", reste);

    // ===== Opérations logiques / comparaisons =====
    int egal = (a == b);      // 1 si vrai, 0 si faux
    int superieur = (a > b);  // 1 si vrai, 0 si faux

    printf("\nComparaisons logiques :\n");
    printf("a == b ?       : %d\n", egal);
    printf("a > b ?        : %d\n", superieur);

    return 0;
}

