#include <stdio.h>
 int main() 
{ 
	int i,N,t,cnt;
	while(scanf("%d",&N) == 1)
	{
	    cnt = 0;
		for(i = 1; i <= N; ++i)
		{ 
			t = i;
			while(t)
				{if(t % 10 == 1)
				++cnt;
				t /= 10;} 
		} 
		printf("cnt = %d\n",cnt);
	}
	return 0;
}
