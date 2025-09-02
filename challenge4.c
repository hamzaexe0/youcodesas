#include <stdio.h>

int main() {
    float km;
    float ms;

    printf("Enter your vitesse on km/h: \n");
    scanf("%f", &km);
    ms = km * 0.27778;

    printf("m/s = %.3f .\n", ms,km);

    return 0;
}