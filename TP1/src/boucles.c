#include <stdio.h>

int main() {
    int compteur;

    // Demander la taille du triangle (<10)
    do {
        printf("Entrez la taille du triangle (inférieure à 10) : ");
        scanf("%d", &compteur);
    } while (compteur >= 10 || compteur <= 0);

    printf("\nTriangle rectangle avec for :\n\n");

    for (int i = 1; i <= compteur; i++) {          // Boucle pour les lignes
        for (int j = 1; j <= i; j++) {             // Boucle pour les colonnes
            if (i % 2 == 0 && j % 2 == 0)          // Remplace certains '*' par '#'
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
