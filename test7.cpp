#include<stdio.h>
int main()
{
 int x,y,z;
 for(x = 1;x < 9;x ++) {
  for(y = 1;y < 12;y ++)  {
   z = 36-x-y;
   if(z%2==0) {
    if(4*x + y*3 + z/2 == 36)
     printf("%d %d %d\n",x,y,z);
   } 
  }
 } 
 return 0;
 
}
