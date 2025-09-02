#include <stdio.h>

int main() {
float a,b,c;
    float moyenne;
    printf("Entrez le premier nombre: \n");
    scanf("%f", &a);
    printf("Entrez le deuxieme nombre: \n");
    scanf("%f", &b);
    printf("Entrez le troisiem nombre: \n");
    scanf("%f", &c);
    moyenne = (a * 2 + b*3 + c*5) / (2 + 3 + 5);
    printf("Le moyenne ponderee : %.2f", moyenne);



}