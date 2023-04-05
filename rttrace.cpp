#include<stdio.h>
int main()
{
    int i,j=0,vR,vT,t,s,l,tT=0,tR=0;
    scanf("%d%d%d%d%d",&vR,&vT,&t,&s,&l);
    for(i=0;i<=l/vT;i++)
    {

        if(vR*j-vT*i>=t)
        tR+=s;
        else 
        {if(vR*j>=l)
        {j++;
        break;}
        j++;}
    }
    tT=l/vT;
    if(tR==tT)
    printf("D\n%d",tT);
    else if(tR<tT)
    printf("R\n%d",tR);
    else if(tR>tT)
    printf("T\n%d",tT);
    return 0;
}
