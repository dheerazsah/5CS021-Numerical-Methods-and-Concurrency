#include <stdio.h>

void midpoint(int x1, int y1, int x2, int y2){
    float midpointX, midpointY;
    midpointX = (x1+x2)/2;
    midpointY = (y1+y2)/2;
    printf("Midpoint (x)= %.2f \n", midpointX);
    printf("Midpoint (y)= %.2f \n", midpointY);
}

void main(){
    midpoint(5,5,9,9);
}