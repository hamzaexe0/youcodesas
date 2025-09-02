#include <stdio.h>

int main() {
    float kilometres;
    float yards;

    printf("Enter your distance in kilometers: \n");
    scanf("%f", &kilometres);
    yards = kilometres * 1093.61;

    printf("%.2f kilometers is equal to %.2f yards.\n", kilometres, yards);

    return 0;
}