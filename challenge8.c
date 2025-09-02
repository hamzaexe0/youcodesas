#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double produit, racine;

    printf("Entrez trois nombres: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    produit = a * b * c;
    racine = cbrt(produit);

    printf("Le produit : %f\n", produit);
    printf("la racine cubique de produit: %f\n", racine);

    return 0;
}