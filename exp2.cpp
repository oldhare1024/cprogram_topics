#include <stdio.h>
int main(void){

double sum = 0;
double a=1,b=1;
double x=0 ;
for ( int i=0; i <20 ; i++)
{
  a = a + b;
  b = a - b;
  x = a/b;
  sum += x;
}

printf("%10.2lf",sum);


}
