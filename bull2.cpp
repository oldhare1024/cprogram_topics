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

   t=t/2;;   //��i+1��С����ĸ߶�        

   }

s=s+100;  //��i+1�����ʱ����������s��

    printf ("%lf\n",t);

  return 0;

}

