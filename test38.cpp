#include <stdio.h>
int main()
	{
	 char a[100],b,c;
	 int i=0;
	 gets(a);
	 b=getchar();
	 getchar(); 
	 c=getchar();
	 while(a[i]!='\0')
	      {
	      	if(a[i]==b)
	      	   a[i]=c;
	      	i++;
		  }
	 printf("%s",a);
	 return 0;	
	}

