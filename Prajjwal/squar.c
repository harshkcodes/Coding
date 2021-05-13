#include<stdio.h>
#include<math.h>

main()
{
   float x, y, sq, sinx, cosx, tanx;
   x=4.0; 
   y=30.0;
   sq=sqrt (x);
   y=30*(3.142/180.0);
   sinx=sin(y);
   cosx=cos(y);
   tanx=tan(y);
   printf("Square root of x = %f\n", sq);
   printf("Sine value of y = %f\n", sinx);
   printf("Cosine value of y = %f\n", cosx);
   printf("Tangent value of y = %f\n", tanx);

    return 0;


}
