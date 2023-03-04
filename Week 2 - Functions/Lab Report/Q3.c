/* 3. Write a void function which finds and prints the midpoint coordinates of a line. The function
should take in four parameters (x1, y1, x2 and y2).
xmid=(x1+x2)/2, ymid=(y1+y2)/2 */

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