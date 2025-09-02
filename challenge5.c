#include <stdio.h>

int main() {
    int temperature;
    printf("Enter your water temperature: \n");
    scanf("%d", &temperature);
    if (temperature < 0) {
        printf("Etat de l'Eau : solide (glace)");
    }
    else if (0 <= temperature && temperature < 100) {
        printf("Etat de l'Eau : liquide");
    }
    else {
        printf("Etat de l'Eau : gaz");

    }


}