#include<stdio.h>
_Bool caps(char a,char b){
	if(a==b+32||a==b-32)
	   return b>a;
	if(a>=97)
	   a-=32;
	if(b>=97)
	   b-=32; 
	return b>a;
}
int main()
{
    int N,M,i=0,j=0;//定义变量
    char key,card1[62],card2[31];//定义数组
    scanf("%d %d",&N,&M);//输入变量
    scanf("%s",card1);
    scanf("%s",card2);
    for(i=N;i<N+M;i++)
	{
		card1[i]=card2[j];
		j++;
	}
        for (i=N;i<M+N+1;i++){
                key = card1[i];
                for(j=i-1;j>=0&&caps(key,card1[j]);j--)
                        card1[j+1] = card1[j];
                card1[j+1] = key;
        }
	printf("%s",card1); 
	return 0;
}
