#include <stdio.h>
void main() {
    int p;
    int t;
    float r;
    
    printf("Enter Principal: ");
    scanf("%d", &p);
    printf("Enter Time: ");
    scanf("%d", &t);
    printf("Enter Rate: ");
    scanf("%f", &r);
    float i = (p*t*r)/100;
    printf("Interest is: %f", i);
}