#include <stdio.h>

int main()

{

   double h=100;

   double t = h/2;

   double s=0.0;

   int i;

   for (i=1;i<10;i++)

   {   

   s=s+2*t;         

   t=t/2;;   //第i+1次小球弹起的高度        

   }

s=s+100;  //第i+1次落地时，共经过了s米

    printf ("%lf\n",t);

  return 0;

}

