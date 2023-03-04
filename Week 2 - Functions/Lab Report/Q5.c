/* 5. Write a function named “velocityCalc” which returns an appropriate value for the formula
“v=u+at”, where v is the final velocity, u is the initial velocity, a is the acceleration and t is
the time that has elapsed. Depending upon which variable is set to “NAN” when the
function is called, your function should work it out and return the value. */

#include <stdio.h>
#include <math.h>
void VelocityCalc(float v, float u,float a,float t){
    if (isnan(v)){
        v = u+(a*t);
        printf("Final velocity is %.2f m/s",v);
    }
    else if(isnan(u)){
       u = v-(a*t);
       printf("Initial velocity is %.2f m/s",u);
    }
    else if(isnan(a)){
       a = (v-u)/t;
       printf("Accleration is %.2f m/s2",a);
    } else {
      t = (v-u)/a;
    printf("Time is %.2f S",t);
    }            
}
void main(){
float x,y,z,k;
VelocityCalc(NAN,18.44,4.77,6.22); 

}