#include <stdio.h>

int main() {
    float x, y;

    // Demander de saisir deux nombres
    printf("Entrez le premier nombre : ");
    scanf("%f", &x);

    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &y);

    printf("\nAddition       : %f\n", x + y);
    printf("Soustraction   : %f\n", x - y);
    printf("Multiplication : %f\n", x * y);

    if (y != 0) {
        printf("Division       : %f\n", x / y);
    } else {
        printf("Division       : Erreur (division par zero)\n");
    }

    return 0;
}