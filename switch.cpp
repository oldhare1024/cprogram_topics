#include<stdio.h>
main( )
{
    int a=2,b=7,c=5;
	switch(a>0)
	{
		case 1: switch(b>0)
			{ case 1: b++; break;
			case 0: c++; break;}
		case 2: switch(c==5)
			{ case 0 : a++; break;
			case 1 : b++; break;
			case 2: c++; break;}
	    default : a++;
	}
    printf("%d %d %d",a,b,c);
}
