/* Write a void function named “equations” which solves simultaneous equations. Your
program will take six parameters. E.g. function(double a, double b, double c, double d,
double e, double f){}. By solving simultaneous equations, you are finding where the two
lines cross each other, so your function should print an x and y coordinate.
ax+by=c ......(i)
dx+ey=f........(ii)
a = number in front of x of equation one
b = number in front of y of equation one
c = constant of equation one

d = number in front of x of equation two
e = number in front of y of equation two
f = constant of equation two */

#include<stdio.h>
void main()
{
 float a1,a2,b1,b2,c1,c2,d[4],x,y;
 printf("Enter a1,b1 and c1 of a1x+b1y=c1\n");
 scanf("%f%f%f",&a1,&b1,&c1);
 printf("Enter a2,b2 and c2 of a2x+b2y=c2\n");
 scanf("%f%f%f",&a2,&b2,&c2);
 if(((a1*b2)-(a2*b1))!=0)
 {
    d[0]=(c1/a1);
    d[1]=(-1)*(b1/a1);
    d[2]=(c2/a2);
    d[3]=(-1)*(b2/a2); 
    y=((d[2]-d[0])/(d[1]-d[3]));
    x=d[0]+(d[1]*y);
    printf("X=%f\nY=%f\n",x,y);
 }
 if(((a1*b2)-(a2*b1))==0&&((b1*c2)-(b2*c1))==0 && ((a2*c1)-(a1*c2))==0)
 {
  if(c1/a1>=0)
  printf("Infinite number of solutions\nX=%fY+%f\n",(-1*b1)/a1,c1/a1);
  else
   printf("Infinite number of solutions\nX=%fY%f\n",(-1*b1)/a1,c1/a1);
  
 }
 if(((a1*b2)-(a2*b1))==0&&((b1*c2)-(b2*c1))!=0 && ((a2*c1)-(a1*c2))!=0)
 {
  printf("No Solutions\n");
 }
} 