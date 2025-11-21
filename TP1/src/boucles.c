#include <stdio.h>

int main() {
    int compteur;

    // Demander la taille du triangle (<10)
    do {
        printf("Entrez la taille du triangle (inférieure à 10) : ");
        scanf("%d", &compteur);
    } while (compteur >= 10 || compteur <= 0);

    printf("\nTriangle rectangle avec while :\n\n");

    int i = 1;  // ligne
    while (i <= compteur) {
        int j = 1;  // colonne
        while (j <= i) {
            if (i % 2 == 0 && j % 2 == 0)  // symboles conditionnels
                printf("# ");
            else
                printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

