#include <stdio.h>
int main(){
float celesius, kelvin;
printf("Entrez la temperature en Celsius :\n");
scanf("%f", &celesius);
kelvin = celesius + 273.15;
printf(" ton temperature En kelvin = %.2f", kelvin);


return 0;


}