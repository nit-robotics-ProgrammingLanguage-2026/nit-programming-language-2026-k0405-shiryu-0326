#include <stdio.h>
 
int main(void) {
 double r = 4.0;
 double pi = 3.141592;
 double radius = r / 2.0;
 double x;
 double a;
 if (scanf("%lf",&x)!=1){ return 1;}
a=(x*360.0)/(2.0*pi*radius);
printf("%f\n", a);
     
    return 0;
}