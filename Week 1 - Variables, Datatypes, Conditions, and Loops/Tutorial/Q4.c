#include <stdio.h>
void main() {
    float c;
    printf("Enter temperature in Celcius: ");
    scanf("%f",&c);
    float F=(c*9/5)+32;
    printf("Celcius in Faheranehiet is: %f", F);
    
    float f;
    printf("Enter temperature in Faherneit: ");
    scanf("%f",&f);
    float C=(f-32*5/9);
     printf("Celcius in Faheranehiet is: %f", C);
}