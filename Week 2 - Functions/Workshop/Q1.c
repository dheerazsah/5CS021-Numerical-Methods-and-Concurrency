// 1. Write a void function which finds and prints the midpoint coordinates of a line. The
// function should take in four parameters (x1, y1, x2 and y2). xmid=(x1+x2)/2, ymid=(y1+y2)/2

#include <stdio.h>
 
void midpoint(float x1, float x2, float y1, float y2){
    float xmid=(x1+x2)/2;
    float ymid=(y1+y2)/2;
  
    printf("\n%f %f ",xmid, ymid);
}
int main()
{
    float x1, x2, y1, y2;
    printf("Enter value for x1, x2, y1, y2: \n");
    scanf("%f %f %f %f",&x1, &x2, &y1, &y2);
    
    midpoint(x1, x2, y1, y2); //calling the function
    return 0;
}